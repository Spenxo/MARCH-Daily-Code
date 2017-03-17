#include <iostream>
#include <string>
using namespace std;

int main() {

	string input[6];

	do {

		cout << "Gimme 6 words" << endl;

		for (int i = 0; i <= 5; i++) {
			getline(cin, input[i]);
		}
		if (input[2] == "shamrock") {
			cout << "pot of gold" << endl;
		}
		else
			cout << "go away" << endl;
	} while (input[0] != "bob");
}