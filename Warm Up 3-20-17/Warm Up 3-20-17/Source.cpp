#include <iostream>
using namespace std;


int main() {
	int input = 0;
	int primenum = 0;
	bool prime = true;

		cout << "give me a number" << endl;
		cin >> input;

		while (1) {

			for (int i = 2; i < input; i++) {

				if (input % 2 == 0) {
					cout << input << " is not prime!" << endl;
				}
				else
					cout << input << " is prime!" << endl;
			}
		} 
}
