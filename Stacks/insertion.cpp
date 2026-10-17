#include <iostream>

int main() {
    int stack[5];
    int top = -1;
    int value;

    std::cout << "Enter value to insert: ";
    std::cin >> value;

    if (top == 4) {
        std::cout << "Stack Overflow";
    }
    else {
        top++;
        stack[top] = value;
        std::cout << "Element inserted: " << stack[top];
    }

    return 0;
}
