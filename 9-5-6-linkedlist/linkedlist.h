//
// Created by hongf on 2022/6/7.
//

#ifndef INC_9_5_6_LINKEDLIST_LINKEDLIST_H
#define INC_9_5_6_LINKEDLIST_LINKEDLIST_H

#include <cstdio>
#include "node.h"

template<class T>
class Linkedlist {
private:
    Node<T> *front, *rear;
    Node<T> *prevPrt, *currPrt;
    int size;
    int position;

    //函数成员，生成新结点
    Node<T> *newNode(const T &item, Node<T>, Node<T> *ptrNext = NULL);

    //函数成员，释放节点
    void freeNode(Node<T> *p);

    //函数成员，将链表L复制到当前表
    void copy(const Linkedlist<T> &L);

public:
    Linkedlist();                           //构造函数

    Linkedlist(const Linkedlist<T> &L);     //复制构造函数

    ~Linkedlist();                          //析构函数

    Linkedlist<T> &operator=(const Linkedlist<T> &L);   //overload oprator "="

    int getSize() const;                    //返回链表元素个数

    bool isEmpty() const;                   //链表是否为空

    void reset(int pos = 0);                //初始化游标位置

    void next();                            //使游标移动到下一个节点

    bool endOfList() const;                 //游标是否到了链尾

    int currentPosition(void) const;        //返回游标当前位置

    void insertFront(const T &item);        //在表头插入节点

    void insertRear(const T &item);         //在表尾插入节点

    void insertAt(const T &item);           //在当前节点之前插入节点

    void insertAfter(const T &item);        //在当前节点之后插入节点

    T deleteFront();                        //删除头节点
    void deleteCurrent();                   //删除当前节点

    T &data();                              //返回当前节点的数据的引用
    const T &data() const;                  //返回当前节点的数据的常引用

    void clear();                           //清空链表：释放所有内存空间，被析构函数和operator=调用
};


#endif //INC_9_5_6_LINKEDLIST_LINKEDLIST_H