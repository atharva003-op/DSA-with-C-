#include <iostream>

int main () {
    int arr[10];
    int n = 0;
    int value;
    int pos;
    int choice;

    do {
        std::cout <<"\n--- |Array Operations| ---\n";
        std::cout <<"[1].Insert at beginning\n";
        std::cout <<"[2].Insert at ending\n";
        std::cout <<"[3].Insert at position\n";
        std::cout <<"[4].Delete at beginning\n";
        std::cout <<"[5].Delete at end\n";
        std::cout <<"[6].Delete at postion\n";
        std::cout <<"[7].Display Array\n";
        std::cout <<"[8].Exit\n";
        std::cout <<"Enter choice : ";
        std::cin >>choice;

        if (choice == 1) {

            if (n == 10) {
                std::cout <<"Array is full!\n";
                continue;
            } else {
                std::cout <<"Enter value : ";
                std::cin >>value;
                for (int i = n - 1; i >= 0; i--) {
                    arr[i+1] = arr[i];
                }
                arr[0] = value;
                n++;
            }
        }

        else if (choice == 2) {
            std::cout <<"Enter value : ";
            std::cin >>value;
            if (n == 10) {
                std::cout <<"Array is full!\n";
                continue;
            } else {
                arr[n] = value;
                n++;
            }
        }

        else if (choice == 3) {
            std::cout <<"Enter position to insert value : ";
            std::cin >>pos;

            if (pos < 0 || pos > n) {
                std::cout <<"Invalid position!\n";
                continue;
            } else {
                if (n == 10) {
                    std::cout <<"Array is full!\n";
                    continue;
                } else {
                    std::cout <<"Enter value : ";
                    std::cin >>value;
                    for (int i = n - 1; i >= pos; i--) {
                        arr[i+1] = arr[i];
                    }
                    arr[pos] = value;
                    n++;
                }
            }
        }

        else if (choice == 4) {
            if (n == 0) {
                std::cout <<"Array is empty!\n";
                continue;
            } else {
                for (int i = 0; i < n - 1; i++) {
                    arr[i] = arr[i+1];
                }
                n--;
                std::cout <<"Element deleted!\n";
            }
        }

        else if (choice == 5) {
            if (n == 0) {
                std::cout <<"Array is empty!\n";
                continue;
            } else {
                n--;
                std::cout <<"Element deleted!\n";
            }
        }

        else if (choice == 6) {
            if (n == 0) {
                std::cout <<"Array is empty!\n";
                continue;
            } else {
                std::cout <<"Enter position to delete an element : ";
                std::cin >>pos;

                if (pos < 0 || pos >= n) {
                    std::cout <<"Invalid postion!\n";
                    continue;
                } else {
                    for (int i = pos; i < n - 1; i++) {
                        arr[i] = arr[i+1];
                    }
                    n--;
                    std::cout <<"Element deleted!\n";
                }
            }
        }

        else if (choice == 7) {
            if (n == 0) {
                std::cout <<"Array is empty!\n";
                continue;
            } else {
                std::cout <<"Array : ";
                for (int i = 0; i < n; i++) {
                    std::cout <<arr[i]<<" | ";
                }
                std::cout <<"\n";
            }
        }

        else if (choice == 8) {
            std::cout <<"Program Exited Sucessfully!";
        }

        else {
            std::cout <<"Invalid choice!\n";
        }

    } while (choice != 8);

    return 0;
}
