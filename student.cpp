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
void STUDENT::setfname(string first)
{
        fname = first;
}
void STUDENT::setlname(string last)
{
        lname = last;
}
void STUDENT::setCGPA(float cgpa)
{
        CGPA = cgpa;
}
void STUDENT::setscore(int score)
{
        SCORE = score;
}
void STUDENT::setID(int id)
{
        ID = id;
}
//Below are the accessor functions for the Student class
string STUDENT::getfname()
{
        return(fname);
}
string STUDENT::getlname()
{
        return(lname);
}
float STUDENT::getCGPA()
{
        return(CGPA);
}
int STUDENT::getscore()
{
        reutrn(SCORE);
}
int STUDENT::getID()
{
        return(ID);
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
        totalscore = read + write + listen + speak;
}
//Below are the mutator functions for the ToeflScore class
void ToeflScore::setreading(int read)
{
        reading = read;
}
void ToeflScore::setwriting(int write)
{
        writing = write;
}
void ToeflScore::setlistening(int listen)
{
        listening = listen;
}
void ToeflScore::setspeaking(int speak)
{
        speaking = speak;
}
//This sets the sum of all of the scores in a ToeflScore object
void ToeflScore::settotalscore()
{
        totalscore = reading + writing + listening + speaking;
}
//Below are the accessor functions for the ToeflScore class
int ToeflScore::getreading()
{
        return(reading);
}
int ToeflScore::getwriting()
{
        return(writing);
}
int ToeflScore::getlistening()
{
        return(listening);
}
int ToeflScore::getspeaking()
{
        return(speaking);
}
int ToeflScore::gettotalscore()
{
        return(totalscore);
}
//Constructor for the DomesticStudent class
DomesticStudent::DomesticStudent(string first, string last, float cgpa, int score, int id, string pv):
        STUDENT(first, last, cgpa, score, id)
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
