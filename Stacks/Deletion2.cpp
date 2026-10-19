#include <iostream>

int main() {
    int stack[5];
    int top = -1;
    int value;
    int n;

    std::cout << "Enter how many elements to insert: ";
    std::cin >> n;

    if (n > 5 || n < 0) {
        std::cout << "Invalid stack size!";
        return 0;
    }

    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> value;

        top++;
        stack[top] = value;
    }

    std::cout << "\nStack:\n";
    for (int i = top; i >= 0; i--) {
        std::cout << stack[i] << "\n";
    }

    //Popping an element from stack!
    if (top == -1) {
        std::cout << "Stack Underflow!";
    }
    else {
        std::cout << "Deleted element: " << stack[top] << "\n";
        top--;
    }

    std::cout <<"\nUpdated Stack : \n";
    for (int i = top; i >= 0; i--) {
        std::cout << stack[i] << "\n";
    }

    return 0;
}
