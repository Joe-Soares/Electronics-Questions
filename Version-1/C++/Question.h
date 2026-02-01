#ifndef QUESTION_H
#define QUESTION_H

#include <string>

class Question {
protected:
    std::string question;
    std::string correctAnswer;

    static int nQuestion;
    static int nCorrect;

public:
    virtual ~Question() = default;

    // abstract method (pure virtual)
    virtual std::string ask() = 0;

    void check();
    static void showResults();

};

#endif
