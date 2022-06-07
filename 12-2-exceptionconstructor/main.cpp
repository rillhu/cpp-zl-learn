#include <iostream>
#include <string>

using namespace std;

class MyException {
public:
    MyException(const string &message) : message(message) {}

    ~MyException() {};

    const string &getMessage() const {
        return message;
    }

private:
    string message;
};

class Demo {
public:
    Demo() {
        cout << "Constructr of Demo" << endl;
    }

    ~Demo() {
        cout << "Destructor of Demo" << endl;
    }
};

void func() throw(MyException) { //C++11 deprecate dynamic exception

    Demo d;
    cout << "Throw Myexception in func()" << endl;
    throw MyException("exception thrown by func()");
}


int main() {
    cout << "in main() function" << endl;
    try {
        func();
    } catch (MyException e) {
        cout << "caught an exception: " << e.getMessage() << endl;
    }

    cout << "Resume the excution of main()" << endl;
    return 0;
}
