#include <iostream>

int main () {
    int arr[20];
    int n;
    int pos;
    int value;
    int value1;
    int value2;

    std::cout <<"Enter number of elements to enter : ";
    std::cin >>n;

    if (n > 20) {
        std::cout <<"Cannot insert more then 20 element!";
        return 0;
    } else {
        if (n == 20) {
            std::cout <<"Array is full cannot insert more elements!";
            return 0;
        } else {
            std::cout <<"Enter elements : \n";
            for (int i = 0; i < n; i++) {
                std::cout <<"Enter element "<<i+1<<" : ";
                std::cin >>arr[i];
            }
        }
    }

    std::cout <<"Array : ";
    for (int i = 0; i < n; i++) {
        std::cout <<arr[i]<<" | ";
    }

    std::cout <<"\n--------------------\n";

    //Insert at beginning
    std::cout <<"Enter a value to insert at beginning : ";
    std::cin >>value1;

    for (int i = n - 1; i >= 0; i--) {
        arr[i+1] = arr[i];
    }
    arr[0] = value1;
    n++;

    //Insert at end
    std::cout <<"\nEnter value to insert at end : ";
    std::cin >>value;

    if (n == 10) {
        std::cout <<"Array is full!";
        return 0;
    }

    arr[n] = value;
    n++;

    //Insert at specific position
    std::cout <<"Enter position to insert an element : ";
    std::cin >>pos;

    if (pos < 0 || pos > n) {
        std::cout <<"Invalid position!\n";
    } else {
        std::cout <<"Enter value : ";
        std::cin >>value;
        for (int i = n - 1; i >= pos; i--) {
            arr[i+1] = arr[i];
        }
        arr[pos] = value;
        n++;
    }

    std::cout <<"Updated Array : ";
    for (int i = 0; i < n; i++) {
        std::cout <<arr[i]<<" | ";
    }

    return 0;
}
