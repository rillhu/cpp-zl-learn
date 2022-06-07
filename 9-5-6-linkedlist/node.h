//
// Created by hongf on 2022/6/7.
//

#ifndef INC_9_5_6_LINKEDLIST_NODE_H
#define INC_9_5_6_LINKEDLIST_NODE_H

template<class T>
class Node {
private:
    Node<T> *next;  //指向后继节点的指针
public:
    T data;         //数据域

    Node(const T &data, Node<T> *next = 0); //constructor
    void insertAfter(Node<T> *p);           //在本节点之后插入一个同类节点
    Node<T> *deleteAfter();                 //删除本届点后继节点
    Node<T> *nextNode();                     //获取后继节点的地址
    const Node<T> *nextNode() const;        //获取后继节点的地址 for const
};

template<class T>
Node<T>::Node(const T &data, Node<T> *next):data(data), next(next) {}

template<class T>
Node<T> *Node<T>::nextNode() {
    return next;
}

template<class T>
const Node<T> *Node<T>::nextNode() const {
    return next;
}


template<class T>
void Node<T>::insertAfter(Node<T> *p) {
    p->next = next; //p节点指针域指向当前节点的后继节点
    next = p;       //当前节点的指针域指向p
}

//删除当前节点的后继节点，并返回被删除节点地址
template<class T>
Node<T> *Node<T>::deleteAfter() {
    Node<T> *tempPtr = next;
    if (next == 0) {
        return 0;
    }
    next = tempPtr->next;
    return tempPtr;
}


#endif //INC_9_5_6_LINKEDLIST_NODE_H
