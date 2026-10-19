#include <iostream>
#include <string>
#include <limits>

int main () {
    int n;
    std::cout <<"Enter how many elements to insert:? ";
    std::cin >>n;

    std::string arr[n];

    std::cin.ignore(std::numeric_limits <std::streamsize>::max(), '\n');

    std::cout <<"Enter "<<n<<" names below : \n";
    for (int i = 0; i < n; i++) {
        std::cout <<"Enter name "<<i+1<<" : ";
        std::getline(std::cin, arr[i]);
    }

    std::cout <<"\n"<<n<<" Names : ";
    for (int i = 0; i < n; i++) {
        std::cout <<arr[i]<<" | ";
    }

    return 0;
}
