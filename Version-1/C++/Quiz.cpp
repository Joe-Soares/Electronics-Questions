#include "MultipleChoiceQuestion.h"

int main() {
    std::string headQuestion0 =
	"The first Letter for the alphabet is:\n\n"
	"E\n"
	"D\n"
	"C\n"
	"B\n"
	"A\n";

    Question* question = new MultipleChoiceQuestion(
	headQuestion0,
	"D", "B", "C", "A", "E", "d"
    );

    question->check();
    Question::showResults();

    delete question;
    return 0;
}
