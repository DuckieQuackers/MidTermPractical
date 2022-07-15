#include "Question.h"
#include <iostream>

Question::Question() {
	Prompt = "";
	Answers = new std::string[4];
	correctAnswer = -1;
}

Question::~Question() {
	delete []Answers;
	delete this;
}

//Displays the question, followed by a list of the possible answers (7/15/22)
void Question::DisplayQuestion() {
	std::cout << Prompt + "?\n";
	for (int i = 0; i <= 3; i++) {
		std::cout << (i + 1);
		std::cout << ":\t" + Answers[i] + "\n";
	}
}

//Asks the user for the answer and checks if it is correct (7/15/22)
void Question::GetResponse() {
	int response;
	std::cout << "Your answer: ";
	std::cin >> response;

	if (response == correctAnswer)
		std::cout << "That answer is correct!";
	else
		std::cout << "Sorry, that answer is wrong";
}

//Lets other classes add questions to the array (7/15/22)
void Question::AddAnswer(int slot, std::string ans) {
	Answers[slot] = ans;
}

//Lets other classes set the prompt for the question (7/15/22)
void Question::SetPrompt(std::string prom) {
	Prompt = prom;
}

//Lets other classes set which answer is correct (7/15/22)
void Question::SetAnswer(int correct) {
	correctAnswer = correct;
}