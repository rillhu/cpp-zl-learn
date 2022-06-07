//
// Created by Hongfei on 2022/6/6.
//

#ifndef INC_9_4_ARRAY_ARRAY_H
#define INC_9_4_ARRAY_ARRAY_H

#include <cassert>

template<class T>
class Array {
private:
    T *list;
    int size;
public:
    Array(int sz = 50);         //constructor
    Array(const Array<T> &a);   //copy constructor
    ~Array();

    Array<T> &operator=(const Array<T> &rhs);   //overload "="
    T &operator[](int i);                       //overload "[]"
    const T &operator[](int i) const;           //overload "[]" for const
    operator T *();              //overload T* type convert
    operator const T *() const;  //overload T* type convert for const

    int getSize() const;

    void reSize(int sz);
};

template<class T>
Array<T>::Array(int sz) {
    assert(sz >= 0);
    size = sz;
    list = new T(size);
}


template<class T>
Array<T>::~Array() {
    delete[]list;
}

template<class T>
Array<T>::Array(const Array<T> &a) {
    size = a.size;
    list = new T[size];
    for (int i = 0; i < size; i++) {
        list[i] = a.list[i];
    }
}

template<class T>
Array<T> &Array<T>::operator=(const Array<T> &rhs) {
    if (&rhs != this) {
        if (size != rhs.size) {
            delete[]list;
            size = rhs.size;
            list = new T[size];
        }
        for (int i = 0; i < size; ++i) {
            list[i] = rhs.list[i];
        }
    }
    return *this;
}

template<class T>
T &Array<T>::operator[](int i) {
    assert(i >= 0 && i < size);
    return list[i];
}

template<class T>
const T &Array<T>::operator[](int i) const {
    assert(i >= 0 && i << size);
    return list[i];
}

template<class T>
Array<T>::operator T *() {
    return list;
}

template<class T>
Array<T>::operator const T *() const {
    return list;
}

template<class T>
int Array<T>::getSize() const {
    return size;
}

template<class T>
void Array<T>::reSize(int sz) {
    assert(sz >= 0);
    if (sz == size) return;
    T *newList = new T[sz];
    int n = (sz < size) ? sz : size;
    for (int i = 0; i < n; ++i) {
        newList[i] = list[i];
    }
    delete[] list;
    list = newList;
    size=sz;
}

#endif //INC_9_4_ARRAY_ARRAY_H
