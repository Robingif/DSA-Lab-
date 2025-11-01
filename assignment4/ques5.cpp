#include <iostream>
#include <queue>
using namespace std;

class Stack {
    priority_queue<pair<int, int>> pq;
    int time = 0;

public:
    void push(int value) {
        pq.push({++time, value});
        cout << value << " pushed\n";
    }

    void pop() {
        if (pq.empty()) {
            cout << "Stack is empty\n";
            return;
        }
        cout << pq.top().second << " popped\n";
        pq.pop();
    }

    void top() {
        if (!pq.empty())
            cout << "Top: " << pq.top().second << "\n";
        else
            cout << "Stack is empty\n";
    }

    void display() {
        priority_queue<pair<int, int>> temp = pq;
        cout << "Stack: ";
        while (!temp.empty()) {
            cout << temp.top().second << " ";
            temp.pop();
        }
        cout << "\n";
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.top();
    s.pop();
    s.display();
    return 0;
}
