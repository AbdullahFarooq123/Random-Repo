
#include <conio.h>
#include "cake.h"
#include <Windows.h>
#include <thread>
using namespace std;
int main() {
    system("pause");
    std::thread musicThread([](){

    },NULL);
    musicThread.join();
    cake Cake = cake("Malik subhan zaheer");
    Cake.draw();
}


