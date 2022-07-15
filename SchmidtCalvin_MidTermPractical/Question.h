#pragma once
#include <string>

//This class handles questions that will be asked to the user
//It contains a string for the prompt, a string array for the possible answers, and an int that tells which answer is correct
//Calvin Schmidt (7/15/22)

class Question
{
private:
	std::string Prompt;
	std::string* Answers;
	int correctAnswer;
public:
	Question();
	~Question();
	void DisplayQuestion();
	void GetResponse();
	void AddAnswer(int slot, std::string ans);
	void SetPrompt(std::string prom);
	void SetAnswer(int correct);
};

