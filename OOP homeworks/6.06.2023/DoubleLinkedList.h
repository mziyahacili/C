#pragma once


#include <iostream>
using namespace std;

template <typename T>
class DoubleLinkedList
{
public:
    struct Node{
        T data;
        Node* next{};
        Node* prev{};


        Node(T data) : next(nullptr), prev(nullptr), data(data) {};
    };

    DoubleLinkedList() = default;

    DoubleLinkedList(T data);

    void pushBack(T data);

    void pushBegin(T data);


    void addIndex(int index, T data);


    void pop();

    void deleteIndex(int index);

    void deleteValue(T value);


    friend ostream& operator << (ostream& os, DoubleLinkedList& list)
    {
        Node* current = list.head;
        while(current != nullptr)
        {
            os << current->data << ' ';
            current = current->next;
        }
        return os;
    }


private:
    Node* head{};
    int size{};
};
