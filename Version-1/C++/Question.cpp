#include "Question.h"
#include <iostream>

// static variable definitions
int Question::nQuestion = 0;
int Question::nCorrect = 0;

void Question::check() {
    nQuestion++;
    std::string answer = ask();

    if (answer == correctAnswer) {
        std::cout << "Correct Answer!\n";
        nCorrect++;
    } else {
        std::cout << "Incorrect. The correct answer is A\n";
    }
}

void Question::showResults() {
    std::count << nCorrect << " Correct out of "
	           << nQuestion << " question\n";
}
