
#include<iostream>
#include<time.h>
#include<conio.h>
#include<string.h>

using namespace std;

string s = "";
int index = 0;
bool upperCase = false;
char previousCharacter = NULL;

void characterInput(char, int);

int main() {
	while (true) {
		auto prevTime = time(NULL);
		cout << s;
		characterInput(_getch(), prevTime);
		system("cls");
	}
}

void characterInput(char userInput, int prevTime) {
	string lowerCase = { "adgjmtpw" };
	string numbers = { "23456879" };
	int maxLimit = ((numbers.find(userInput) > 5) ? 3 : 2);
	if (userInput == '#') upperCase = !upperCase;
	else if (userInput == '0') s += ' ';
	else if ((int)userInput == 8) s = s.substr(0, s.length() - 1);
	else if ((int)userInput == 13) s += '\n';
	else if (numbers.find(userInput) >= numbers.length()) return;
	else if (userInput == numbers[numbers.find(userInput)]) {
		char displayCharacter = lowerCase[numbers.find(userInput)];
		if (upperCase) displayCharacter = toupper(displayCharacter);
		if ((time(NULL) - prevTime) <= 1) {
			if (!s.empty() && (previousCharacter == userInput)) {
				if (s[s.length() - 1] >= displayCharacter || s[s.length() - 1] <= (displayCharacter + maxLimit)) {
					s[s.length() - 1]++;
					if (s[s.length() - 1] > (displayCharacter + maxLimit)) s[s.length() - 1] = displayCharacter;
				}
			}
			else s += displayCharacter;
		}
		else s += displayCharacter;
	}
	previousCharacter = userInput;
}