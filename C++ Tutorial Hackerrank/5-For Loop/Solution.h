#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int x, y , z;
    cin >>x;
    cin >>y;
    if(y>x)
        x=x;
    else
        {
        z = x;
        x = y;
        y = z;
        }
    for(int i = x; i <= y; i++) {
        if (i == 1) { cout << "one\n"; }
    else if (i == 2) { cout << "two\n"; }
    else if (i == 3) { cout << "three\n"; }
    else if (i == 4) { cout << "four\n"; }
    else if (i == 5) { cout << "five\n"; }
    else if (i == 6) { cout << "six\n"; }
    else if (i == 7) { cout << "seven\n"; }
    else if (i == 8) { cout << "eight\n"; }
    else if (i == 9) { cout << "nine\n"; }
    else { 
    if(i%2 ==0)
        cout << "even\n";
        else
            cout << "odd\n";
    }
    }
    return 0;
}
