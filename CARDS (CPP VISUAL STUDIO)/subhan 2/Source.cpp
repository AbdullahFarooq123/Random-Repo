#include<iostream>
#include<string>
using namespace std;
int main() {
	string Cards[] = { "ACE","2","3" ,"4" ,"5" ,"6" ,"7" ,"8" ,"9" ,"10","JACK","QUEEN","KING" };
	string ofType[] = { "DIAMOND","HEART","CLUB","SPADE" };
	int card[2];
	for (int i = 0; i < 13; i++)
		cout << i + 1 << ":" << Cards[i] << endl;
	a:
	cout << "Chose card : ";
	cin >> card[0];
	if (card[0] < 1 || card[0] > 13)	goto a;
	for (int i = 0; i < 4; i++)
		cout << i + 1 << ":" << ofType[i] << endl;
	b:
	cout << "Chose card type : ";
	cin >> card[1];
	if (card[1] < 1 || card[1] > 4) goto b;
	cout << "User choose " << Cards[card[0] - 1] << " of " << ofType[card[1] - 1];
}