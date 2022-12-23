#include <iostream>
#include "question.h"

using namespace std;

int main()
{

    Question q[10];
    int suma=0;
    for(int i=0;i<10;i++)
    {
        q[i].nr_question=i+1;
        q[i].read();
        q[i].ask();
        q[i].checkAnswer();
        suma+=q[i].point;
    }

    cout<<"THE END! YOUR POINTS: "<<suma;


    return 0;
}
