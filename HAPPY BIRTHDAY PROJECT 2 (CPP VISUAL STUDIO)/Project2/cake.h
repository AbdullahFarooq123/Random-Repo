//
// Created by Abdullah123 on 11/13/2020.
//
#include <iostream>
#ifndef UNTITLED_CAKE_H
#define UNTITLED_CAKE_H

class cake {
	std::string name;
	std::string birthdayTo;
	void drawCake(int, int, std::string);
	void drawCandles(int);
	void revertColour();
	void printHappyBirthdayTo(bool);
	int calculateSpaces(std::string);
	void printSpaces(int);
public:
	cake(std::string);
	void draw();
};

#endif // UNTITLED_CAKE_H
