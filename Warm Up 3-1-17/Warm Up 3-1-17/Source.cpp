#include <iostream>
#include <Windows.h>
#include <stdio.h>
using namespace std;

void jukebox(int sound);

int main() {
	int sound;
	do {
		cout << "Which sound would you like to play?" << endl;
		cout << "1? 2? or 3?" << endl;
		cin >> sound;
		jukebox(sound);
	} while (1);
}

void jukebox(int sound) {
	switch (sound) {
	case 1:
		PlaySound(TEXT("whirl.wav"), NULL, SND_FILENAME | SND_FILENAME);
		break;
	case 2:
		PlaySound(TEXT("fart2.wav"), NULL, SND_FILENAME | SND_FILENAME);
		break;
	case 3:
		PlaySound(TEXT("fart3.wav"), NULL, SND_FILENAME | SND_FILENAME);
		break;

	}
	}