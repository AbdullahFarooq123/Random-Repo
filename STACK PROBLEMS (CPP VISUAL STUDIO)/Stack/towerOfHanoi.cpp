#include "towerOfHanoi.h"
using namespace std;
Vector2::Vector2() {}
Vector2::Vector2(int Y_COORDINATE, int X_COORDINATE, int VALUE) {
	this->Y_COORDINATE = Y_COORDINATE;
	this->X_COORDINATE = X_COORDINATE;
	this->VALUE = VALUE;
}
void towerOfHanoi::drawHorizontalBoundary(bool isUpper) {
	for (int X_AXIS = 0; X_AXIS < WIDTH; ++X_AXIS) std::cout << (isUpper ? "\xDB" : "\xDB");
}
void towerOfHanoi::fillStack() {
	srand((unsigned)time(NULL));
	int stack = (rand() % 3);
	int fill = SIZE - 11;
	int Y_AXIS = SIZE - 5;
	for (int i = 0; i < SIZE - 10; ++i) setStacks(i, &Y_AXIS, &fill, stack == 1 ? 'A' : (stack == 2 ? 'B' : 'C'));
	selectedStack == 'A' ? topValueA = STACK_A.getTop() : (selectedStack == 'B' ? topValueB = STACK_B.getTop() : topValueC = STACK_C.getTop());
	initialStack = selectedStack;
}
void towerOfHanoi::stackValueColours(int X_COORDINATE, bool isValue) {
	if ((selectedStack == 'A') && (isValue ? (X_COORDINATE >= 12 && X_COORDINATE <= 28) : (X_COORDINATE == 10 || X_COORDINATE == 30)))
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
	else if ((selectedStack == 'B') && (isValue ? (X_COORDINATE >= 42 && X_COORDINATE <= 58) : (X_COORDINATE == 40 || X_COORDINATE == 60)))
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
	else if ((selectedStack == 'C') && (isValue ? (X_COORDINATE >= 72 && X_COORDINATE <= 88) : (X_COORDINATE == 70 || X_COORDINATE == 90)))
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
}
void towerOfHanoi::drawStackValues(int Y_COORDINATE, int X_COORDINATE, char STACK) {
	stackValueColours(X_COORDINATE,true);
	bool toPrint = false;
	bool printed = false;
	int topValue = (STACK == 'A' ? topValueA : (STACK == 'B' ? topValueB : topValueC));
	int value_X_COORDINATE = (STACK == 'A' ? 20 : (STACK == 'B' ? 50 : 80));
	for (int INDEX = 0; INDEX < SIZE - 10; ++INDEX) {
		if (checkStackMid(Y_COORDINATE,X_COORDINATE,INDEX)) {
			if (X_COORDINATE == value_X_COORDINATE) {
				revertColour();
				(topValue == vector2[INDEX].getValue()) ? std::cout << topValue : std::cout<<"-";
				printed = true;
			}
			else if ((X_COORDINATE == (value_X_COORDINATE-1)) || X_COORDINATE == (value_X_COORDINATE + 1)) {
				std::cout << " ";
				printed = true;
			}
		}
		toPrint = true;
	}
	if (toPrint && !printed) std::cout << "\xFE";
	revertColour();
}
void towerOfHanoi::stackToDrawValues(bool* inA, bool* inB, bool* inC, int Y_COORDINATE, int X_COORDINATE) {
	for (int i = 0; i < SIZE - 10; ++i)
		if (Y_COORDINATE == vector2[i].getY()) {
			if ((X_COORDINATE > 11) && (X_COORDINATE < 29)) {
				if ((X_COORDINATE > (vector2[i].getX() - 1)) && (X_COORDINATE < (vector2[i].getX() + 18))) {
					*inA = true;
					break;
				}
			}
			else if ((X_COORDINATE > 41) && (X_COORDINATE < 59)) {
				if ((X_COORDINATE > (vector2[i].getX() - 1)) && (X_COORDINATE < (vector2[i].getX() + 18))) {
					*inB = true;
					break;
				}
			}
			else if ((X_COORDINATE > 71) && (X_COORDINATE < 89)) {
				if ((X_COORDINATE > (vector2[i].getX() - 1)) && (X_COORDINATE < (vector2[i].getX() + 18))) {
					*inC = true;
					break;
				}
			}
		}
}
void towerOfHanoi::drawCompleteStack(int Y_COORDINATE, int X_COORDINATE) {
	bool inA, inB, inC;
	inA = inB = inC = false;
	stackToDrawValues(&inA, &inB, &inC, Y_COORDINATE, X_COORDINATE);
	if (drawStackVerticalBoundary(X_COORDINATE)) {
		stackValueColours(X_COORDINATE, false);
		std::cout << "\xDB"; 
		revertColour();
	}
	else if ((!STACK_A.isEmpty()) && inA) drawStackValues(Y_COORDINATE, X_COORDINATE, 'A');
	else if ((!STACK_B.isEmpty()) && inB) drawStackValues(Y_COORDINATE, X_COORDINATE, 'B');
	else if ((!STACK_C.isEmpty()) && inC) drawStackValues(Y_COORDINATE, X_COORDINATE, 'C');
	else std::cout << " ";
}
void towerOfHanoi::horizontalStackBoundaryColour(int X_COORDINATE) {
	if (checkStackHorizontal(X_COORDINATE))	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
}
void towerOfHanoi::drawCompleteHorizontalStackBoundary(int X_COORDINATE) {
	horizontalStackBoundaryColour(X_COORDINATE);
	std::cout << ((checkDrawStackHorizontalBoundary(X_COORDINATE)) ? "\xDF" :  " ");
	revertColour();
}
void towerOfHanoi::drawInternal(int Y_COORDINATE, int X_COORDINATE) {
	if (drawVerticalBoundary(X_COORDINATE)) std::cout << "\xDB";
	else if (drawStack(Y_COORDINATE)) drawCompleteStack(Y_COORDINATE, X_COORDINATE);
	else if (checkStackHorizontalBoundary(Y_COORDINATE)) drawCompleteHorizontalStackBoundary(X_COORDINATE);
	else if (checkStackNames(Y_COORDINATE)) {
		if (checkStackMid(X_COORDINATE)) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
		std::cout << drawStackNames(X_COORDINATE);
		revertColour();
	}
	else if (checkInAir(Y_COORDINATE,X_COORDINATE))	drawInAirStack(X_COORDINATE);
	else std::cout << " ";
}
void towerOfHanoi::drawInAirStack(int X_COORDINATE) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
	int _X_COORDINATE = (_vector2->getX() + _vector2->getX() + 18) / 2;
	if (_X_COORDINATE == X_COORDINATE) {
		revertColour();
		std::cout << _vector2->getValue();
	}
	else if (_X_COORDINATE - 1 == X_COORDINATE || _X_COORDINATE + 1 == X_COORDINATE) std::cout << " ";
	else std::cout << "\xFE";
	revertColour();
}
void towerOfHanoi::setValues(int SIZE) {
	this->SIZE = SIZE + 10;
	vector2 = new Vector2[SIZE];
	ROW = 0;
	COLOUMN = 0;
	noOfTries = 0;
	inAir = false;
	gameOver = false;
	array2D = new char* [pow(2,SIZE)];
	for (int i = 0; i < pow(2, SIZE); i++)	array2D[i] = new char[2];
	fillStack();
	char array[2];
	if (selectedStack == 'A') {
		array[0] = 'C';
		array[1] = 'B';
	}
	else if (selectedStack == 'B') {
		array[0] = 'A';
		array[1] = 'C';
	}
	else if (selectedStack == 'C') {
		array[0] = 'B';
		array[1] = 'A';
	}
	automaticAlgorithm(SIZE, selectedStack, array[0], array[1]);
}
void towerOfHanoi::setStacks(int INDEX, int* Y_AXIS, int* fill, char STACK) {
	(STACK == 'A') ? STACK_A.push(*fill) : ((STACK == 'B') ? STACK_B.push(*fill) : STACK_C.push(*fill));
	vector2[INDEX] = Vector2((*Y_AXIS)--, (STACK == 'A' ? 11 : (STACK == 'B' ? 41 : 71)), (*fill)--);
	selectedStack = STACK;
	initialStack = STACK;
}
void towerOfHanoi::moveUpAValue(Stack<int>* STACK, int* topValue) {
	if (!STACK->isEmpty()) {
		for (int i = 0; i < SIZE - 10; ++i) {
			if ((*topValue) == vector2[i].getValue()) {
				vector2[i].setY(5);
				inAir = true;
				STACK->pop();
				*topValue = STACK->getTop();
				_vector2 = &vector2[i];
				break;
			}
		}
	}
}
void towerOfHanoi::moveUpAValue() {
	if (!inAir) {
		switch (selectedStack) {
		case 'A':
			moveUpAValue(&STACK_A, &topValueA);
			break;
		case 'B':
			moveUpAValue(&STACK_B, &topValueB);
			break;
		case 'C':
			moveUpAValue(&STACK_C, &topValueC);
			break;
		}
	}
}
bool towerOfHanoi::moveDownAValue(Stack<int>* STACK,char stackId) {
	int* topValuePointer = (stackId == 'A' ? &topValueA : (stackId == 'B' ? &topValueB : &topValueC));
	int lowestFreeSpace;
	if (STACK->getTop() > _vector2->getValue()) {
		lowestFreeSpace = SIZE - 5;
		for (int i = SIZE - 11; i >= 0; --i) {
			if (_vector2->getX() == vector2[i].getX()) {
				if (_vector2->getY() < vector2[i].getY()) {
					lowestFreeSpace = vector2[i].getY() - 1;
					break;
				}
			}
		}
		_vector2->setY(lowestFreeSpace);
		STACK->push(_vector2->getValue());
		*topValuePointer = STACK->getTop();
		++noOfTries;
		return true;
	}
	return false;
}
void towerOfHanoi::moveDownAValue() {
	if (inAir) {
		bool inStack = false;
		switch (selectedStack) {
		case 'A':
			inStack = moveDownAValue(&STACK_A, 'A');
			break;
		case 'B':
			inStack = moveDownAValue(&STACK_B, 'B');
			break;
		case 'C':
			inStack = moveDownAValue(&STACK_C, 'C');
		}
		inAir = !inStack;
	}
}
void towerOfHanoi::moveAValueHorizontally(int X_COORDINATE, char STACK) {
	_vector2->setX(X_COORDINATE);
	selectedStack = STACK;
}
void towerOfHanoi::moveLeft() {
	if (inAir) {
		switch (_vector2->getX()) {
		case 11:
			moveAValueHorizontally(71, 'C');
			break;
		case 41:
			moveAValueHorizontally(11, 'A');
			break;
		case 71:
			moveAValueHorizontally(41, 'B');
		}
	}
}
void towerOfHanoi::moveRight() {
	if (inAir) {
		switch (_vector2->getX()) {
		case 11:
			moveAValueHorizontally(41, 'B');
			break;
		case 41:
			moveAValueHorizontally(71, 'C');
			break;
		case 71:
			moveAValueHorizontally(11, 'A');
		}
	}
}
void towerOfHanoi::selectLeftStack() {
	if (!inAir) {
		switch (selectedStack) {
		case 'A':
			selectedStack = 'C';
			break;
		case 'B':
			selectedStack = 'A';
			break;
		case 'C':
			selectedStack = 'B';
		}
	}
}
void towerOfHanoi::selectRightStack() {
	if (!inAir) {
		switch (selectedStack) {
		case 'A':
			selectedStack = 'B';
			break;
		case 'B':
			selectedStack = 'C';
			break;
		case 'C':
			selectedStack = 'A';
		}
	}
}
void towerOfHanoi::drawVertical() {
	std::cout << std::endl;
	for (int Y_AXIS = 1; Y_AXIS <= SIZE; ++Y_AXIS) {
		for (int X_AXIS = 1; X_AXIS <= WIDTH; ++X_AXIS)
			drawInternal(Y_AXIS, X_AXIS);
		std::cout << std::endl;
	}
}
void towerOfHanoi::automaticAlgorithm(int SIZE, char from, char to, char aux){
	static int ROW = 0;
	static int COLOUMN = 0;
	if (SIZE == 1){
		array2D[ROW][COLOUMN++] = from;
		array2D[ROW++][COLOUMN--] = to;
	}
	else{

		automaticAlgorithm(SIZE - 1, from, aux, to);
		array2D[ROW][COLOUMN++] = from;
		array2D[ROW++][COLOUMN--] = to;
		automaticAlgorithm(SIZE - 1, aux, to, from);
	}
}
towerOfHanoi::towerOfHanoi(int SIZE) { setValues(SIZE); }
towerOfHanoi::~towerOfHanoi() {
	delete[]vector2;
	for (int i = 0; i < pow(2, SIZE-10); i++)
		delete[] array2D[i];
	delete[]array2D;
}
void towerOfHanoi::draw() {
	drawHorizontalBoundary(true);
	drawVertical();
	drawHorizontalBoundary(false);
	std::cout << std::endl << "\n\nTRIES : " << noOfTries;
}
void towerOfHanoi::automaticMovement() {
	if (movementInstructions.isEmpty()) {
		if (array2D[ROW][COLOUMN] == 'A') {
			selectedStack = 'A';
			if (array2D[ROW][++COLOUMN] == 'B') {
				movementInstructions.push('s');
				movementInstructions.push('d');
				movementInstructions.push('w');
				++ROW;
				--COLOUMN;
			}
			else if (array2D[ROW][COLOUMN] == 'C') {
				movementInstructions.push('s');
				movementInstructions.push('a');
				movementInstructions.push('w');
				++ROW;
				--COLOUMN;
			}
		}
		else if (array2D[ROW][COLOUMN] == 'B') {
			selectedStack = 'B';
			if (selectedStack == 'B') {
				if (array2D[ROW][++COLOUMN] == 'A') {
					movementInstructions.push('s');
					movementInstructions.push('a');
					movementInstructions.push('w');
					++ROW;
					--COLOUMN;
				}
				else if (array2D[ROW][COLOUMN] == 'C') {
					movementInstructions.push('s');
					movementInstructions.push('d');
					movementInstructions.push('w');
					++ROW;
					--COLOUMN;
				}
			}
		}
		else if (array2D[ROW][COLOUMN] == 'C') {
			selectedStack = 'C';
			if (selectedStack == 'C') {
				if (array2D[ROW][++COLOUMN] == 'B') {
					movementInstructions.push('s');
					movementInstructions.push('a');
					movementInstructions.push('w');
					++ROW;
					--COLOUMN;
				}
				else if (array2D[ROW][COLOUMN] == 'A') {
					movementInstructions.push('s');
					movementInstructions.push('d');
					movementInstructions.push('w');
					++ROW;
					--COLOUMN;
				}
			}
		}
		return;
	}
	manualMovement(movementInstructions.pop());
}
void towerOfHanoi::manualMovement(char movement) {
	switch (movement) {
	case'w': case'W':
		moveUpAValue();
		break;
	case 's': case 'S':
		moveDownAValue();
		logic();
		break;
	case 'a': case 'A':
		moveLeft();
		break;
	case 'd': case 'D':
		moveRight();
		break;
	case 'j': case 'J':
		selectLeftStack();
		break;
	case 'l': case 'L':
		selectRightStack();
		break;
	case 'X': case 'x':
		exit(1);
	}
}
void towerOfHanoi::logic() {
	Stack<int>* array[2] = { nullptr };
	if (initialStack == 'A') {
		array[0] = &STACK_B;
		array[1] = &STACK_C;
	}
	else if (initialStack == 'B') {
		array[0] = &STACK_A;
		array[1] = &STACK_C;
	}
	else {
		array[0] = &STACK_A;
		array[1] = &STACK_B;
	}
	if (array[0]->getSize() == SIZE - 10 || array[1]->getSize() == SIZE - 10) gameOver = true;
}
void towerOfHanoi::engine() {
	cout << "********** STACK VALUE MOVEMENT **********\n\n";
	cout << "USE 'W' TO MOVE UP A VALUE FROM STACK.\n";
	cout << "USE 'S' TO MOVE DOWN A VALUE INTO THE STACK.\n";
	cout << "USE 'A' TO MOVE A VALUE TO THE LEFT.\n";
	cout << "USE 'D' TO MOVE A VALUE TO THE RIGHT.\n\n";
	cout << "********** STACK SELECTION **********\n\n";
	cout << "USE 'J' TO SELECT A STACK AT LEFT.\n";
	cout << "USE 'L' TO SELECT A STACK AT RIGHT.\n\n\n";
	system("pause");
	system("cls");
	int SIZE = 0;
	while (SIZE < 1 || SIZE >= 20) {
		cout << "Please enter size of stack greater than 0 and less than 20: ";
		cin >> SIZE;
		system("cls");
	}
	bool automatic = false;
	char mode = '/0';
	do {
		cout << "What mode do you want to play? : \n";
		cout << "1.Automatic\n";
		cout << "2.Manual\n";
		mode = _getch();
	} while (mode < '1' || mode > '2');
	int speed = 0;
	if (mode == '1') {
		automatic = true;
		system("cls");
		mode = '/0';
		do {

			cout << "Please set speed of solving? : \n";
			cout << "1.FAST\n";
			cout << "2.MEDIUM\n";
			cout << "3.SLOW\n";
			mode = _getch();
		} while (mode < '1' && mode > '3');
		switch (mode) {
		case '1':
			speed = 0;
			break;
		case '2':
			speed = 100;
			break;
		case '3':
			speed = 500;
			break;
		}
	}
	system("cls");
	towerOfHanoi game = towerOfHanoi(SIZE);
	int i = 0;
	while (!game.gameOver) {
		game.draw();
		if (automatic) {
			if (!i) {
				cout << endl;
				system("pause");
				++i;
			}
			game.automaticMovement();
			Sleep(speed);
		}
		else game.manualMovement(_getch());
		system("cls");
	}
	game.draw();
	cout << "\n*****************************YOU WON!*****************************\n";
	cout << "No of tries by user : " << game.noOfTries << "\nActual tries to solve : " << pow(2, SIZE) - 1;
	cout << "\nSCORE : " << (int)((pow(2, SIZE) - 1) * 100 / game.noOfTries) << endl;
	system("pause");
	exit(1);
}
