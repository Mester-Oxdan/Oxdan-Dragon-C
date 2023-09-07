#include <windows.h>
#include <conio.h>
#include <mmsystem.h>
#include <SFML/Audio.hpp>
#include "all_diclarations.h"

#pragma warning(disable : 4996).
#pragma comment(lib, "winmm.lib") // Link with the Windows Multimedia library

void author_start()
{
	system("cls");
	system("mode 183, 23"); // set size of console (+)
	SetWindow(141, 29); // set buffer size of console (+)

	printf("                                                                                                                                                                                       ");
	Sleep(30);
	printf("\033[0;33m        @@@BY!^:::^!YB@@@         :!!!~           ^!!!^       @J!!!!!!!!!77J5G&@                  @&###&@                Y@@@@@@P           G@@@@Y          @GYYYYYYYY555PB@           ");
	Sleep(30);
	printf("      @@@G~           ~G@@@        J&@@G^        Y&@@P^       @~              :7B@               @5.....Y@               Y@@    @B^         G@@@@Y          @7             ^5@         ");
	Sleep(30);
	printf("     @@@5    :JPGPJ:    5@@@        ^P@@&J     !#@@#!         @!    5GGGPPJ!     Y@             @B.      G@              Y@@@  @@@#~        G@@@@Y          @P      :7^      P@        ");
	Sleep(30);
	printf("    @@@&    ^&     &^    &@@@         7#@@B~ :P@@@Y           @!   .#       B^    P@           @&^   :   :&@             Y@@@@&@@@@@7       G@@@@Y           @:     7@&.     ?@        ");
	Sleep(30);
	printf("    @@@&    ^&     &^    &@@@          :5@@@P#@@B~            @!   .#        G    ~@          @@7   :B:   !@@            Y@@@@G!&@@@@J      G@@@@Y           @:     7@@:     ?@        ");
	Sleep(30);
	printf("     @@@5    :JPGPJ:    5@@@             !&@@@@J              @!   .#        &    ^@         @@5    P@5    Y@@           Y@@@@G ~#@@@@Y     G@@@@Y           @:     ^Y!      5@        ");
	Sleep(30);
	printf("      @@@G~           ~G@@@             ^P@@@@@P^             @!   .#        B    ~@        @@B.   ?@@@?    G@@          Y@@@@G  :B@@@@P    G@@@@Y           @:             ?@         ");
	Sleep(30);
	printf("\033[0;31m        @@@BY!^:::^!YB@@@              ?&@@G!G@@&?            @!   .#       #~    P@       @@&^    !777!    :&@@         Y@@@@G    P@@@@B:  G@@@@Y           @:     ^?77?J5B@          ");
	Sleep(30);
	printf("                                     ~G@@&?   ?&@@G~          @!    5GGGGG57.   .5@       @@@7               !@@@        Y@@@@G     Y@@@@#~ G@@@@Y          @P.     ^&@                ");
	Sleep(30);
	printf("                                    Y@@@P:     ^P@@@Y         @~              :7B@       @@@5    ?PPPPPPP?    Y@@@       Y@@@@G      J@@@@&!G@@@@Y          @7       5@                ");
	Sleep(30);
	printf("                                  !B@@#7         7#@@#!       @J!!!!!!!!!!7?YG&@        @@@B    !@       @~    G@@@      Y@@@@G       7@@@@@&@@@@Y          @GYYYYYYY#@   @@@@         ");
	Sleep(30);
	printf("                                  !!!!:           :!!!!                                @@@@BYYY5&@       @#5YYYB@@@@     Y@@@@G        ~#@@@    @Y                       @@  @@        ");
	Sleep(30);
	printf("                                                                                                                         Y@@@@G         ^B@@@  @@Y                        @@@@         ");
	Sleep(30);
	printf("                                                                                                                         Y@@@@G           P@@@@@@Y                                     ");
	Sleep(30);
	printf("\033[0;37m                                                                                                                                                                                       ");
	Sleep(30);
	printf("                                                                                       <^BY OXDAN PRADUCTION!^>                                                                        ");
	Sleep(30);
	printf("\n");

	sf::SoundBuffer buffer;
	string filePath = oxdan_dragon_c;
	vector<string> directories;

	// Split the path into directories and add them to the list
	size_t start = 0, end;
	while ((end = filePath.find("\\", start)) != string::npos) {
		string dir = filePath.substr(start, end - start);
		directories.push_back(dir);
		start = end + 1;
	}
	string lastComponent = filePath.substr(start);
	directories.push_back(lastComponent);

	// Keep track of the first and last words with spaces
	string firstSpaceWord;
	string lastSpaceWord;

	// Print the list of directories and detect first/last words with spaces
	//cout << "Original Path: " << filePath << endl;
	//cout << "List: ";
	for (const string& dir : directories) {
		//cout << "\"" << dir << "\" ";

		if (containsSpaces_2(dir)) {
			if (firstSpaceWord.empty()) {
				firstSpaceWord = dir;
			}
			lastSpaceWord = dir;
		}
	}
	//cout << endl;

	// Print the first and last words with spaces
	if (!firstSpaceWord.empty()) {
		//cout << "First word with spaces: " << firstSpaceWord << endl;
		//cout << "Last word with spaces: " << lastSpaceWord << endl;

		if (firstSpaceWord == lastSpaceWord)
		{

			// Replace spaces within the first and last words with double quotes
			size_t startPos = filePath.find(firstSpaceWord);
			size_t endPos = startPos + firstSpaceWord.length();
			string modifiedPath = filePath.substr(0, startPos) + "\"" + firstSpaceWord + filePath.substr(endPos);

			startPos = modifiedPath.find(lastSpaceWord);
			endPos = startPos + lastSpaceWord.length();
			modifiedPath = modifiedPath.substr(0, startPos) + lastSpaceWord + "\"" + modifiedPath.substr(endPos);


			// Print the modified path
			//cout << "Modified Path: " << modifiedPath << endl;
			string cmd_cmd = "start ";
			cmd_cmd += modifiedPath;
			system(cmd_cmd.c_str());
		}
		else
		{
			// Replace spaces within the first and last words with double quotes
			size_t startPos = filePath.find(firstSpaceWord);
			size_t endPos = startPos + firstSpaceWord.length();
			string modifiedPath = filePath.substr(0, startPos) + "\"" + firstSpaceWord + "\"" + filePath.substr(endPos);

			startPos = modifiedPath.find(lastSpaceWord);
			endPos = startPos + lastSpaceWord.length();
			modifiedPath = modifiedPath.substr(0, startPos) + "\"" + lastSpaceWord + "\"" + modifiedPath.substr(endPos);


			// Print the modified path
			//cout << "Modified Path: " << modifiedPath << endl;
			//string cmd_cmd = "start ";
			//cmd_cmd += modifiedPath;
			//system(cmd_cmd.c_str());

			!buffer.loadFromFile(filePath + "/includes/own/undertale.wav");
			sf::Sound sound;
			sound.setBuffer(buffer);
			sound.play();
		}
	}
	else {
		//cout << "No words with spaces found." << endl;
	}

	!buffer.loadFromFile(filePath + "/includes/own/undertale.wav");
	sf::Sound sound;
	sound.setBuffer(buffer);
	sound.play();

	getch();
	system("mode 141, 29"); // set size of console (+)
	SetWindow(141, 29); // set buffer size of console (+)
	check_start_start();
}