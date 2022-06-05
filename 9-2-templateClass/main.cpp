#include <iostream>
#include <cstdlib>

using namespace std;

struct Student {
    int id;
    float age;
};

template<class T>
class Store {
private:
    T item;
    bool haveValue;
public:
    Store();

    T &getElem();

    void putElem(const T &x);
};

/* Define the function member out of class template
 * template<T>
 * 类型名 类名<模板参数标识符列表>::函数名(参数表)
 * */

template<class T>
Store<T>::Store():haveValue(false) {
}

template<class T>
T &Store<T>::getElem() {
    if (!haveValue) {
        cout << "No item present" << endl;
        exit(-100);
    }
    return item;
}

template<class T>
void Store<T>::putElem(const T &x) {
    haveValue=true;
    item=x;

}

int main() {
    Store<int> s1;
    Store<int> s2;
    s1.putElem(3);
    s2.putElem(-7);
    cout << s1.getElem() << " " << s2.getElem() << endl;

    Student g = {
            1000,
            23
    };

    Store<Student> s3;
    s3.putElem(g);
    cout << "The student id is " << s3.getElem().id << endl;

    Store<double> d;

    //cout<<"Retrieving object d...";
    //cout<<d.getElem()<<endl;


    cout<<"Retrieving object d after putitem..."<<endl;
    d.putElem(4.5);
    cout<<d.getElem()<<endl;


    return 0;
}
