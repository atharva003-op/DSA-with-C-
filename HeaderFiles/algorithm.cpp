#include <iostream>
#include <algorithm>

int main() {
    int n;

    std::cout <<"Enter number of elements to insert : ";
    std::cin >>n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        std::cout <<"Enter element "<<i + 1<<" : ";
        std::cin >>arr[i];
    }

    std::cout <<"\nArray : ";
    for (int i = 0; i < n; i++) {
        std::cout <<arr[i]<<" ";
    }

    std::cout <<"\nSorted Array : ";
    std::sort (arr, arr + n);

    for (int i = 0; i < n; i++) {
        std::cout <<arr[i]<<" ";
    }

    std::cout <<"\nReverse Array : ";
    std::reverse (arr, arr + n);

    for (int i = 0; i < n; i++) {
        std::cout <<arr[i]<<" ";
    }

    return 0;
}
