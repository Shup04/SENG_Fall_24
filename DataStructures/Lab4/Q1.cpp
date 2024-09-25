#include <iostream>
#include <stack>
#include <queue>

std::stack<int> reverseStack(std::stack<int> stackToReverse) {
    std::stack<int> temp;
    while (!stackToReverse.empty()) {
        temp.push(stackToReverse.top());
        stackToReverse.pop();
    }
    return temp;
};


std::queue<int> reverseStackWithQueue(std::stack<int> stackToReverse) {
    std::queue<int> temp;
    std::stack<int> reversedStack;
    // Move elements from stackToReverse to reversedStack
    while (!stackToReverse.empty()) {
        reversedStack.push(stackToReverse.top());
        stackToReverse.pop();
    }
    // Move elements from reversedStack to temp (queue)
    while (!reversedStack.empty()) {
        temp.push(reversedStack.top());
        reversedStack.pop();
    }
    return temp;
}


void printStack (std::stack<int> reversedStack) {
    while (!reversedStack.empty()) {
        std::cout << reversedStack.top() << " ";
        reversedStack.pop();
    }
    std::cout << std::endl;
};

void printQueue(std::queue<int> reversedStack) {
    while (!reversedStack.empty()) {
        std::cout << reversedStack.front() << " ";
        reversedStack.pop();
    }
    std::cout << std::endl;
};

int main() {
    // Setup the stack
    std::stack<int> stack;
    stack.push(1);
    stack.push(3);
    stack.push(5);
    stack.push(7);

    // Reverse the stack using another stack
    std::stack<int> reversedStack = reverseStack(stack);
    std::cout << "Stack: ";
    printStack(stack);
    std::cout << "Reversed stack usigng stack: ";
    printStack(reversedStack);

    // Reverse the stack using a queue
    std::queue<int> reversedStack2 = reverseStackWithQueue(stack);
    std::cout << "Stack: ";
    printStack(stack);
    std::cout << "Reversed stack using queue: ";
    printQueue(reversedStack2);

    return 0;
}