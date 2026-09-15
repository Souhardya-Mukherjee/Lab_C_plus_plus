#Call by Value in C++
#include <iostream>
using namespace std;

void Swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    cout << "After Swap: a=" << x << "b=" << y << endl;
}

int main() {
    int a = 40;
    int b = 50;
    cout << "Before Swap: a=" << a << "b=" << b << endl;
    Swap(a, b);
    return 0;
}
