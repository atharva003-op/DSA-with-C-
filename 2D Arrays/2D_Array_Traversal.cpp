#include <iostream>

int main () {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    //Row traversal
    std::cout <<"Row Traversal : \n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout <<arr[i][j] <<" ";
        }
        std::cout <<"\n";
    }

    std::cout <<"\nColumn Traversal : \n";
    //Column traversal
    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < 3; i++) {
            std::cout <<arr[i][j]<<" ";
        }
        std::cout <<"\n";
    }
}
