#include "MultipleChoiceQuestion.h"
#include <iostream>
#include <algorithm>

MultipleChoiceQuestion::MultipleChoiceQuestion(
    const std::string& query,
    const std::string& a,
    const std::string& b,
    const std::string& c,
    const std::string& d,
    const std::string& e,
    const std::string& answer
) {
    question = query + "\n";
    question += "A. " + a + "\n";
    question += "B. " + b + "\n";
    question += "C. " + c + "\n";
    question += "D. " + d + "\n";
    question += "E. " + e + "\n";

    correctAnswer = answer;
    std::transform(correctAnswer.begin(),
		   correctAnswer.end(),
  		   correctAnswer.begin(),
		   ::toupper);
}

std::string MultipleChoiceQuestion::ask() {
    while (true) {
	std::cout << question;
	std::cout << "Your anser: ";

	std::string myAnswer;
	std::getline(std::cin, myAnswer);

	std::transform(myAnswer.begin(),
		       myAnswer.end(),
		       myAnswer.begin(),
		       ::toupper);

	if (myAnswer == "A" || myAnswer == "B" ||
	    myAnswer == "C" || myAnswer == "D" ||
	    myAnswer == "E") {
	    return myAnswer;
	} else {
	    std::cout << "Invalid answer. Please enter A, B, C, D or E.\n";
	}
}
 
