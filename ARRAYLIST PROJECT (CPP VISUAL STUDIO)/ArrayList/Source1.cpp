/*#include <stdio.h>
typedef int Type;

struct IType {
    int* p;
    IType(int* p) : p(p) {}
    bool operator!=(IType rhs) {
        return p != rhs.p; 
    }
    int& operator*() { 
        return *p; 
    }
    void operator++() { 
        ++p; 
    }
};

const int SIZE = 10;
struct Iterable {
    int data[SIZE];

    IType begin() { 
        return IType(data); 
    }
    IType end() {
        return IType(data + SIZE); 
    }
};

Iterable iterable;

int main() {
    int i = 0;
    for (int& x : iterable) {
        x = i++;
    }
    for (int x : iterable) {
        printf("%d", x);
    }
}*/