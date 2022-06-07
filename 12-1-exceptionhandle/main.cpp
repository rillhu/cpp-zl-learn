#include <iostream>

using namespace std;

int divide(int x, int y) {
    if (y == 0) {
        throw x;
    }
    return x / y;
}


int main() {
    try {
        cout << "5/2=" << divide(5, 2) << endl;
        cout << "8/0=" << divide(8, 0) << endl;
        cout << "7/1=" << divide(7, 1) << endl;
    } catch (int e) {

        cout<<endl<< e << " is divided by 0!" << endl;
    }

    cout << "that is OK" << endl;
    return 0;
}
