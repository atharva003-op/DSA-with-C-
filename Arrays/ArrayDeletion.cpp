#include <iostream>

int main () {
    int arr[10];
    int n;

    std::cout <<"Enter number of elements : ";
    std::cin >>n;

    if (n > 10 || n < 0) {
        std::cout <<"Invalid!";
        return 0;
    } else {
        if (n == 0) {
            std::cout <<"Array is empty!";
            return 0;
        } else {
            std::cout <<"Enter elements : \n";
            for (int i = 0; i < n; i++) {
                std::cout <<"Enter element "<<i+1<<" : ";
                std::cin >>arr[i];
            }
        }
    }

    std::cout <<"\nArray : ";
    for (int i = 0; i < n; i++) {
        std::cout <<arr[i]<<" | ";
    }

    //Delete beginning
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i+1];
    }
    n--;

    //Delete end
    n--;


    std::cout <<"\nUpdated Array : ";
    for (int i = 0; i < n; i++) {
        std::cout <<arr[i]<<" | ";
    }

    //Delete position
    int pos;
    std::cout <<"\nEnter position to delete : ";
    std::cin >>pos;

    if (pos < 0 || pos > n) {
        std::cout <<"Invalid position!";
        return 0;
    } else {
        for (int i = pos; i < n - 1; i++) {
            arr[i] = arr[i+1];
        }
        n--;
    }

    //Updated array
    std::cout <<"\nUpdated Array : ";
    for (int i = 0; i < n; i++) {
        std::cout <<arr[i]<<" | ";
    }

    return 0;
}
