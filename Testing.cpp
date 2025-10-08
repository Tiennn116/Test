#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    const char* filename = "Testing.exe";
    // Swap the values of a and b
    int temp = a;
    a = b;
    b = temp;

    cout << "After swapping: a = " << a << ", b = " << b << endl;
    if(remove(filename) == 0){
        cout <<"Sucessfull";
    }
    return 0;
}