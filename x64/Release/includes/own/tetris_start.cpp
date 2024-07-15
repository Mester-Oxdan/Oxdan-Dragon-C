#include <windows.h>
#include <GL/glut.h>
#include <GL/freeglut.h>
#include <GL/gl.h>
#include <time.h>
#include "game_tetris.hpp"
#include "all_diclarations.h"

Game_tetris game;
bool isWindowClosed_9 = false;

void init_tetris(void) {
	glClearColor(1.0, 1.0, 1.0, 0.0);

}
//func to draw board
void drawBoard(void) {

	if (isWindowClosed_9)
	{
		check_start_start();
	}
	
	glViewport(0, 0, 300, 600);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 10, 0, 20);
	for (int y = 0; y < 20; y++) {
		for (int x = 0; x < 10; x++) {
			if (game.getOccupied(x, y) ^ game.getCurrent(x, y)) {
				glColor3f(game.getRed(x, y), game.getGreen(x, y), game.getBlue(x, y));
				glRectd(x, y, x + 1, y + 1);
			}
			else {
				glColor3f(0.0, 0.0, 0.0);
				glRectd(x, y, x + 1, y + 1);
			}

		}
	}
	glColor3f(1, 1, 1);
	glBegin(GL_LINES);
	for (int i = 0; i < 20; i++) {
		glVertex2f(i, 0.0);
		glVertex2f(i, 20.0);
		glVertex2f(0.0, i);
		glVertex2f(20.0, i);
	}
	glEnd();

	int cur_win_6 = glutGetWindow();
	if (cur_win_6) glutSwapBuffers();

}
//take keyboard input to move block
void transform(int key, int x, int y) {
	int cur_win_5 = glutGetWindow();
	switch (key) 
	{
		case GLUT_KEY_UP:
			game.rotate();
			
			if (cur_win_5) glutPostRedisplay();
			break;
		case GLUT_KEY_LEFT:
			game.translate(-1);
			
			if (cur_win_5) glutPostRedisplay();
			break;
		case GLUT_KEY_RIGHT:
			game.translate(1);
			
			if (cur_win_5) glutPostRedisplay();
			break;
		case GLUT_KEY_DOWN:
			game.moveDown();
			
			if (cur_win_5) glutPostRedisplay();

	}

}
void quitRestart(unsigned char key, int x, int y) {
	switch (key) {
	case 'r':
		game.restart();
	}
}
//timer function that moves pieces down every 500ms 
void timer(int id) {
	if (game.getGameOver() == true || isWindowClosed_9) {
		game.restart();
	}
	if (id == 0) { //beginning of game

		game.spawnFruits();
	}
	else {
		game.moveDown();
	}
	int cur_win_1 = glutGetWindow();
	if (cur_win_1) glutPostRedisplay();
	glutTimerFunc(500, timer, id + 1);
}

void tetris_start()
{
	try
	{
		// add icon
		//game.restart();

		int argc;
		char** argv = nullptr;
		//Shape::init();
		//board = new Board();
		//GLFWwindow* window;
		srand(time(NULL));
		glutInit(&argc, argv);
		glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
		glutInitWindowPosition(500, 50);
		glutInitWindowSize(300, 600);
		int window = glutCreateWindow("Tetris");
		
		/*
		window = glfwCreateWindow(300, 600, "Tetris", NULL, NULL);
		if (!window)
		{
			glfwTerminate();
			return -1;
		}

		glfwMakeContextCurrent(window);

		int width, height;
		int channels;

		unsigned char* pixels = stbi_load("C:\\Users\\bogda\\source\\repos\\ConsoleDragonc++\\x64\\Debug\\dragon.png", &width, &height, &channels, 4);
		GLFWimage images[1];
		images[0].width = width;
		images[0].height = height;
		images[0].pixels = pixels;

		glfwSetWindowIcon(window, 1, images);
		*/
		
		init_tetris();
		glutDisplayFunc(drawBoard);
		glutSpecialFunc(transform);
		glutKeyboardFunc(quitRestart);
		glutTimerFunc(500, timer, 0);

		glutSetOption(GLUT_ACTION_ON_WINDOW_CLOSE, GLUT_ACTION_GLUTMAINLOOP_RETURNS);

		//icon = LoadImage(GetModuleHandle(), _T("icon.ico"), IMAGE_ICON, 32, 32, LR_LOADFROMFILE | LR_COLOR);
		//glutSetWindowIcon("C:\\Users\\bogda\\source\\repos\\ConsoleDragonc++\\x64\\Debug\\dragon.ico"); ---

		if (!isWindowClosed_9)
		{
			//glutMainLoopEvent(); // Process events continuously
			glutMainLoop();
			// Your continuous main loop code goes here
			// ...
			// Example: check_start_start() function
			//check_start_start();

		}

		// glutDestroyWindow(window);

		check_start_start();
	}

	catch (...)
	{
		check_start_start();
	}
}