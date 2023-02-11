
#include <conio.h>
#include "cake.h"
#include <Windows.h>
#include <thread>
#include <stdio.h>
#include <MMsystem.h>
using namespace std;
int main() {
    system("pause");
    std::thread musicThread([]() {
        PlaySound(TEXT("C:\\Users\\Abdullah123\\Desktop\\b.wav"), NULL, SND_LOOP|SND_ASYNC); //SND_FILENAME or SND_LOOP
        });
    cake Cake = cake("lady sara abid khan");
    Cake.draw();
    musicThread.detach();
}
