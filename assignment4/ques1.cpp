#include <iostream>
#include <vector>
using namespace std;

class Queue {
    vector<int> data;
    int front = 0;

public:
    void enqueue(int value) {
        data.push_back(value);
        cout << value << " added to queue\n";
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }
        cout << data[front] << " removed from queue\n";
        front++;
    }

    bool isEmpty() {
        return front >= data.size();
    }

    bool isFull() {
        return false; 
    }

    void peek() {
        if (!isEmpty())
            cout << "Front element: " << data[front] << "\n";
        else
            cout << "Queue is empty\n";
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Queue contents: ";
        for (int i = front; i < data.size(); ++i)
            cout << data[i] << " ";
        cout << "\n";
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    q.peek();
    q.dequeue();
    q.display();
    return 0;
}
