#include <iostream>

int arr[10];
int n = 0;
int pos;
int value;

void insertBegin () {
    if (n > 10) {
        std::cout <<"Array size cannot exceed 10!";
        return;
    } else {
        if (n == 10) {
            std::cout <<"Array is full!";
            return;
        } else {
            std::cout <<"Enter value at beginning : ";
            std::cin >>value;
            for (int i = n - 1; i >= 0; i--) {
                arr[i+1] = arr[i];
            }
            arr[0] = value;
            n++;
            std::cout <<"Element inserted!\n";
        }
    }
}

void insertEnd () {
    if (n > 10) {
        std::cout <<"Array size cannot exceed 10!";
        return;
    } else {
        if (n == 10) {
            std::cout <<"Array is full!";
            return;
        } else {
            std::cout<<"Enter value to insert at end : ";
            std::cin >>value;
            arr[n] = value;
            n++;
            std::cout <<"Element inserted!\n";
        }
    }
}

void insertPosition () {
    std::cout <<"Enter postion to insert element : ";
    std::cin >>pos;

    if (pos < 0 || pos > n) {
        std::cout <<"Invalid position!\n";
        return;
    } else {
        if (n > 10) {
            std::cout <<"Array size cannot exceed 20!\n";
            return;
        } else {
            std::cout <<"Enter value : ";
            std::cin >>value;
            for (int i = n - 1; i >= pos; i--) {
                arr[i+1] = arr[i];
            }
            arr[pos] = value;
            n++;
            std::cout <<"Element inserted!\n";
        }
    }
}

void deleteBegin () {
    if (n == 0) {
        std::cout <<"Array is empty!\n";
        return;
    } else {
        for (int i = 0; i < n - 1; i++) {
            arr[i] = arr[i+1];
        }
        n--;
        std::cout <<"Element deleted!\n";
    } 
}

void deleteEnd () {
    if (n == 0) {
        std::cout <<"Array is empty!\n";
        return;
    } else {
        n--;
        std::cout <<"Element deleted!\n";
    }
}

void deletePosition () {
    if (n == 0) {
        std::cout <<"Array is empty!\n";
        return;
    } else {
        std::cout <<"Enter position to delete element : ";
        std::cin >>pos;
        if (pos < 0 || pos >= n) {
            std::cout <<"Invalid position!\n";
            return;
        } else {
            for (int i = pos; i < n - 1; i++) {
                arr[i] = arr[i+1];
            }
            n--;
            std::cout <<"Element deleted!\n";
        }
    }
}

void display () {
    if (n == 0) {
        std::cout <<"Array is empty!\n";
        return;
    } else {
        std::cout <<"Array : ";
        for (int i = 0; i < n; i++) {
            std::cout <<arr[i]<<" | ";
        }
        std::cout <<"\n";
    }
}

int main () {
    int choice;
    do {
        std::cout <<"\n--- |Array Operations| ---\n";
        std::cout <<"[1].Insert at beginning\n";
        std::cout <<"[2].Insert at ending\n";
        std::cout <<"[3].Insert at position\n";
        std::cout <<"[4].Delete at beginning\n";
        std::cout <<"[5].Delete at ending\n";
        std::cout <<"[6].Delete at position\n";
        std::cout <<"[7].Display Array\n";
        std::cout <<"[8].Exit\n";
        std::cout <<"Enter choice (1 - 8) : ";
        std::cin >>choice;

        switch (choice) {
            case 1: insertBegin();
            break;

            case 2: insertEnd();
            break;

            case 3: insertPosition();
            break;

            case 4: deleteBegin();
            break;

            case 5: deleteEnd();
            break;

            case 6: deletePosition();
            break;

            case 7: display();
            break;

            case 8: std::cout <<"Program Exited Sucessfully!";
            break;

            default: std::cout <<"Invalid choice!\n";
            break;
        }

    } while (choice != 8);

    return 0;
}
