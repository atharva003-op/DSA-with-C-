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

    //Poping an element!
    if (top == -1) {
        std::cout << "\nStack Underflow!";
    }
    else {
        std::cout << "\nDeleted element: " << stack[top] << "\n";
        top--;
    }

    for (int i = top; i >= 0; i--) {
        std::cout << stack[i] << "\n";
    }

    return 0;
}
