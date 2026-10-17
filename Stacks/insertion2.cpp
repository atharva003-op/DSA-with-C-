#include <iostream>

int main() {
    int stack[5];
    int top = -1;
    int value;
    int n;

    std::cout << "Enter how many elements to insert: ";
    std::cin >> n;

    if (n > 5 || n < 0) {
        std::cout << "Invalid size!";
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

    return 0;
}
