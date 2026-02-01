#ifndef MULTIPLECHOICEQUESTION_H
#define MULTIPLECHOICEQUESTION_H

#include "Question.h"

class MultipleChoiceQuestion : public Question {
public:
    MultipleChoiceQuestion(const std::string& query,
                           const std::string& a,
                           const std::string& b,
                           const std::string& c,
                           const std::string& d,
                           const std::string& e,
                           const std::string& answer);

    std::string ask() override;
};

#endif
