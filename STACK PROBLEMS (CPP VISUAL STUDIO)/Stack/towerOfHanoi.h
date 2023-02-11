#pragma once
#include <iostream>
#include <string>
#include <Windows.h>
#include <time.h>
#include <conio.h>
#include "Stack.h"
#define WIDTH 100
struct Vector2 {
private:
	int Y_COORDINATE;
	int X_COORDINATE;
	int VALUE;
public:
	Vector2();
	Vector2(int, int, int);
	inline void setY(int Y_COORDINATE) { this->Y_COORDINATE = Y_COORDINATE; }
	inline int getY() { return Y_COORDINATE; }
	inline void setX(int X_COORDINATE) { this->X_COORDINATE = X_COORDINATE; }
	inline int getX() { return X_COORDINATE; }
	inline int getValue() { return VALUE; }
};
class towerOfHanoi{
private :
	Vector2* vector2;
	Stack<int> STACK_A;
	Stack<int> STACK_B;
	Stack<int> STACK_C;
	Stack<char> movementInstructions;
	int SIZE;
	int ROW;
	int factor;
	int COLOUMN;
	int topValueA;
	int topValueB;
	int topValueC;
	char** array2D;
	char initialStack;
	char selectedStack;
	Vector2 *_vector2;
	bool inAir;
	inline bool checkStackNames(int Y_COORDINATE) { return (Y_COORDINATE == (SIZE - 3)); }
	inline bool checkStackHorizontalBoundary(int Y_COORDINATE) { return (Y_COORDINATE == (SIZE - 4)); }
	inline bool drawStack(int Y_COORDINATE) { return (Y_COORDINATE > 5) && (Y_COORDINATE <= (SIZE - 5)); }
	inline bool drawVerticalBoundary(int X_COORDINATE) { return X_COORDINATE == 1 || X_COORDINATE == WIDTH;	}
	inline bool printStackValueSpace(int X_COORDINATE, int value_X_COORDINATE) { return (X_COORDINATE == (value_X_COORDINATE - 1)) || X_COORDINATE == (value_X_COORDINATE + 1); }
	inline bool checkInAir(int Y_COORDINATE, int X_COORDINATE) { return inAir && (Y_COORDINATE == _vector2->getY()) && (X_COORDINATE > _vector2->getX() && X_COORDINATE < (_vector2->getX() + 18)); }
	inline bool drawStackVerticalBoundary(int X_COORDINATE) { return (X_COORDINATE == 10) || (X_COORDINATE == 40) || (X_COORDINATE == 70) || (X_COORDINATE == 30) || (X_COORDINATE == 60) || (X_COORDINATE == 90); }
	inline bool checkStackMid(int X_COORDINATE) { return ((selectedStack == 'A') && (X_COORDINATE == 20)) || ((selectedStack == 'B') && (X_COORDINATE == 50)) || ((selectedStack == 'C') && (X_COORDINATE == 80)); }
	inline bool checkDrawStackHorizontalBoundary(int X_COORDINATE) { return (X_COORDINATE >= 10) && (X_COORDINATE <= 30) || (X_COORDINATE >= 40) && (X_COORDINATE <= 60) || (X_COORDINATE >= 70) && (X_COORDINATE <= 90); }
	inline bool checkStackMid(int Y_COORDINATE, int X_COORDINATE, int INDEX) { return (X_COORDINATE >= vector2[INDEX].getX() + 8 && X_COORDINATE <= vector2[INDEX].getX() + 10) && (Y_COORDINATE == vector2[INDEX].getY()); }
	inline bool checkStackValue(int INDEX, int Y_COORDINATE, int X_COORDINATE) { return (X_COORDINATE >= vector2[INDEX].getX() + 8 && X_COORDINATE <= vector2[INDEX].getX() + 10) && (Y_COORDINATE == vector2[INDEX].getY()); }
	inline bool checkStackHorizontal(int X_COORDINATE) { return ((selectedStack == 'A') && (X_COORDINATE >= 10 && X_COORDINATE <= 30)) || (selectedStack == 'B' && (X_COORDINATE >= 40 && X_COORDINATE <= 60)) || (selectedStack == 'C' && (X_COORDINATE >= 70 && X_COORDINATE <= 90)); }
	inline void revertColour() { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED); }
	inline std::string drawStackNames(int X_COORDINATE) { return (X_COORDINATE == 20 ? "A" : (X_COORDINATE == 50 ? "B" : (X_COORDINATE == 80 ? "C" : " "))); }
	void moveLeft();
	void moveRight();
	void fillStack();
	void drawVertical();
	void moveUpAValue();
	void setValues(int);
	void moveDownAValue();
	void selectLeftStack();
	void selectRightStack();
	void drawInAirStack(int);
	void drawInternal(int, int);
	void drawCompleteStack(int, int);
	void stackValueColours(int,bool);
	void drawHorizontalBoundary(bool);
	void drawStackValues(int,int,char);
	void moveAValueHorizontally(int,char);
	void setStacks(int, int*, int*, char);
	void horizontalStackBoundaryColour(int);
	void drawCompleteHorizontalStackBoundary(int);
	void automaticAlgorithm(int, char, char, char);
	void moveUpAValue(Stack<int>* STACK, int* topValue);
	void stackToDrawValues(bool*, bool*, bool*, int, int);
	bool moveDownAValue(Stack<int>*,char);
public :
	int noOfTries;
	bool gameOver;
	towerOfHanoi(){}
	towerOfHanoi(int);
	~towerOfHanoi();
	void draw();
	void manualMovement(char);
	void automaticMovement();
	void logic();
	void engine();
};

