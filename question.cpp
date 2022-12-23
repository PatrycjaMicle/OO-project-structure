#include <iostream>
#include "question.h"
#include <fstream>
#include <cstdlib>

using namespace std;

void Question::read()
{
    fstream quest_file;
    quest_file.open("quiz.txt",ios::in);

    if(quest_file.good()==false)
    {
        cout<<"Error with opening the file."<<endl;
        exit(0);
    }

    int nr_start_line=(nr_question-1)*6+1;
    int nr_actual=1;
    string line;

    while(getline(quest_file,line))
    {
        if(nr_actual==nr_start_line) content=line;
        if(nr_actual==nr_start_line+1) a=line;
        if(nr_actual==nr_start_line+2) b=line;
        if(nr_actual==nr_start_line+3) c=line;
        if(nr_actual==nr_start_line+4) d=line;
        if(nr_actual==nr_start_line+5) right=line;
        nr_actual++;
    }

    quest_file.close();

}

void Question::ask()
{
    cout<<endl<<content<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<"--------------------"<<endl;
    cout<<endl<<"Answer: ";
    cin>>answer;
}

void Question::checkAnswer()
{
    if(answer==right)
    {
        point=1;
    }
    else point=0;
}




