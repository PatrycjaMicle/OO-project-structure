# Quiz in C++, created with classes and file stream

Quiz with sample questions about C++.

Simple structure base for an object oriented project.

## Instructions

You can find the main program in `main.cpp`.

The main function read all questions from the `quiz.txt` text file.

I used the `fstream` library from C++ to read the questions from this file.
The function reading the file runs only through needed lines. 

So if you want to change the structure of questions and answers you need to rewrite void Question::read() and update it.
Changing the structure of the text file without changing the reading function will lead to errors.

<p align="center">
    <img src="https://github.com/PatrycjaMicle/object-oriented-quiz/blob/main/IMAGES/Screenshot3.jpg?raw=true" alt="screenshot" />
</p>

The question class will create an array.
Every question, get 3 methods read();ask();checkAnswer(). 
Just use them to set the quiz together -> see more in main.cpp


## Overview
<p align="center">
    <img src="https://github.com/PatrycjaMicle/object-oriented-quiz/blob/main/IMAGES/screenshot-quiz.jpg?raw=true" alt="screenshot" />
</p>

## Used technologies
C++

