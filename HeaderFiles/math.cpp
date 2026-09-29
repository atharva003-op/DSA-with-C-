#include <iostream>
#include <cmath>

int main() {
    int a,b;

    std::cout <<"Enter a number : ";
    std::cin >>a;
    std::cout <<"Enter power number : ";
    std::cin >>b;

    std::cout <<"Power : "<<pow(a, b);

    int squareRoot;

    std::cout <<"\nEnter a number : ";
    std::cin >>squareRoot;

    std::cout <<"The square root of "<<squareRoot<<" : "<<sqrt(squareRoot);

    return 0;
}
