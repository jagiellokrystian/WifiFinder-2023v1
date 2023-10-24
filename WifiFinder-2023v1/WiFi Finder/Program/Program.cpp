// Add librares
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <windows.h>
#include <cmath>
using namespace std;

void title() {
	cout << "__       ___ _____    _______           __         \n";
	cout << "| |     / (_) __(_)  / ____(_)___  ____/ /__  _____\n";
	cout << "| | /| / / / /_/ /  / /_  / / __ \\/ __  / _ \\/ ___/\n";
	cout << "| |/ |/ / / __/ /  / __/ / / / / / /_/ /  __/ /    \n";
	cout << "|__/|__/_/_/ /_/  /_/   /_/_/ /_/\\__,_/\\___/_/     \n" << endl << endl;
}

void startfile() {
	try {
		system("cls"); // Clear screen
		title(); // run function
		system("netsh wlan show interfaces"); // Show WIFI info
		cout << endl << endl << "Press ENTER to continue ..." << endl;
		system("pause >>nul"); // Pause program
	}
	catch (runtime_error& e) {
		system("cls"); // Clear screen
		system("color 0c"); // set red color in console
		cout << "! ERROR !" << "Press ENTER to exit" << endl;
		system("pause >null"); // pause program
	}
}

void aboutfile() {
	system("cls"); // Clear screen
	system("color 0a");
	title(); // run function
	cout << "Program owner: Krystian Jagiełło" << endl;
	cout << "Country of origin: Poland" << endl;
	cout << "Contact: krysjag@protonmail.com" << endl << endl;
	cout << "Press ENTER to continue ..." << endl;
	system("pause >>nul"); // pause program
}

void exitfile() {
	system("cls"); // Clear screen
	exit(0); // exit from the program
}

int main() {

	setlocale(LC_CTYPE, "polish"); // Declerate Polish language in console

	try {
		while (true) {
			system("cls"); // Clear screen
			system("color 0a"); // set green color in console
			title(); // run function
			cout << "[1] Start" << endl;
			cout << "[2] About" << endl;
			cout << "[3] Exit" << endl << endl << endl;
			int infile1; // declerate variable
			cout << "> ";
			cin >> infile1; // enter task
			if (infile1 == 1) {
				startfile(); // run function
			}
			else if (infile1 == 2) {
				aboutfile(); // run function
			}
			else if (infile1 == 3) {
				exitfile(); // run function
			}
		}
	}
	catch (runtime_error& e) {
		system("cls"); // clear screen
		system("color 0c"); // set red color
		cout << "! ERROR !" << "Press ENTER to exit" << endl;
		system("pause >null"); // pause program
	}
}