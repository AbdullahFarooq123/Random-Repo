#include "ArrayList.h"
#include "HashMap.h"
#include <iostream>
using namespace std;
int main() {
	HashMap<int,int> map;
	map.put(0, 0);
	cout << map.getLength();
}