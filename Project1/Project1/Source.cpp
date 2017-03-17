#include <iostream>
#include<string>
#include<windows.h>
using namespace std;
int main() {
	string invetnory[5];
	int room = 1;

	  


	while (input.compare("q") != 0) { //game loop
		switch (room) {//sends us to a room
		case 1:
			cout << "you're in the backyard!" << endl;
			cin >> input;
			if ('s')
				room = 2;

			break;
		case 2:
			cout << "you're in the kitchen! you can go south or north" << endl;
			cin >> input;
			if (input.compare("south") ==0)
				room = 3;
			if (input.compare("north") == 0)
				room = 1;

			break;

		case 3:
			cout << "you are in the living room! you can south (s),west(w),east(e)" << endl;
			cin >> input;
			if (input.compare( "south") == 0)
				room = 6;
			if (input.compare( "east") == 0)
				room = 4;
			if (input.compare( "west") == 0)
				room = 5;
			break;
		case 5:
			cout << "you've been eaten by Jeremy.you're dead";
			cout << endl;
		case 4:
			cout << "you've been eaten by Jeremy.you're dead";
			cout << endl;
		case 6:
			cout << "you now need to find 3 boxes for a weapon, go west  ";
			cin >> input;
			if (input.compare("west") == 0)
				room = 7;
			break;


		case 7:
			cout << "you're in the toy room! you can go south" << endl;
			cin >> input;
			if (input.compare( "south") == 0)
				room = 8;

			break;
		case 8:
			cout << "you're in the parents bedroom! you can go south" << endl;
			cin >> input;
			if (input.compare( "south") == 0)
				room = 9;

			break;

		case 9:
			cout << "you are in the basement! you can south (s),west(w),east(e)" << endl;
			cin >> input;
			if (input.compare("south") == 0)
				room = 10;
			if (input.compare("east") == 0)
				room = 11;
			if (input.compare("west") == 0)
				room = 12;
			break;
		case 10:
			cout << "You found a box! you can go north(n),west(w)";
			cin >> input;
			if (input.compare("north") == 0)
				room = 13;
			if (input.compare("west") == 0)
				room = 15;
			break;
		case 11:
			cout << "You have been eaten by Spider man"
				; cout << endl;
		case 12:
			cout << "You have been eaten by Harambe"
				; cout << endl;
			break;
		case 13:
			cout << "You have found 2 boxes!!!!! go west" << endl;
			cin >> input;
			if (input.compare("west") == 0)
				room = 14;
		case 14:
			cout << "You have found all boxes!!!!!!! You win!!!!!!" << endl;
			break;
		case 15:
			cout << "You have been eaten by Clifford" << endl;

		}

	}
}