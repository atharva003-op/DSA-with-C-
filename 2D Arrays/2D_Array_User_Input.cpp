#include <iostream>

int main () {
    int arr[10][10];
    int rows, columns;

    std::cout <<"Enter number of rows : ";
    std::cin >>rows;

    std::cout <<"Enter number of columns : ";
    std::cin >>columns;

    if (rows > 10 || columns > 10) {
        std::cout <<"Invalid size\n";
        return 0;
    } else {
        std::cout <<"Enter matrix : \n";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                std::cin >>arr[i][j];
            }
        }
    }
    

    std::cout <<"Array : \n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            std::cout <<arr[i][j]<<" ";
        }
        std::cout <<"\n";
    }

}
