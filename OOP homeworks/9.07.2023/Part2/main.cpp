#include <iostream>
#include <string>
#include <cstdint>

#include "StackOverflowException.h"
#include "StackEmptyException.h"
#include "StackIsFullException.h"

using namespace std;



template <typename T>
class MyStack
{
public:
    MyStack() = default;
    MyStack(const MyStack &other) = delete;
    MyStack &operator=(const MyStack &other) = delete;

    MyStack(uint16_t capacity, bool isExpandable = false)
    {
        this->capacity = capacity;
        if (this->capacity > 100) {throw StackIsFullException("Stack is full");}
        if (this->capacity == 0) {throw StackEmptyException("Stack is empty");}
        this->arr = new T[capacity]{};
        this->isExpandable = isExpandable;
    }

    ~MyStack()
    {
        delete[] this->arr;
    }

    void push(T value)
    {
        if (this->size == this->capacity && !this->isExpandable)
        {
            throw StackOverflowException("Stack overflow");
        }
        else
        {
            if (this->size == this->capacity && this->isExpandable)
            {

                this->capacity *= 2;

                T *newArr = new T[this->capacity]{};

                for (uint16_t i = 0; i < this->capacity; i++)
                {
                    newArr[i] = this->arr[i];
                }

                delete[] this->arr;
                this->arr = newArr;
            }
        }
        this->arr[this->size] = value;
        this->size++;
    }

    T pop()
    {
        if (this->size == 0)
        {
            throw StackEmptyException("Stack is empty");

        }
        this->size--;

        T objForReturn = this->arr[this->size];

        this->arr[this->size] = T{};

        return objForReturn;
    }

    T peek(bool reset=false)
    {
        static uint16_t peekIterator = this->size;

        if (reset) {
            peekIterator = this->size;
        }

        if (this->size == 0)
        {
           throw StackEmptyException("Stack is empty");
        }
        if (peekIterator == 0)
        {
            peekIterator = this->size;
        }
        peekIterator--;
        return this->arr[peekIterator];
    }

private:
    T *arr{};
    uint16_t size{};
    uint16_t capacity{};
    bool isExpandable{false};
};

int main()
{

    try{
        MyStack<int> stack(5, true);


        stack.push(1);
        stack.push(2);

        stack.pop();
        stack.pop();
        stack.pop();

    }catch (exception &e)
    {
        cout << "Error: " << e.what() << endl;
    }




    return 0;
}
