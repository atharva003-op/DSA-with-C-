#include <iostream>

void insertBegin (int arr[], int &n) {
    int value;
    if (n > 10) {
        std::cout <<"Array size cannot exceed 10!";
        return;
    } else {
        if (n == 10) {
            std::cout <<"Array is full!\n";
            return;
        } else {
            std::cout <<"Enter value : ";
            std::cin >>value;
            for (int i = n - 1; i >= 0; i--) {
                arr[i+1] = arr[i];
            }
            arr[0] = value;
            n++;
            std::cout <<"Element Inserted!\n";
        }
    }
}

void insertEnd (int arr[], int &n) {
    int value;
    if (n > 10) {
        std::cout <<"Array size cannot exceed 10!\n";
        return;
    } else {
        if (n == 10) {
            std::cout <<"Array size cannot exceed 10!\n";
            return;
        } else {
            std::cout <<"Enter value : ";
            std::cin >>value;
            arr[n] = value;
            n++;
            std::cout <<"Element Inserted!\n";
        }
    }
}

void insertPosition (int arr[], int &n) {
    int value;
    int pos;
    std::cout <<"Enter postion to insert element : ";
    std::cin >>pos;

    if (pos < 0 || pos > n) {
        std::cout <<"Invalid position!\n";
        return;
    } else {
        if (n > 10) {
            std::cout <<"Array size cannot exceed 10!\n";
            return;
        } else {
            if (n == 10) {
                std::cout <<"Array size cannot exceed 10!\n";
                return;
            } else {
                std::cout <<"Enter value : ";
                std::cin >>value;
                for (int i = n - 1; i >= pos; i--) {
                    arr[i+1] = arr[i];
                }
                arr[pos] = value;
                n++;
                std::cout <<"Element Inserted!\n";
            }
        }
    }
}

void deleteBegin (int arr[], int &n) {
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

void deleteEnd (int arr[], int &n) {
    if (n == 0) {
        std::cout <<"Array is empty!\n";
        return;
    } else {
        n--;
        std::cout <<"Element deleted!\n";
    }
}

void deletePosition (int arr[], int &n) {
    int pos;
    if (n == 0) {
        std::cout <<"Array is empty!\n";
        return;
    } else {
        std::cout <<"Enter position to delete an element : ";
        std::cin >>pos;
        if (pos < 0 || pos >= n) {
            std::cout <<"Invalid choice!\n";
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

void display (int arr[] , int n) {
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

void update (int arr[], int n) {
    int pos;
    int value;

    if (n == 0) {
        std::cout <<"Array is empty!\n";
        return;
    } else {
        std::cout <<"Enter position to update element : ";
        std::cin>> pos;

        if (pos < 0 || pos >= n) {
            std::cout <<"Invalid position!\n";
            return;
        } else {
            std::cout <<"Enter new value : ";
            std::cin >>value;

            arr[pos] = value;
            std::cout <<"Element updated!\n";
        }
    }
}


int main () {
    int arr[10];
    int n = 0;
    int choice;
    char exit = 'y';

    do {
        std::cout <<"\n--- |Array Operations| ---\n";
        std::cout <<"[1].Insert at beginning\n";
        std::cout <<"[2].Insert at ending\n";
        std::cout <<"[3].Insert at position\n";
        std::cout <<"[4].Delete at beginning\n";
        std::cout <<"[5].Delete at ending\n";
        std::cout <<"[6].Delete at position\n";
        std::cout <<"[7].Display Array\n";
        std::cout <<"[8].Update element\n";
        std::cout <<"[9].Exit\n";
        std::cout <<"Enter choice (1 - 9) : ";
        std::cin >>choice;

        switch (choice) {
            case 1: insertBegin(arr, n);
            break;

            case 2: insertEnd(arr, n);
            break;

            case 3: insertPosition(arr, n);
            break;

            case 4: deleteBegin(arr, n);
            break;

            case 5: deleteEnd(arr, n);
            break;

            case 6: deletePosition(arr , n);
            break;

            case 7: display(arr, n);
            break;

            case 8: update(arr, n);
            break;

            case 9: 
            std::cout <<"Do you want to exit? (y/n) : ";
            std::cin >>exit;
            if (exit == 'y' || exit == 'Y') {
                std::cout <<"Program Exited Sucessfully!";
            } else {
                choice = 0;
            }
            break;
            
            default: std::cout <<"Invaild choice!\n";
            break;
        }

    } while (choice != 9);

    return 0;
}
