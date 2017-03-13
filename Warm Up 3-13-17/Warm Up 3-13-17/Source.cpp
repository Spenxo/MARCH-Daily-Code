#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

void BadGuy();

int main() {

	srand(time(NULL));

	while (1) {
		BadGuy();
		system("PAUSE");
}

}

void BadGuy() {
	int num = rand() % 100;
	if ((num >= 0) && (num <= 50))
	{
		cout << "Goomba!" << endl;
	}
	else if ((num >= 51) && (num <= 80))
	{
		cout << "Koopa!" << endl;
	}
	else if ((num >= 81) && (num <= 100))
	{
		cout << "Shy Guy!" << endl;
	}

}