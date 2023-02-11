#include"bracketsValidity.h"
/*
* -Constrctor to get the path of file.
* -Set the size of the stack
*/
bracketsValidity::bracketsValidity(std::string filePath) :filePath(filePath), Stack<char>(filePath.length()) {}
/*
* -Checks the validity of the input
* 1.Inputs the contents of file in a string
* 2.If there is an opening bracket, it inserts in the stack
* 3.If it is closing then checks if the top has same opening
* 4.If it is, pops the stack
* 5.Else returns false
* 6.If the loop ends, returns value equivalent to the emtiness of stack and the boolean variable
* (The boolean variable is used to check if the file doesnot contain any bracket)
*/
bool bracketsValidity::bracketIsGood() {
	std::ifstream ifstream(filePath);
	std::string tempInput;
	while (std::getline(ifstream, tempInput)) fileInput.append(tempInput);
	bool bracketIsPresent = false;
	for (int i = 0; i < fileInput.length(); ++i) {
		if (isOpening(fileInput[i]))
			bracketIsPresent = Stack<char>::push(fileInput[i]);
		else if (isClosing(fileInput[i])) {
			if (findOpening(fileInput[i]) == Stack<char>::peek())
				Stack<char>::pop();
			else
				return false;
		}
	}
	return Stack<char>::isEmpty() && bracketIsPresent;
}