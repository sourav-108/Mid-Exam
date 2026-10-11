#include <iostream>
using namespace std;

const int SIZE = 5;
int stackArr[SIZE], top = -1;
int queueArr[SIZE], front = 0, rear = -1;

void push(int value)
{
    if (top == SIZE - 1) cout << "Stack is full" << endl;
    else stackArr[++top] = value;
}

void pop()
{
    if (top == -1) cout << "Stack is empty" << endl;
    else cout << "Removed from stack: " << stackArr[top--] << endl;
}

void showStack()
{
    cout << "Stack (top to bottom): ";
    for (int i = top; i >= 0; i--) cout << stackArr[i] << ' ';
    cout << endl;
}

void enqueue(int value)
{
    if (rear == SIZE - 1) cout << "Queue is full" << endl;
    else queueArr[++rear] = value;
}

void dequeue()
{
    if (front > rear) cout << "Queue is empty" << endl;
    else cout << "Removed from queue: " << queueArr[front++] << endl;
}

void showQueue()
{
    cout << "Queue (front to rear): ";
    for (int i = front; i <= rear; i++) cout << queueArr[i] << ' ';
    cout << endl;
}

int main()
{
    push(10); push(20); push(30);
    showStack();
    pop();
    showStack();

    enqueue(10); enqueue(20); enqueue(30);
    showQueue();
    dequeue();
    showQueue();

    return 0;
}
