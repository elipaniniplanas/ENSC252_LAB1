//header file student.hpp to declare your classes
using namespace std; //use namespace std
#include <string> //you will have to use string in C++
#include <iostream>
#pragma once

class STUDENT
{
public:
        STUDENT(string first, string last, float cgpa, int score, int id);
        //This is the constructor function
        void setfname(string first);
        //This is the mutator funtion for first name
        void setlname(string last);
        //This is the mutator funtion for last name
        void setCGPA(float cgpa);
        //This is the mutator funtion for gpa
        void setscore(int score);
        //This is the mutator funtion for gpa
        void setID(int id);
        //This is the mutator funtion for id

private:
        string fname;//first name
        string lname;//last name
        float CGPA;//GPA
        int SCORE;//research score
        int ID;//id
};

class ToeflScore
{
public:
        ToeflScore(int read, int write , int listen, int speak);
        //Constructor function for ToeflScore
        void setreading(int read);
        //This is the mutator funtion for the reading score
        void setwriting(int write);
        //This is the mutator funtion for the writing score
        void setlistening(int listen);
        //This is the mutator funtion for the listening score
        void setspeaking(int speak);
        //This is the mutator funtion for the speaking score
        void settotalscore(int read, int write, int listn, int speak);
        //This function returns the sum of all of the scores in an object
private:
        int reading;
        int writing;
        int listening;
        int speaking;
        int totalscore;
};

class DomesticStudent : public STUDENT
{
public:
        DomesticStudent(string first, string last, float cgpa, int score, int id, string pv);
        //This is the constructor for the DomesticStudent class
        void setprovince(string pv);
        //This is the mutator function for the province
private:
        string province;
};


class InternationalStudent : public STUDENT
{
public:         
        InternationalStudent(string first, string last, float cgpa, int score, int id, string co, int toefl);
        void set(string first, string last, float cgpa, int score, int id, string co, int toefl);
private:
        string country;
        int TOEFL;
};
