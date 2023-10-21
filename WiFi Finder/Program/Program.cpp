#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <windows.h>
#include <cmath>
using namespace std;

void startfile() {
	try {
		system("cls");

		cout << " _       ___ _____    _______           __         \n";
		cout << "| |     / (_) __(_)  / ____(_)___  ____/ /__  _____\n";
		cout << "| | /| / / / /_/ /  / /_  / / __ \\/ __  / _ \\/ ___/\n";
		cout << "| |/ |/ / / __/ /  / __/ / / / / / /_/ /  __/ /    \n";
		cout << "|__/|__/_/_/ /_/  /_/   /_/_/ /_/\\__,_/\\___/_/     \n" << endl;

		system("netsh wlan show interfaces");
		cout << endl << endl << "Press ENTER to continue ..." << endl;
		system("pause >>nul");
	}
	catch (runtime_error& e) {
		system("cls");
		system("color 0c");
		cout << "! ERROR !" << "Press ENTER to exit" << endl;
		system("pause >null");
	}
}

void aboutfile() {
	system("cls");
	system("color 0a");

	cout << " _       ___ _____    _______           __         \n";
	cout << "| |     / (_) __(_)  / ____(_)___  ____/ /__  _____\n";
	cout << "| | /| / / / /_/ /  / /_  / / __ \\/ __  / _ \\/ ___/\n";
	cout << "| |/ |/ / / __/ /  / __/ / / / / / /_/ /  __/ /    \n";
	cout << "|__/|__/_/_/ /_/  /_/   /_/_/ /_/\\__,_/\\___/_/     \n" << endl;
	
	cout << "Program owner: Krystian Jagiełło" << endl;
	cout << "Country of origin: Poland" << endl;
	cout << "Contact: krysjag@protonmail.com" << endl << endl;
	cout << "Press ENTER to continue ..." << endl;
	system("pause >>nul");
}

void exitfile() {
	exit(0);
}

int main() {

	setlocale(LC_CTYPE, "polish");

	try {
		while (true) {
			string paski = "---------------------------";
			string tytul = "------- WiFi Finder -------";

			system("cls");
			system("color 0a");
			cout << " _       ___ _____    _______           __         \n";
			cout << "| |     / (_) __(_)  / ____(_)___  ____/ /__  _____\n";
			cout << "| | /| / / / /_/ /  / /_  / / __ \\/ __  / _ \\/ ___/\n";
			cout << "| |/ |/ / / __/ /  / __/ / / / / / /_/ /  __/ /    \n";
			cout << "|__/|__/_/_/ /_/  /_/   /_/_/ /_/\\__,_/\\___/_/     \n" << endl;

			cout << "[1] Start" << endl;
			cout << "[2] About" << endl;
			cout << "[3] Exit" << endl << endl << paski << endl;
			int infile1;
			cout << "> ";
			cin >> infile1;
			if (infile1 == 1) {
				startfile();
			}
			else if (infile1 == 2) {
				aboutfile();
			}
			else if (infile1 == 3) {
				exitfile();
			}
		}
	}
	catch (runtime_error& e) {
		system("cls");
		system("color 0c");
		cout << "! ERROR !" << "Press ENTER to exit" << endl;
		system("pause >null");
	}
}