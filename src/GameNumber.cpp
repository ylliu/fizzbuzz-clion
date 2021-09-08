//
// Created by youlong on 2021/9/8.
//

#include <string>
#include "GameNumber.h"

GameNumber::GameNumber(int number) {
    this->number = number;
}

std::string GameNumber::toString() {
    if (isRelatedTo(3) && isRelatedTo(5)) {
        return "FizzBuzz";
    }
    if (isRelatedTo(3)) {
        return "Fizz";
    }
    if (isRelatedTo(5)) {
        return "Buzz";
    }
    return std::to_string(number);
}

bool GameNumber::isRelatedTo(int i) const {
    return isDivisibleBy(i) || contains(i);
}

bool GameNumber::contains(int i) const {
    return std::to_string(number).find(std::to_string(i)) != std::string::npos;
}

bool GameNumber::isDivisibleBy(int i) const { return number % i == 0; }
