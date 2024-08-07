#include "gui_sfml.h"
#include "Space.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include "../../../all_diclarations.h"

Gui_sfml::Gui_sfml() : hold(false), help(false), volume(false), start(false)
{
	window.create(VideoMode(WIDTH, HEIGHT), "Chess 2", Style::Close);

	sf::Image icon;
	icon.loadFromFile(oxdan_dragon_c + "/my_dragon_ico.jpg");

	// Set the window's icon
	window.setIcon(icon.getSize().x, icon.getSize().y, icon.getPixelsPtr());

	t_board.loadFromFile(oxdan_dragon_c + "/includes/own/resuorces/images/board.jpg"); //loading background
	sp_board.setTexture(t_board);
	hint.setTexture(t_board);
	hint.setTextureRect(IntRect(60, 60, GRID * 2 - 2, GRID - 5));

	t_help.loadFromFile(oxdan_dragon_c + "/includes/own/resuorces/images/helper.png"); //loading toggle button
	sp_help.setTexture(t_help);
	sp_help.scale(0.13f, 0.13f); //the size of the toggle button relative to the picture
	sp_help.setPosition(760, 185);

	texture.loadFromFile(oxdan_dragon_c + "/includes/own/resuorces/images/pieces.png"); //loading of a picture of pieces for their further cutting
	sprite.setTexture(texture);
	sprite.scale(0.240f, 0.240f); //the size of the piece relative to the picture

	t_voice.loadFromFile(oxdan_dragon_c + "/includes/own/resuorces/images/voice.png"); // loading valume image
	sp_voice.setTexture(t_voice);
	sp_voice.scale(0.9f, 0.9f); //the size of the toggle button relative to the picture
	sp_voice.setPosition(804, 24);

	c_keep = { 210, 150, 0, 90 };
	c_move = { 60, 180, 180, 90 };
	c_beat = { 240, 90, 150, 90 };
	c_spec = { 70, 50, 230, 90 };

	font.loadFromFile(oxdan_dragon_c + "/includes/own/resuorces/fonts/font.ttf");
	text.setCharacterSize(36);
	text.setFillColor(Color(0, 0, 0));
	text.setFont(font);
}

Gui_sfml::~Gui_sfml() { }

Game Gui_sfml::draw_board(Space space[8][8], Coord& cd, std::string& stat)
{
	while (window.isOpen())
	{
		Event event;
		v2i = Mouse::getPosition(window); //pull out mouse coordinates
		while (window.pollEvent(event)) //catch events
		{
			if (event.type == Event::Closed)
			{
				window.close();
				return Game::exit;
			}
			if (event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left && !hold) // if pressed left mouse button
			{
				cd.x = (v2i.x - INDENT) / GRID;
				cd.y = (v2i.y - INDENT) / GRID;
				if (stat != "pawn" && !start && v2i.x >= INDENT && v2i.y >= INDENT && 0 <= cd.x && cd.x < 8 && 0 <= cd.y && cd.y < 8 && space[cd.x][cd.y].getPiece())
				{
					hold = true;
					play_sound(Game::hold);
					return Game::hold;
				}
				else if (sp_help.getGlobalBounds().contains(v2i.x, v2i.y))
				{
					play_sound(Game::helper);
					help = !help;
					return Game::helper;
				}
				else if (sp_voice.getGlobalBounds().contains(v2i.x, v2i.y))
					volume = !volume;
			}
			if (event.type == Event::MouseButtonReleased && event.key.code == Mouse::Left) // if released:
			{
				if (start && sp_board.getGlobalBounds().contains(v2i.x, v2i.y))
				{
					start = false;
					play_sound(Game::start);
					return Game::start;
				}
				if (stat == "pawn" && cd.x == int((v2i.x - INDENT) / GRID) && cd.y == 4 && cd.x > 1 && cd.x < 6)
				{
					play_sound(Game::transf);
					stat.clear();
					return Game::transf;
				}
				if (hold) // left mouse button
				{
					cd.i = (v2i.x - INDENT) / GRID;
					cd.j = (v2i.y - INDENT) / GRID;
					hold = false;
					play_sound(Game::relesed);
					return (((cd.x != cd.i || cd.y != cd.j) && v2i.x > INDENT && v2i.y > INDENT && cd.i < 8 && 8 > cd.j) ? Game::relesed : Game::clear);
				}
			}
		}
		window.clear(Color(210, 210, 210)); //background color
		window.draw(sp_board); //background image
		right_banner(); //help toggle button
		Coord ext{ cd.x, cd.y };
		if (stat == "pawn")
		{
			//choosing a piece to replace the pawn
			int color = (space[cd.i][cd.j].getPiece()->getPlayer() ? WHITE : BLACK);
			sprite.setTextureRect(IntRect(1 * SIZE, color, SIZE, SIZE));
			sprite.setPosition(INDENT + GRID * 2, INDENT + GRID * 4);
			window.draw(sprite);
			sprite.setTextureRect(IntRect(2 * SIZE, color, SIZE, SIZE));
			sprite.setPosition(INDENT + GRID * 3, INDENT + GRID * 4);
			window.draw(sprite);
			sprite.setTextureRect(IntRect(3 * SIZE, color, SIZE, SIZE));
			sprite.setPosition(INDENT + GRID * 4, INDENT + GRID * 4);
			window.draw(sprite);
			sprite.setTextureRect(IntRect(4 * SIZE, color, SIZE, SIZE));
			sprite.setPosition(INDENT + GRID * 5, INDENT + GRID * 4);
			window.draw(sprite);
		}
		else
		{
			for (ext.i = 0; ext.i < 8; ++ext.i)
			{
				for (ext.j = 0; ext.j < 8; ++ext.j)
				{
					if (space[ext.i][ext.j].getMove() != Move::free)
						draw_help(space[ext.i][ext.j], ext.i, ext.j);
					if (space[ext.i][ext.j].getPiece())
						draw_space(space[ext.i][ext.j].getPiece(), ext);
				}
			}
			ext = { cd.x, cd.y, cd.x, cd.y };
			if (hold) //layer on top
				draw_space(space[cd.x][cd.y].getPiece(), ext);
		}
		if (hold)
			stat.clear();
		status_bar(stat);
		window.display();
	}
	return Game::exit;
}

void Gui_sfml::draw_help(Space& space, int x, int y)
{
	//highlighting moves
	RectangleShape rect(Vector2f(GRID, GRID));
	rect.setPosition(IND + GRID * x, IND + GRID * y);
	if (space.getMove() == Move::beat)
		rect.setFillColor(c_beat);
	else if (space.getMove() == Move::stay)
		rect.setFillColor(c_keep);
	else if (space.getMove() == Move::special)
		rect.setFillColor(c_spec);
	else
		rect.setFillColor(c_move);
	window.draw(rect);
}

void Gui_sfml::draw_space(IPiece* piece, Coord& crd)
{
	//drawing a piece
	int color = (piece->getPlayer() ? WHITE : BLACK);
	int name = (int)piece->getName() * SIZE;
	sprite.setTextureRect(IntRect(name, color, SIZE, SIZE));
	if (hold && crd.x == crd.i && crd.y == crd.j) //moving piece
		sprite.setPosition(v2i.x - GRID / 2, v2i.y - GRID / 2);
	else // standing piece
		sprite.setPosition(INDENT + GRID * crd.i, INDENT + GRID * crd.j);
	window.draw(sprite);
}

void Gui_sfml::right_banner()
{
	text.setCharacterSize(42);
	sp_voice.setTextureRect(IntRect(0, 0, (volume ? 120 : 65), 122));
	window.draw(sp_voice);
	sp_help.setTextureRect(IntRect(90, (help ? 50 : 990), 1480, 570));
	window.draw(sp_help);

	hint.setPosition(785, 305);
	window.draw(hint);
	hint.setPosition(785, 415);
	window.draw(hint);
	hint.setPosition(785, 525);
	window.draw(hint);
	hint.setPosition(785, 635);
	window.draw(hint);

	if (help)
	{
		RectangleShape rect(Vector2f(GRID * 2 - 2, GRID - 5));
		rect.setFillColor(c_keep);
		rect.setPosition(785, 305);
		window.draw(rect);
		rect.setFillColor(c_move);
		rect.setPosition(785, 415);
		window.draw(rect);
		rect.setFillColor(c_beat);
		rect.setPosition(785, 525);
		window.draw(rect);
		rect.setFillColor(c_spec);
		rect.setPosition(785, 635);
		window.draw(rect);
	}

	text.setPosition(818, 310);
	text.setString("keep");
	window.draw(text);
	text.setPosition(813, 420);
	text.setString("move");
	window.draw(text);
	text.setPosition(818, 530);
	text.setString("beat");
	window.draw(text);
	text.setPosition(818, 640);
	text.setString("spec");
	window.draw(text);
	text.setCharacterSize(36);
}

void Gui_sfml::status_bar(std::string& stat)
{
	if (stat == "Black won!" || stat == "White won!" || stat == "Stalemate!\n   Draw!")
	{
		text.setCharacterSize(120);
		if (stat == "Stalemate!\n   Draw!")
			text.setPosition(75, 204);
		else
			text.setPosition(63, 279);
		text.setStyle(Text::Bold);
		text.setFillColor(Color(30, 150, 30));
		text.setString(stat);
		window.draw(text);
		text.setFillColor(Color(0, 0, 0));
		text.setStyle(Text::Regular);
		text.setPosition(42, 726);
		text.setCharacterSize(42);
		text.setString("Left click on the chessboard to start a new game");
		start = true;
	}
	else
	{
		text.setPosition(30, 732);
		if (stat == "pawn")
			text.setString("Please select a piece to replace the pawn");
		else
			text.setString(stat);
	}
	window.draw(text);
}

void Gui_sfml::play_sound(Game gm)
{
	if (!volume)
		return;
	if (gm == Game::start)
		sb.loadFromFile(oxdan_dragon_c + "/includes/own/resuorces/musics/start.wav");
	else if (gm == Game::helper)
		sb.loadFromFile(oxdan_dragon_c + "/includes/own/resuorces/musics/button.wav");
	else if (gm == Game::hold || gm == Game::relesed)
		sb.loadFromFile(oxdan_dragon_c + "/includes/own/resuorces/musics/move.wav");
	else if (gm == Game::transf)
		sb.loadFromFile(oxdan_dragon_c + "/includes/own/resuorces/musics/transf.wav");

	sound.setBuffer(sb);
	sound.play();
}
