#include "DoubleLinkedList.h"



template <typename T>
DoubleLinkedList<T> :: DoubleLinkedList(T data)
{
    this->head = new Node(data);
}

template <typename T>
void DoubleLinkedList<T>::pushBack(T data)
{
    if (this->head == nullptr)
    {
        this->head = new Node(data);
        return;
    }
    Node* current = this->head;
    while(current->next!= nullptr)
    {
        current = current->next;
        current->prev = current;
    }
    current->next = new Node(data);
}

template <typename T>
void DoubleLinkedList<T> ::pushBegin(T data)
{
    if (this->head == nullptr)
    {
        this->head = new Node(data);
        return;
    }

    Node* begin = this->head; //1
    this->head = new Node(data);
    this->head->next = begin;
}

template <typename T>
void DoubleLinkedList<T> ::addIndex(int index, T data)
{
    Node* newNode = new Node(data);

    if (index-1 == 0)
    {
        newNode->prev = nullptr;
        newNode->next = this->head;


        this->head->prev = newNode;
        this->head = newNode;
    }
    else
    {
        Node* current = this->head;
        for (int i = 0; i < index - 1; ++i)
            current = current->next; //3

        newNode->prev = current; // 3 <- 44
        newNode->next = current->next;// 44 -> 4

        current->next->prev = newNode; // 44 <- 4
        current->next = newNode; //
    }
}

template <typename T>
void DoubleLinkedList<T> ::pop()
{
    Node* current = this->head;
    Node* end = this->head;

    while(current->next != nullptr)
    {
        end = current; //4
        current = current->next; //5
    }



    delete current;
    end->next = nullptr;
}


template <typename T>
void DoubleLinkedList<T> ::deleteIndex(int index)
{
    if ((index-1) == 0)
    {
        this->head = this->head->next;
    }

    Node* current = this->head;
    int counter{};

    while(counter < index-1){
        current = current->next;
        counter++;
    }

    Node* before = current->prev;
    Node* after = current->next;

    before->next = after;
    after->prev = before;

}

template <typename T>
void DoubleLinkedList<T> ::deleteValue(T value)
{
    Node* current = this->head;

    while(current->next != nullptr)
    {
        if (current->data == value)
        {
            Node* before = current->prev;
            Node* after =current->next;

            before->next = after;
            after->prev = before;

            return;
        }
        current = current->next;
    }
}

