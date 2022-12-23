#include <iostream>

using namespace std;

class Question
{
public:

    string content;
    string a,b,c,d;
    int nr_question;
    string right;
    string answer;
    int point;

    void read();  //read question
    void ask();    // ask the question
    void checkAnswer(); //check if the answer is right


};
