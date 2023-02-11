#include <iostream>
using namespace std;
int main() {
	int number;
	int sum = 0;
	cout << "Please enter number : ";
	cin >> number;
	int tempNumber = number;
	while (tempNumber!=0) {
		int factorial = 1;
		int var = tempNumber % 10;
		tempNumber /= 10;
		while (var > 0) 
			factorial *= var--;
		sum += factorial;
	}
	cout << (sum == number ? "Strong number!" : "Not strong number!");
}

