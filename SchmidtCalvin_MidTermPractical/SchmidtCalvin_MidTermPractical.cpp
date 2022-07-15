#include <iostream>
#include "Factory.h"
#include "Question.h"

int main()
{
    Factory fact;

    Question* quest = fact.GenerateQuestion();
    quest->DisplayQuestion();
    quest->GetResponse();
}