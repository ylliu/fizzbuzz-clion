//
// Created by youlong on 2021/9/8.
//

#include <gtest/gtest.h>
#include "../src/GameNumber.h"

class GameNumberTest : public ::testing::Test {
    void SetUp() {

    }

    void TearDown() {

    }
};

TEST_F(GameNumberTest, should_say_1_when_raw_number_is_1) {
    GameNumber *gameNumber = new GameNumber(1);
    EXPECT_EQ("1", gameNumber->toString());
}


TEST_F(GameNumberTest, should_say_2_when_raw_number_is_2) {
    EXPECT_EQ("2", GameNumber(2).toString());
}


TEST_F(GameNumberTest, should_say_fizz_when_raw_number_is_3) {
    GameNumber *gameNumber = new GameNumber(3);
    EXPECT_EQ("Fizz", gameNumber->toString());
}


TEST_F(GameNumberTest, should_say_buzz_when_raw_number_is_5) {
    GameNumber *gameNumber = new GameNumber(5);
    EXPECT_EQ("Buzz", gameNumber->toString());
}


TEST_F(GameNumberTest, should_say_fizzbuzz_when_raw_number_is_15) {
    GameNumber *gameNumber = new GameNumber(15);
    EXPECT_EQ("FizzBuzz", gameNumber->toString());
}


TEST_F(GameNumberTest, should_say_fizz_when_raw_number_contains_3) {
    GameNumber *gameNumber = new GameNumber(13);
    EXPECT_EQ("Fizz", gameNumber->toString());
}


TEST_F(GameNumberTest, should_say_buzz_when_raw_number_contains_5) {
    GameNumber *gameNumber = new GameNumber(52);
    EXPECT_EQ("Buzz", gameNumber->toString());
}


TEST_F(GameNumberTest, should_say_fizzbuzz_when_raw_number_contains_5_and_3) {
    EXPECT_EQ("FizzBuzz", GameNumber(53).toString());
    EXPECT_EQ("FizzBuzz", GameNumber(35).toString());
}


TEST_F(GameNumberTest, should_say_fizzbuzz_when_raw_number_is_related_to_3_and_5) {
    EXPECT_EQ("FizzBuzz", GameNumber(53).toString());
    EXPECT_EQ("FizzBuzz", GameNumber(135).toString());
}