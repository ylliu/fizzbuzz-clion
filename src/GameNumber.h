//
// Created by youlong on 2021/9/8.
//

#ifndef FIZZBUZZ_GAME2_GAMENUMBER_H
#define FIZZBUZZ_GAME2_GAMENUMBER_H


class GameNumber {

public:

    GameNumber(int number);

    std::string toString();

private:
    int number;

    bool isRelatedTo(int i) const;

    bool isDivisibleBy(int i) const;

    bool contains(int i) const;
};


#endif //FIZZBUZZ_GAME2_GAMENUMBER_H
