#include <iostream>
using namespace std;

template <typename T>
class MyVector
{
private:
    T* arr{};
    size_t length{};
    size_t capacity{};

public:
    MyVector(size_t capacity)
    {
        this->capacity = capacity;
    }

    MyVector(initializer_list<T> list) //initializer list - тип данных. Хранит адрес begin and end
    {
        this->capacity = list.size() * 2;
        this->length = list.size();
        this->arr = new T[this->capacity]{};
        for (auto i = list.begin(); i < list.end(); ++i) {
            this->arr[i-list.begin()] = *i;
        }
    }

    void append(T element)
    {

        if (this->length == this->capacity)
        {
            this->capacity *= 2;
            T* new_arr = new T[this->capacity]{};
            for (int i = 0; i < this->length; ++i) {
                new_arr[i] = arr[i];
            }
            delete[] this->arr;
            this->arr = new_arr;
        }
        this->arr[this->length] = element;
        this->length++;
    }

    void emplace(uint16_t position, T element)
    {
        if (this->length == this->capacity)
        {
            this->capacity *=2;
            T *new_arr = new T[this->capacity]{};
            for (size_t i = 0; i < this->length; ++i) {
                new_arr[i] = arr[i];
            }
            delete[] arr;
            this->arr = new_arr;
        }

        this->length++;
        for (int i = this->length-1; i > position-1; --i) {
            arr[i] = arr[i-1];
        }
        this->arr[position-1] = element;
    }

    void insert(uint16_t position, uint16_t count, T element)
    {
        if (length == capacity)
        {
            this->capacity *=2;
            T *new_arr = new T[this->capacity]{};
            for (int i = 0; i < this->length; ++i) {
                new_arr[i] = arr[i];
            }
            delete[] arr;
            this->arr = new_arr;
        }

        this->length+=count; //+2

        for (int i = this->length-1; i > position - 1; --i) {
            arr[i] = arr[i-count];
        };

        for (int i = position-1; i < this->length-count-1; ++i) {
            this->arr[i] = element;
        }

    }

    void clear()
    {
        for (int i = 0; i < this->length; ++i) {
            delete[] this->arr[i];
        }
    }

    void empty()
    {
        if (this->length > 0)
            cout << "Array not empty!" << endl;
        else
            cout << "Array is empty!" << endl;
    }

    void pop_back()
    {
        this->length--;
        T* new_arr = new T[this->capacity]{};
        for (int i = 0; i < this->length; ++i) {
            new_arr[i] = arr[i];
        }

        delete[] arr;
        this->arr = new_arr;
    }


    void  size() const
    {
        cout << this->length;
    }

    void erase(uint16_t position)
    {
        T* new_arr = new T[this->capacity]{};
        int tmp{};
        int elem = arr[position-1];

        for (int i = 0; i < this->length; ++i) {
            for (int j = 0; j < this->length-i; ++j) {
                if (arr[j] == elem)
                {
                    tmp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = tmp;
                }
            }
        }

        this->length--;
        for (int i = 0; i < this->length; ++i) {
            new_arr[i] = arr[i];
        }
        delete[] arr;
        this->arr = new_arr;

    }

    void resize(uint16_t n)
    {
        T* new_arr = new T[this->capacity]{};
        this->length=n;

        for (int i = 0; i < this->length; ++i) {
            new_arr[i] = arr[i];
        }

        delete[] arr;
        this->arr = new_arr;

    }

    void resize(uint16_t n, uint16_t value)
    {
        T* new_arr = new T[this->capacity]{};
        this->length=n;

        for (int i = 0; i < this->length; ++i) {
            new_arr[i] = arr[i];
            if (new_arr[i] == 0)
                new_arr[i] = value;
        }



        delete[] arr;
        this->arr = new_arr;

    }

    void assign(uint16_t n, uint16_t value)
    {
        this->length = n;
        T* new_arr = new T[this->capacity]{};

        for (int i = 0; i < n; ++i) {
            new_arr[i] = value;
        }
        delete[] arr;
        this->arr = new_arr;
    }

    void at(size_t index)
    {
        cout << &this->arr[index-1];
    }

    void front()
    {
        cout << &this->arr[0];
    }

    void back()
    {
        cout << &this->arr[this->length-1];
    }


    friend ostream &operator << (ostream &os, MyVector<T> &v)
    {
        for (size_t i = 0; i < v.length; ++i) {
            os << v.arr[i] << " ";
        }
        return os;
    }

    T &operator [](size_t index) {
        if(index < this->length)
            return this->arr[index];
    }

};

int main()
{
    MyVector<int> v{1,2,3,4,5};
    cout << v;

    return 0;
}