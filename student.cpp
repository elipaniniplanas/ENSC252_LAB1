//student.cpp to implement your classes
#include "student.hpp"
#include <iostream>

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
STUDENT::setfname(string first)
{
        fname = first;
}
STUDENT::setfname(string first)
{
        fname = first;
}
ToeflScore::ToeflScore(int read, int write, int listen, int speak)
{
        if(read <0 || read > 30.2)
        {
                cout << "sorry, your reading toeflScore is invalid";

        }

        if(write <0 || write > 30.2)
        {
                cout << "sorry, your writing toeflScore is invalid";

        }

        if(listen <0 || listen > 30.2)
        {
                cout << "sorry, your listening toeflScore is invalid";

        }

        if(speak <0 || speak > 30.2)
        {
                cout << "sorry, your speaking toeflScore is invalid";

        }



        reading = read;
        writing = write;
        listening = listen;
        speaking = speak;
}
int ToeflScore::totalscore(int read, int write, int listen, int speak)
{
        int total;
        total = read + write + listen + speak;
        return total;
}

DomesticStudent::DomesticStudent(string first, string last, float cgpa, int score, int id, string pv):
        STUDENT( first, last, cgpa, score, id)
{
/*      if(cgpa > 4.3 || cgpa < 0)
        {
                cout<<"sorry, but your CGPA is invalid";
                return 0;
        }
        if(score < 0 || score > 100)
        {
                cout<<"sorry, but your research score is invalid";
                return 0;
        }
        fname = first;
        lname = last;
        CGPA = cgpa;
        CGPA = cgpa;
        SCORE = score;
        ID = id;
        province = pv;
*/
}

InternationalStudent::InternationalStudent(string first, string last, float cgpa, int score, int id, string co, int toefl):
        STUDENT( first, last, cgpa, score, id)
{
/*      if(cgpa > 4.3 || cgpa < 0)
        {
                cout<<"sorry, but your CGPA is invalid";
                return 0;
        }
        if(score < 0 || score > 100)
        {
                cout<<"sorry, but your research score is invalid";
                return 0;
        }
        fname = first;
        lname = last;
        CGPA = cgpa;
        CGPA = cgpa;
        SCORE = score;
        ID = id;
        country = co;
        TOEFL = toefl;*/
}
