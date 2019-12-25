#include <iostream>
#include <conio.h>
#include <time.h>
#include <windows.h>
#include <stdlib.h>
using namespace std;

void koniec_hry(string nickname, int score, int duration, int hmf)
{
	cout << "      SNAKElab" << endl << endl;
	if (hmf == 0)
		cout << "      YOU'VE WON!" << endl << endl;
	else
		cout << "      K O N I E C   H R Y" << endl << endl;
	cout << "      Snakename: " << nickname << endl;
	cout << "      Time:      " << duration / 60 << "'" << duration % 60 << '"' << endl;
	cout << "      Ssssscore: " << score << endl;
}

void panel(string nickname, int score, int duration)
{
	cout << "      SNAKElab" << endl << endl;
	cout << "      GAME" << endl << endl;
	cout << "      Snakename: " << nickname << endl;
	cout << "      Time:      " << duration / 60 << "'" << duration % 60 << '"' << endl;
	cout << "      Ssssscore: " << score << endl;
}

int navigate_menu(int k, int choice, bool& proceed)
{
	char nav = _getch();
	switch (nav)
	{
	case 'w':
	{
		choice--;
		if (choice < 1)
			choice++;
		break;
	}
	case 's':
	{
		choice++;
		if (choice > k)
			choice--;
		break;
	}
	case 'f':
	{
		proceed = true;
	}
	}
	return choice;
}

bool exit_game()
{
	int exit = 1;
	bool proceed = false;
	do
	{
		cout << endl << endl << "     Exit?" << endl;
		switch (exit)
		{
		case 0:
		{
			cout << endl << "   > Yes < ";
			cout << endl << "     No     ";
			cout << endl << "     ";
			break;
		}
		case 1:
		{
			cout << endl << "     Yes    ";
			cout << endl << "   > No  < ";
			cout << endl << "     ";
			break;
		}
		}
		exit = navigate_menu(2, (exit + 1), proceed) - 1;
		system("cls");
	} while (!proceed);
	return exit;
}

bool exit_prompt()
{
	int exit = 1;
	bool proceed = false;
	do
	{
		cout << "   Are you sure about that?" << endl << endl;
		switch (exit)
		{
		case 0:
		{
			cout << "   > Yes < ";
			cout << endl << "     No    ";
			cout << endl << "     ";
			break;
		}
		case 1:
		{
			cout << "     Yes   ";
			cout << endl << "   > No  <  ";
			cout << endl << "     ";
			break;
		}
		}
		exit = (navigate_menu(2, (exit + 1), proceed)) - 1;
		system("cls");
	} while (!proceed);
	return exit;
}

int secondary_menu(string& nickname, int& side, int& walls, int& hmf, int& speed)//DODAC OPCJE: PRZESZKODY
{
	int choice = 1;
	char navthismenu = 'b';
	bool proceed = false;
	cout << "      SNAKElab" << endl << endl;
	cout << "      NEW GAME" << endl << endl;
	cout << "      Snakename: ";
	cin >> nickname;
	do
	{
		system("cls");
		cout << "      SNAKElab" << endl << endl;
		cout << "      NEW GAME" << endl << endl;
		cout << "      Snakename: " << nickname << endl << endl;
		cout << "      Game settings:" << endl;
		switch (choice)
		{
		case 1:
			cout << "  >    Map size:        " << side << "x" << side << endl;
			cout << "       Game speed:      ";
			if (speed == 100)
				cout << "Yes" << endl;
			else if (speed == 200)
				cout << "Hard" << endl;
			else if (speed == 300)
				cout << "Medium" << endl;
			else if (speed == 400)
				cout << "Easy" << endl;
			else if (speed == 500)
				cout << "No" << endl;
			cout << "       Wall crossing:   ";
			if (walls == 1)
				cout << "Yes" << endl;
			else if (walls == 0)
				cout << "No" << endl;
			cout << "       Fruits at once:  " << hmf << endl;
			cout << endl << endl;
			cout << "      Sssstart..." << endl << endl;
			cout << "      Back to main menu...";
			break;
		case 2:
			cout << "       Map size:        " << side << "x" << side << endl;
			cout << "  >    Game speed:      ";
			if (speed == 100)
				cout << "Yes" << endl;
			else if (speed == 200)
				cout << "Hard" << endl;
			else if (speed == 300)
				cout << "Medium" << endl;
			else if (speed == 400)
				cout << "Easy" << endl;
			else if (speed == 500)
				cout << "No" << endl;
			cout << "       Wall crossing:   ";
			if (walls == 1)
				cout << "Yes" << endl;
			else if (walls == 0)
				cout << "No" << endl;
			cout << "       Fruits at once:  " << hmf << endl;
			cout << endl << endl;
			cout << "      Sssstart..." << endl << endl;
			cout << "      Back to main menu...";
			break;
		case 3:
			cout << "       Map size:        " << side << "x" << side << endl;
			cout << "       Game speed:      ";
			if (speed == 100)
				cout << "Yes" << endl;
			else if (speed == 200)
				cout << "Hard" << endl;
			else if (speed == 300)
				cout << "Medium" << endl;
			else if (speed == 400)
				cout << "Easy" << endl;
			else if (speed == 500)
				cout << "No" << endl;
			cout << "  >    Wall crossing:   ";
			if (walls == 1)
				cout << "Yes" << endl;
			else if (walls == 0)
				cout << "No" << endl;
			cout << "       Fruits at once:  " << hmf << endl;
			cout << endl << endl;
			cout << "      Sssstart..." << endl << endl;
			cout << "      Back to main menu...";
			break;
		case 4:
			cout << "       Map size:        " << side << "x" << side << endl;
			cout << "       Game speed:      ";
			if (speed == 100)
				cout << "Yes" << endl;
			else if (speed == 200)
				cout << "Hard" << endl;
			else if (speed == 300)
				cout << "Medium" << endl;
			else if (speed == 400)
				cout << "Easy" << endl;
			else if (speed == 500)
				cout << "No" << endl;
			cout << "       Wall crossing:   ";
			if (walls == 1)
				cout << "Yes" << endl;
			else if (walls == 0)
				cout << "No" << endl;
			cout << "  >    Fruits at once:  " << hmf << endl;
			cout << endl << endl;
			cout << "      Sssstart..." << endl << endl;
			cout << "      Back to main menu...";
			break;
		case 5:
			cout << "       Map size:        " << side << "x" << side << endl;
			cout << "       Game speed:      ";
			if (speed == 100)
				cout << "Yes" << endl;
			else if (speed == 200)
				cout << "Hard" << endl;
			else if (speed == 300)
				cout << "Medium" << endl;
			else if (speed == 400)
				cout << "Easy" << endl;
			else if (speed == 500)
				cout << "No" << endl;
			cout << "       Wall crossing:   ";
			if (walls == 1)
				cout << "Yes" << endl;
			else if (walls == 0)
				cout << "No" << endl;
			cout << "       Fruits at once:  " << hmf << endl;
			cout << endl << endl;
			cout << "  >   Sssstart..." << endl << endl;
			cout << "      Back to main menu...";
			break;
		case 6:
			cout << "       Map size:        " << side << "x" << side << endl;
			cout << "       Game speed:      ";
			if (speed == 100)
				cout << "Yes" << endl;
			else if (speed == 200)
				cout << "Hard" << endl;
			else if (speed == 300)
				cout << "Medium" << endl;
			else if (speed == 400)
				cout << "Easy" << endl;
			else if (speed == 500)
				cout << "No" << endl;
			cout << "       Wall crossing:   ";
			if (walls == 1)
				cout << "Yes" << endl;
			else if (walls == 0)
				cout << "No" << endl;
			cout << "       Fruits at once:  " << hmf << endl;
			cout << endl << endl;
			cout << "      Sssstart..." << endl << endl;
			cout << "  >   Back to main menu...";
			break;
		}

		navthismenu = _getch();
		proceed = false;
		switch (navthismenu)
		{
		case 'w':
			choice--;
			if (choice < 1)
				choice++;
			break;
		case 's':
			choice++;
			if (choice > 6)
				choice--;
			break;
		case 'd':
			if (choice == 1)
				side++;
			else if (choice == 2)
			{
				speed -= 100;
				if (speed < 100)
					speed = 100;
			}
			else if (choice == 3)
				walls = (walls + 1) % 2;
			else if (choice == 4)
			{
				hmf++;
				if (hmf > (side * side) - 1)
					hmf--;
			}
			break;
		case 'a':
			if (choice == 1)
			{
				side--;
				if (side < 10)
					side++;
			}
			else if (choice == 2)
			{
				speed += 100;
				if (speed > 500)
					speed = 500;
			}
			else if (choice == 3)
				walls = (walls + 1) % 2;
			else if (choice == 4)
			{
				hmf--;
				if (hmf < 1)
					hmf++;
			}
			break;
		case 'f':
			proceed = true;
			break;
		}
	} while ((!proceed) || (choice != 5 && choice != 6));
	system("cls");
	return choice;
}

int main_menu()
{
	int choice = 1;
	bool proceed = false;
	do
	{
		cout << "      SNAKElab" << endl << endl;
		cout << "     Navigation:" << endl;
		cout << "     W (move up)" << endl;
		cout << "     S (move down)" << endl;
		cout << "     A (move left)" << endl;
		cout << "     D (move right)" << endl;
		cout << "     F (select)" << endl << endl;
		switch (choice)
		{
		case 1:
			cout << " >   1. New game   <";
			cout << endl << "     2. Ranking     ";
			cout << endl << "     3. Exit        ";
			cout << endl << "     ";
			break;
		case 2:
			cout << "     1. New game    ";
			cout << endl << " >   2. Ranking    <";
			cout << endl << "     3. Exit        ";
			cout << endl << "     ";
			break;
		case 3:
			cout << "     1. New game    ";
			cout << endl << "     2. Ranking     ";
			cout << endl << " >   3. Exit       <";
			cout << endl << "     ";
			break;
		}
		choice = navigate_menu(3, choice, proceed);
		system("cls");
	} while (!proceed);

	return choice;
}

void print_map(int** snake, int* slength, int** fruit, int side, int hmf)
{
	cout << endl << endl << "      *";
	for (int i = 1; i <= side; i++)
	{
		if (snake[0][1] == 0 && snake[0][0] == i)
			cout << "@";
		else
			cout << "-";
	}
	cout << "*";

	for (int i = 1; i <= side; i++) //wiersz (y'owa)
	{
		if (snake[0][1] == i && snake[0][0] == 0)
			cout << endl << "      @";
		else
			cout << endl << "      |";
		for (int j = 1; j <= side; j++) //kolumna (x'owa)
		{
			bool tail = false;
			bool fruitis = false;
			for (int k = 0; k < *slength; k++)
			{
				if (snake[k][0] == j && snake[k][1] == i)
				{
					tail = true;
					if (snake[k][0] == snake[0][0] && snake[k][1] == snake[0][1] && k != 0)
					{
					}
					else if (k == 0)
						cout << "@";
					else if ((k == (*slength) - 1) || ((k == (*slength) - 2) && (snake[(*slength) - 1][0] == 0) && (snake[(*slength) - 1][1] == 0)))
						cout << "O";
					else if (k != 0)
						cout << "o";
				}
			}
			for (int k = 0; k < hmf; k++)
			{
				if (fruit[k][0] == j && fruit[k][1] == i)
				{
					if (fruit[k][2] == 1)
						cout << "6";
					if (fruit[k][2] == 2)
						cout << "8";
					if (fruit[k][2] == 3)
						cout << "Q";
					fruitis = true;
				}
			}

			if (!tail && !fruitis)
			{
				cout << " ";
			}
		}
		if (snake[0][1] == i && snake[0][0] == side + 1)
			cout << "@";
		else
			cout << "|";
	}

	cout << endl << "      *";
	for (int i = 1; i <= side; i++)
	{
		if (snake[0][1] == side + 1 && snake[0][0] == i)
			cout << "@";
		else
			cout << "-";
	}
	cout << "*";
}

char latest_key(char direction, char& previous, bool& pause)
{
	if (_kbhit())
	{
		previous = direction;
		direction = _getch();

		if (direction == 'p')
		{
			pause = true;
			direction = previous;
		}
		else if (direction != 'w' && direction != 'a' && direction != 's' && direction != 'd')
			direction = previous;
		else
		{
			switch (direction)
			{
			case 'w':
				if (previous == 's')
					direction = 's';
				break;
			case 's':
				if (previous == 'w')
					direction = 'w';
				break;
			case 'a':
				if (previous == 'd')
					direction = 'd';
				break;
			case 'd':
				if (previous == 'a')
					direction = 'a';
				break;
			}
		}
	}
	return direction;
}

void generate_fruit(int** fruit, int** snake, int* slength, int side, int& hmf)
{
	bool keepgoing = true;
	int k = 0;
	while (keepgoing)
	{
		if (fruit[k][3] == 1)
		{
			int dettype = rand() % 100;
			if (dettype >= 0 && dettype <= 84)
			{
				fruit[k][2] = 1;
			}
			else if (dettype >= 85 && dettype <= 94)
			{
				fruit[k][2] = 2;
			}
			else if (dettype >= 95 && dettype <= 99)
			{
				fruit[k][2] = 3;
			}

			bool repeat = true;
			while (repeat)
			{
				fruit[k][0] = rand() % side + 1;
				fruit[k][1] = rand() % side + 1;
				repeat = false;
				for (int i = 0; i < *slength; i++)
				{
					if ((snake[i][0] == fruit[k][0]) && (snake[i][1] == fruit[k][1]))
					{
						repeat = true;
					}
				}
				for (int j = 0; j < hmf; j++)
				{
					if ((k != j && (fruit[k][0] == fruit[j][0])) && (fruit[k][1] == fruit[j][1]))
					{
						repeat = true;
					}
				}
			}
			fruit[k][3] = 0;
		}
		keepgoing = false;
		for (int i = 0; i < hmf; i++)
		{
			if (fruit[i][3] == 1)
			{
				keepgoing = true;
			}
		}
		k = (k + 1) % hmf;
	}
}

void destroy_fruit(int** fruit, int hmf, int*** pfruit)
{
	int** tmp = new int* [hmf];
	for (int i = 0; i < hmf; i++)
	{
		tmp[i] = new int[4];
	}
	int j = 0;
	for (int i = 0; i < hmf + 1; i++)
	{
		if (!(fruit[i][3]))
		{
			tmp[j][0] = fruit[i][0];
			tmp[j][1] = fruit[i][1];
			tmp[j][2] = fruit[i][2];
			tmp[j][3] = 0;
			j++;
		}
	}
	for (int i = 0; i < hmf + 1; i++)
	{
		delete[] fruit[i];
	}
	delete[] fruit;
	*pfruit = tmp;
	tmp = nullptr;
}

void sizeplusplus(int** snake, int* slength, int*** psnake)
{
	int** tmp = new int* [(*slength) + 1];
	for (int i = 0; i < (*slength) + 1; i++)
	{
		tmp[i] = new int[2];
	}
	tmp[*slength][0] = 0;
	tmp[*slength][1] = 0;
	for (int i = 0; i < *slength; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			tmp[i][j] = snake[i][j];
		}
	}
	for (int i = 0; i < *slength; i++)
	{
		delete[] snake[i];
	}
	delete[] snake;
	*psnake = tmp;
	(*slength)++;
	tmp = nullptr;
}

bool logic(char& direction, char previous, int** snake, int** fruit, int* slength, int& score, int hmf, bool walls, int side, bool& do_it)
{
	bool gameover = false;

	for (int i = (*slength) - 1; i > 0; i--)
	{
		snake[i][0] = snake[i - 1][0];
		snake[i][1] = snake[i - 1][1];
	}

	switch (direction)
	{
	case 'w':
		snake[0][1]--;
		break;
	case 's':
		snake[0][1]++;
		break;
	case 'a':
		snake[0][0]--;
		break;
	case 'd':
		snake[0][0]++;
		break;
	}

	for (int i = (*slength) - 1; i > 0; i--)
	{
		if ((snake[0][0] == snake[i][0]) && (snake[0][1] == snake[i][1]))
		{
			gameover = true;
		}
	}

	if ((snake[0][0] == 0 || snake[0][0] == side + 1 || snake[0][1] == side + 1 || snake[0][1] == 0) && (!walls))
	{
		gameover = true;
	}

	if (walls)
	{
		for (int i = 0; i < *slength; i++)
		{
			if (snake[i][0] == side + 1)
			{
				snake[i][0] = 1;
			}
			else if (snake[i][0] == 0)
			{
				snake[i][0] = side;
			}
			else if (snake[i][1] == side + 1)
			{
				snake[i][1] = 1;
			}
			else if (snake[i][1] == 0)
			{
				snake[i][1] = side;
			}
		}
	}

	for (int i = 0; i < hmf; i++)
	{
		if ((fruit[i][0] == snake[0][0]) && (fruit[i][1] == snake[0][1]))
		{
			fruit[i][3] = true;
			if (fruit[i][2] == 1)
				score++;
			if (fruit[i][2] == 2)
				score += 2;
			if (fruit[i][2] == 3)
				score += 3;
			do_it = true;
		}
	}

	return gameover;
}

void game(string nickname, int side, bool walls, int hmf, int speed)
{
	srand(time(0));
	time_t start_time = time(0);
	int score = 0, duration = 0, * slength = new int(3);
	char direction = 'd', previous = 'x';
	bool gameover = false, do_it = false, pause = false;
	int** fruit = new int* [hmf];
	for (int i = 0; i < hmf; i++)
	{
		fruit[i] = new int[4];//0 - x, 1 - y, 2 - typ, 3 - czy zjedzony
		fruit[i][0] = (-1) * i;
		fruit[i][1] = (-1) * i;
		fruit[i][2] = 1;
		fruit[i][3] = 1;
	}
	int** snake = new int* [*slength];
	for (int i = 0; i < *slength; i++)
	{
		snake[i] = new int[2];
		snake[i][0] = (-1) * i;
		snake[i][1] = (-1) * i;
	}
	snake[0][0] = 1;
	snake[0][1] = 1;
	generate_fruit(fruit, snake, slength, side, hmf);

	while (!gameover)
	{
		duration = time(0) - start_time;
		direction = latest_key(direction, previous, pause);
		gameover = logic(direction, previous, snake, fruit, slength, score, hmf, walls, side, do_it);
		if (do_it)
		{
			sizeplusplus(snake, slength, &snake);
			if ((side * side - *slength) < hmf)
			{
				hmf--;
				if (hmf == 0)
				{
					gameover = true;
				}
				else
					destroy_fruit(fruit, hmf, &fruit);
			}
			if (hmf != 0)
				generate_fruit(fruit, snake, slength, side, hmf);
			do_it = false;
		}
		
		if (!gameover)
		{
			if (pause)
			{
				system("cls");
				gameover = (exit_game()+1)%2;
				pause = false;
			}
			panel(nickname, score, duration);
			print_map(snake, slength, fruit, side, hmf);
			Sleep(speed);
		}
		system("cls");
		
	}
	koniec_hry(nickname, score, duration, hmf);
	print_map(snake, slength, fruit, side, hmf);
	cout << endl << endl << endl << "      Pressssss any key to go back to main menu...";
	for (int i = 0; i < *slength; i++)
	{
		delete[] snake[i];
	}
	for (int i = 0; i < hmf; i++)
	{
		delete[] fruit[i];
	}
	delete[] snake;
	delete[] fruit;
	delete slength;
	_getch();
	system("cls");
}

int main()
{
	int choice = 1, choice_2 = 1, side = 10, walls = 0, hmf = 1, speed = 400;//hmf == how many fruits
	bool exit = false;
	string nickname = "snakelab";
	do
	{
		choice = main_menu();
		switch (choice)
		{
		case 1://GRA
			choice_2 = secondary_menu(nickname, side, walls, hmf, speed);
			if (choice_2 % 2)
			{
				game(nickname, side, walls, hmf, speed);
			}
			break;
		case 2://RANKING
			break;
		case 3://EXIT
			exit = !(exit_prompt());
			if (exit)
			{
				cout << "   See you nexsssssst time...";
				Sleep(1500);
			}
			break;
		}
	} while (!exit);

	return 0;
}