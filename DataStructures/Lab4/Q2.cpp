#include <iostream>
#include <stack>

template <class T> 
class Stack {
    public:
        // Constructor
        Stack() {
            top = -1;
        }
        
        // Define various functions
        void push(T k) {
            if (isFull()) {
                std::cout << "Stack is full." << std::endl;
                return;
            }
            st[++top] = k;
        }
        
        T pop() {
            if (isEmpty()) {
                std::cout << "Stack is empty." << std::endl;
                return T();
            }
            return st[top--];
        }
        
        T topElement() {
            if (isEmpty()) {
                std::cout << "Stack is empty." << std::endl;
                return T();
            }
            return st[top];
        }
        
        bool isFull() {
            return top == 4;
        }

        bool isEmpty() {
            return top == -1;
        }

    private:
        int top;
        T st[5];
};

void printStack (Stack<char> stackToPrint) {
    while (!stackToPrint.isEmpty()) {
        std::cout << stackToPrint.topElement() << " ";
        stackToPrint.pop();
    }
    std::cout << std::endl;
};

int main() {
    Stack<char> myStack;

    myStack.push('C');
    myStack.push('B');
    myStack.push('A');
    printStack(myStack);
    
    myStack.pop();
    printStack(myStack);

    while (!myStack.isEmpty()) {
        myStack.pop();
    }
    printStack(myStack);

    return 0;
}