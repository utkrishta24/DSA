/*
FIFO
Operations:
enqueue(x)
dequeue()
getFront()
getRear()
size()
isEmpty()
*/

// Applications:
/*
single resource and multiple consumer
synchronizations between slow and fast devices
in OS(semaphores, FCFS Scheduling, Spooling, Buffer for devices like Keyboard)
In computer Network(router/switches and mail queues)
variations(deque, priority queue, doubly ended priority queue)
*/

#include <bits/stdc++.h>
using namespace std;
// simple
/*
struct queue
{
    int size, cap;
    int *arr;
    queue(int c)
    {
        cap = c;
        size = 0;
        arr = new int[cap];
    }
    void enque(int x)
    {
        if (isFull())
            return;
        arr[size] = x;
        size++;
    }
    void deque() // O(n)
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
    int getBack()
    {
        if (isEmpty())
            return -1;
        else
            return size - 1;
    }
    bool isFull()
    {
        return (size == cap);
    }
    bool isEmpty()
    {
        return (size == 0);
    }
};
*/

// using circular array: All O(1)
struct Queue
{
    int *arr;
    int front, cap, size;
    Queue(int c)
    {
        arr = new int[c];
        cap = c;
        front = 0;
        size = 0;
    }
    void enque(int x)
    {
        if (isFull())
            return;
        int rear = getBack();
        rear = (rear + 1) % cap;
        arr[rear] = x;
        size++;
    }
    void deque()
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
    int getBack()
    {
        if (isEmpty())
            return -1;
        else
            return (front + size - 1) % cap;
    }
    bool isFull()
    {
        return (size == cap);
    }
    bool isEmpty()
    {
        return (size == 0);
    }
};

int main()
{
    Queue q(4);
    q.enque(10);
    q.enque(20);
    q.enque(30);
    q.enque(40);
    q.deque();
    cout << q.getFront() << endl;
    cout << q.getBack() << endl;
    return 0;
}
