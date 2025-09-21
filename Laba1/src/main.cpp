#include "../include/solution.h"
#include <iostream>

int main() {
    std::string day;
    int number;
    
    std::cout << "Day of the week: ";
    std::cin >> day;
    
    std::cout << "Number: ";
    std::cin >> number;
    
    bool result = checkDayNumber(day, number);
    
    std::cout << "Result: " << (result ? "I am afraid" : "I am NOT afraid");
    
    return 0;
}