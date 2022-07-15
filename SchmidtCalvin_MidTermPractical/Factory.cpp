#include "Factory.h"
#include <time.h>

//This method is used to generate the question asked to the user
Question* Factory::GenerateQuestion() {
	srand(time(NULL));
	int question = (rand() % 4) + 1;
	Question* output = new Question();

	//Switches between the possible questions
	switch (question) {
	case 1:
		output->SetPrompt("How many bytes are in an integer");
		output->AddAnswer(0, "32");
		output->AddAnswer(1, "4");
		output->AddAnswer(2, "1");
		output->AddAnswer(3, "16");
		output->SetAnswer(2);
		break;
	case 2:
		output->SetPrompt("What year was the Nintendo Entertainment System released");
		output->AddAnswer(0, "1983");
		output->AddAnswer(1, "1984");
		output->AddAnswer(2, "1985");
		output->AddAnswer(3, "1986");
		output->SetAnswer(1);
		break;
	case 3:
		output->SetPrompt("How much storage was on the first home computer");
		output->AddAnswer(0, "2 Kb");
		output->AddAnswer(1, "8 Kb");
		output->AddAnswer(2, "4 Kb");
		output->AddAnswer(3, "16 Kb");
		output->SetAnswer(3);
		break;
	case 4:
		output->SetPrompt("((32/16) + 1 + (-3 + 4)) ^ 2");
		output->AddAnswer(0, "25");
		output->AddAnswer(1, "4");
		output->AddAnswer(2, "9");
		output->AddAnswer(3, "16");
		output->SetAnswer(4);
		break;
	}

	return output;
}