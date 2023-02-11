//
// Created by Abdullah123 on 11/13/2020.
//

#include "cake.h"
#include <Windows.h>
#include <conio.h>
#include <iostream>
#include <utility>
#include <iomanip>
cake::cake(std::string name):name(std::move(name)){
  birthdayTo = "happy birthday to ";
  birthdayTo+=this->name;
}
void cake::drawCake(int Length, int Spaces, std::string Name) {
  int lengthOfText = Name.length();
  int INDEX = 0;
  int textToDraw = (Length / 2) - (lengthOfText / 2);
  for (int i = 1; i < 5; i++) {
    for (int Space = 0; Space < Spaces; Space++) std::cout << " ";
    for (int j = 1; j <= Length; j++) {
      if (i == 2 || i == 3)
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_GREEN);
      else
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN);
      if ((i == 2) && (j >= textToDraw) && (INDEX < lengthOfText)) std::cout << Name[INDEX++];
      else std::cout << "\xB2";
      revertColour();
    }
    std::cout << std::endl;
  }
}
void cake::printHappyBirthdayTo(bool toSleep) {
  int noOfSpaces = (calculateSpaces(birthdayTo)+1);
  auto* tempString = new std::string [noOfSpaces];
  int INDEX = 0;
  for(char character : birthdayTo){
    if(character == ' ' ) INDEX++;
    tempString[INDEX].push_back(' ');
    tempString[INDEX].push_back(toupper(character));
  }

  system("cls");
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
  std::cout << std::endl;
  int spaces = 10;
  for(int i = 0 ; i < noOfSpaces ; i++){
    if(i>=2&&i<=3) std::cout << std::endl << std::endl;
    if(i==2) spaces = 23;
    else spaces = 10;
    if(i<=3) printSpaces(spaces);
    std::cout << tempString[i] ;
    if(toSleep) Sleep(2000);
  }
  revertColour();
}
void cake::printSpaces(int spaces){
  for(int i = 0 ; i < spaces; i++) std::cout << " ";
}
void cake::drawCandles(int spaces) {
  for (int i = 1; i < 7; i++) {
    for (int Space = 0; Space < spaces; Space++)  std::cout << " ";
    for (int j = 1; j < 20; j++) {
      if (j == 10 && i == 1 || (i == 3 && (j == 2 || j == 19))) {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
        std::cout << "o";
        revertColour();
      } else if (j == 10 && i == 2 || (i == 4 && (j == 2 || j == 19)))  std::cout << "\xBA";
      else if ((i > 2 && i < 10) && (j == 10 || j == 2 || j == 19)) {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE);
        std::cout << "\xDB";
        revertColour();
      } else  std::cout << " ";
    }
    std::cout <<  std::endl;
  }
}

void cake::revertColour() {
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
}
int cake::calculateSpaces(std::string name){
  int spaces = 1 ;
  for(char character : name) if(character==' ') spaces++;
  return spaces;
}
void cake::draw() {
  printHappyBirthdayTo(true);
  for(int i = 0 ; i < 3 ; i ++){
    system("cls");
    printHappyBirthdayTo(false);
    Sleep(1500);
  }
  system("cls");
  int index = 0;
  int sizeOfSplitNames = calculateSpaces(name);
  auto *subNames = new std::string [sizeOfSplitNames];
  for(char character : name){
    if(character==' ') {
      subNames[index++].push_back(' ');
      continue;
    }
    subNames[index].push_back(' ' );
    subNames[index].push_back(toupper(character));
  }
  subNames[index].push_back(' ');
  index = 5;
  for(int i = 0 ; i < sizeOfSplitNames ; i++ ) index+=5;
  drawCandles(index);
  int lengthOfPiece = 20;
  int noOfSpaces = index;
  index = 0;
  while(index<sizeOfSplitNames) {
    Sleep(2000);
    drawCake(lengthOfPiece, noOfSpaces, subNames[index++]);
    lengthOfPiece+=10;
    noOfSpaces-=5;
  }
  Sleep(2000);
  drawCake(lengthOfPiece, noOfSpaces, "");
  Sleep(2000);
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
  for (int i = 0; i < lengthOfPiece + 10 ; i++)  std::cout << "\xDB";
  Sleep(2000);
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE);
  Sleep(2000);
  system("cls");
  std::cout << "\n\n\t\t\t\tWISH YOU A HAPPY HAPPY";
  Sleep(2000);
  std::cout << "\n\n\t\t\t\t\tBIRTHDAY";
  Sleep(2000);
  std::cout << "\n\n\t\t\t   MANY MANY HAPPY RETURNS OF THE DAY";
  Sleep(2000);
  std::cout << "\n\n\t\t\t\t      KEEP SMILING!\n";
  revertColour();
  Sleep(3000);
  system("cls");
  while (!_kbhit()) {
    index = 5;
    for(int i = 0 ; i < sizeOfSplitNames ; i++ ) index+=5;
    drawCandles(index);
    lengthOfPiece= 20;
    noOfSpaces= index;
    index = 0;
    while(index<sizeOfSplitNames) {
      drawCake(lengthOfPiece, noOfSpaces, subNames[index++]);
      lengthOfPiece+=10;
      noOfSpaces-=5;
    }
    drawCake(lengthOfPiece, noOfSpaces, "");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
    for (int i = 0; i < lengthOfPiece + 10 ; i++)  std::cout << "\xDB";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE);
    Sleep(2000);
    system("cls");
  }
}