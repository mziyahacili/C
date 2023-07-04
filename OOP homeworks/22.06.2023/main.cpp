


#include <iostream>
#include <string>
#include <cstdint>

using namespace std;

template <typename T>
class MyQueue
{
public:
    MyQueue() = default;
    MyQueue(const MyQueue &other) = delete;
    MyQueue &operator=(const MyQueue &other) = delete;

    MyQueue(uint16_t capacity, bool isExpandable = false)
    {
        this->capacity = capacity;
        this->arr = new T[capacity]{};
        this->isExpandable = isExpandable;
    }

    ~MyQueue()
    {
        delete[] this->arr;
    }

    void push(T value)
    {
        if (this->size == this->capacity && !this->isExpandable)
        {
            cout << "Stack overflow" << endl;
            return;
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
            cout << "Stack is empty" << endl;
            return T{};
        }
        this->size--;

        T objForReturn = this->arr[this->size];

        this->arr[this->size] = T{};

        return objForReturn;
    }

    T peek(bool reset = false){
        static uint16_t peekIterator = 0;

        if(reset)
            peekIterator = 0;
        if (this->size == 0)
        {
            cout << "Stack is empty!" << endl;
            return T{};
        }
        if (peekIterator == this->size)
            peekIterator = 0;

        peekIterator++;
        return this->arr[peekIterator-1];

    }

private:
    T *arr{};
    uint16_t size{};
    uint16_t capacity{};
    bool isExpandable{false};
};

int main()
{

    MyQueue<int> queue(5, true);

    queue.push(1);
    queue.push(2);
    queue.push(3);
    queue.push(4);
    queue.push(5);
    queue.push(6);


    cout << queue.peek() << endl;
    cout << queue.peek() << endl;
    cout << queue.peek(true) << endl;

    cout << queue.peek() << endl;



    return 0;
}
