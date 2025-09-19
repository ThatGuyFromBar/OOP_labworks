#include "../include/solution.h"
#include <string>
#include <cctype>
#include <iostream>

bool checkDayNumber(const std::string& day, int num) {

    if (day == "понедельник" && num == 12) {
        return true;
    } else if (day == "вторник" && num > 95) {
        return true;
    } else if (day == "среда" && num == 34) {
        return true;
    } else if (day == "четверг" && num == 0) {
        return true;
    } else if (day == "пятница" && num % 2 == 0) {
        return true;
    } else if (day == "суббота" && num == 56) {
        return true;
    } else if (day == "воскресенье" && abs(num) == 666) {
        return true;
    }
    return false;
}