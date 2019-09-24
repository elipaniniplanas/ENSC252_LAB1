//student.cpp to implement your classes
#include "student.hpp"
#include <iostream>

//Student constructor
STUDENT::STUDENT(string first, string last, float cgpa, int score, int id)
{
        if(cgpa > 4.3 || cgpa < 0)
        {
                cout<<"sorry, but your CGPA is invalid";

        }
        if(score < 0 || score > 100)
        {
                cout<<"sorry, but your research score is invalid";

        }
        fname = first;
        lname = last;
        CGPA = cgpa;
        SCORE = score;
        ID = id;
}
//Below are the mutator funtions for the Student class
STUDENT::setfname(string first)
{
        fname = first;
}
STUDENT::setlname(string last)
{
        lname = last;
}
STUDENT::setCGPA(float cgpa)
{
        CGPA = cgpa;
}
STUDENT::setscore(int score)
{
        SCORE = score;
}
STUDENT::setID(int id)
{
        ID = id;
}
//ToeflScore constructor
ToeflScore::ToeflScore(int read, int write, int listen, int speak)
{
        if(read <0 || read > 30)
        {
                cout << "sorry, your reading toeflScore is invalid";

        }

        if(write <0 || write > 30)
        {
                cout << "sorry, your writing toeflScore is invalid";

        }

        if(listen <0 || listen > 30)
        {
                cout << "sorry, your listening toeflScore is invalid";

        }

        if(speak <0 || speak > 30)
        {
                cout << "sorry, your speaking toeflScore is invalid";

        }
        reading = read;
        writing = write;
        listening = listen;
        speaking = speak;
}
//Below are the mutator functions for the ToeflScore class
void setreading(int read)
{
        reading = read;
}
void setwriting(int write)
{
        writing = write;
}
void setlistening(int listen)
{
        listening = listen;
}
void setspeaking(int speak)
{
        speaking = speak;
}
//This function returns the sum of all of the scores in a ToeflScore object
int ToeflScore::totalscore(int read, int write, int listen, int speak)
{
        int total;
        total = read + write + listen + speak;
        return total;
}

DomesticStudent::DomesticStudent(string first, string last, float cgpa, int score, int id, string pv):
        STUDENT( first, last, cgpa, score, id)
{
        province = pv;
}
//Mutator function for DomesticStudent, it inherits all of the mutator functions in its parent class Student
void DomesticStudent::setprovince(string pv)
{
        province = pv;
}

InternationalStudent::InternationalStudent(string first, string last, float cgpa, int score, int id, string co, int toefl):
        STUDENT( first, last, cgpa, score, id)
{
        country = co;
        TOEFL = toefl;
}
