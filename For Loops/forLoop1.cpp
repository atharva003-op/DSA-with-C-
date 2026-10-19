#include <iostream>

int main () {
    int n;
    std::cout <<"Enter how many elements to insert:? ";
    std::cin >>n;

    int arr[n];

    std::cout <<"Enter elements below : \n";
    for (int i = 0; i < n; i++) {
        std::cout <<"Enter element "<<i+1<<" : ";
        std::cin >>arr[i];
    }

    std::cout <<"\nElements : ";
    for (int i = 0; i < n; i++) {
        std::cout <<arr[i]<<" | ";
    }
}
