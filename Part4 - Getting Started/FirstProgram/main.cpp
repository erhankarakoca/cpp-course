#include <iostream>

int main()
{
    int favorite_number;
    std::cout <<"Enter your faorite number between 1 and 100: " ;
    
    std::cin >> favorite_number;
    
    std::cout << "That's great, that is my favorite number" << std::endl;
    std::cout <<"No really !! "<< favorite_number << " is my favorite number" << std::endl;
    return 0;
}