#include<iostream>

template<typename _top>
class Stack
{
private:
    int count;
    _top* A;
    int MaxCount;

public:

    Stack(const int MaxCount);
    ~Stack();
    void push(_top x);
    _top pop();

    bool is_empty();
    bool is_full();

};

template <typename _top>
Stack<_top>::Stack(const int MaxCount)
{
    count = 0;
    A = new _top[MaxCount];
    this->MaxCount = MaxCount;
}

template<typename _top>
Stack<_top>::~Stack()
{
    delete[] A;
}

template<typename _top>
void Stack<_top>::push(_top x)
{
    if (count < MaxCount)
        A[count++] = x;
}

template<typename _top>
_top Stack<_top>::pop()
{
    if (count > 0)
        return A[--count];
    else
    {
        std::cout << "Stack is empty";
        return 0;
    }

}

template<typename _top>
bool Stack<_top>::is_empty()
{
    if (count <= 0)
        return true;
    else return false;
}

template<typename _top>
bool Stack<_top>::is_full()
{
    if (count == MaxCount)
        return true;
    else return false;
}

int main()
{
    Stack<int> st(200);

    for (int i = 0; !st.is_full(); i++)
    {
        st.push(i);
    }

    while (!st.is_empty())
        std::cout << st.pop() << std::endl;

    system("pause");
    return 0;
}