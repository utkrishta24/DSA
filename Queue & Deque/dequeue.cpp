/*
insertFront()
insertRear()
deleteFront()
deleteRear()
getFront()
getRear()
isFull()
isEmpty()
size()
*/

// O(1)

// Implementation:
// 1.Linked List: doubly LL with front and rear pointers.
// 2.Array: Circular Array with front and rear index. We can also maintain front and size and get rear with size.

/*
Applications:
1. can be used as both stack and queue
2. maintain history of actions
3. steal processs scheduling algo
4. implementing a priority queue with two types of priorities
5. maximum/minimum of all subarrays of size k
*/

#include <bits/stdc++.h>
using namespace std;

struct deque
{
    int size, cap;
    int *arr;
    deque(int c)
    {
        cap = c;
        size = 0;
        arr = new int[cap];
    }
    bool isFull() { return (size == cap); }
    bool isEmpty() { return (size == 0); }
    void insertRear(int x)
    {
        if (isFull())
            return;
        arr[size] = x;
        size++;
    }
    void deleteRear()
    {
        if (isEmpty())
            return;
        size--;
    }
    int getRear()
    {
        if (isEmpty())
            return -1;
        else
            return (size - 1);
    }
    void insertFront(int x)
    {
        if (isFull())
            return;
        for (int i = size - 1; i >= 0; i--)
            arr[i + 1] = arr[i];
        arr[0] = x;
        size++;
    }
    void deleteFront()
    {
        if (isEmpty())
            return;
        for (int i = 0; i < size - 1; i++)
            arr[i] = arr[i + 1];
        size--;
    }
    int getFront()
    {
        if (isEmpty())
            return -1;
        else
            return 0;
    }
};

// efficient : circular array
/*
delfront: front=(front+1)%cap;
insertrear: rear=(rear+1)%cap;
insertfront: front=(front-1+cap)%cap;
delrear: front=(rear-1+cap)%cap;
*/
// rear is always: (front+size-1)%cap
struct Deque
{
    int size, cap, front;
    int *arr;
    Deque(int c)
    {
        arr = new int[c];
        cap = c;
        front = 0 size = 0;
    }
    bool isFull() { return (size == cap); }
    bool isEmpty() { return (size == 0); }
    void insertRear(int x)
    {
        if (isFull())
            return;
        int new_rear = (front + size) % cap;
        arr[new_rear] = x;
        size++;
    }
    void deleteRear()
    {
        if (isEmpty())
            return;
        size--;
    }
    int getRear()
    {
        if (isEmpty())
            return -1;
        else
            return (front + size - 1) % cap;
    }
    void insertFront(int x)
    {
        if (isFull())
            return;
        front = (front + cap - 1) % cap;
        arr[front] = x;
        size++;
    }
    void deleteFront()
    {
        if (isEmpty())
            return;
        front = (front + 1) % cap;
        size--;
    }
    int getFront()
    {
        if (isEmpty())
            return -1;
        else
            return front;
    }
};

int main()
{

    return 0;
}
