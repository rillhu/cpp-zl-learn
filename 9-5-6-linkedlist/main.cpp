#include <iostream>
#include "linkedlist.h"

using namespace std;

int main() {
    Linkedlist<int> list;
    for (int i = 0; i < 10; ++i) {
        //int item;
        //cin>>item;
        list.insertFront(i+1);
    }
cout<<"List:";
    while (!list.endOfList()){
        cout<<list.data()<<" ";
        list.next();
    }
    return 0;
}
