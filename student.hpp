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
        //This is the mutator function for first name
        void setlname(string last);
        //This is the mutator function for last name
        void setCGPA(float cgpa);
        //This is the mutator function for gpa
        void setscore(int score);
        //This is the mutator function for gpa
        void setID(int id);
        //This is the mutator function for id
        string getfname();
        //This is the accessor function for first name
        string getlname();
        //This is the accessor function for last name
        float getCGPA();
        //This is the accessor function for gpa
        int getscore();
        //This is the accessor function for gpa
        int getID();
        //This is the accessor function for id

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
        //This is the mutator function for the reading score
        void setwriting(int write);
        //This is the mutator function for the writing score
        void setlistening(int listen);
        //This is the mutator function for the listening score
        void setspeaking(int speak);
        //This is the mutator function for the speaking score
        void settotalscore();
        //This is the mutator function for the sum of all of the scores in an object
        int getreading();
        //This is the accessor function for the reading score
        int getwriting();
        //This is the accessor function for the writing score
        int getlistening();
        //This is the accessor function for the listening score
        int getspeaking();
        //This is the accessor function for the speaking score
        int gettotalscore();
        //This is the accessor function for the sum of all of the scores in an object

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
        string getprovince();
        //This is the accessor function for the province
private:
        string province;
};


class InternationalStudent : public STUDENT
{
public:         
        InternationalStudent(string first, string last, float cgpa, int score, int id, string co, ToeflScore toefl);
        //This is the constructor for the InternationalStudent class
        void setcountry(string co);
        //This is the mutator function for the country member
        void settoefl(ToeflScore toefl);
        //This is the mutator function for the toefl member
        string getcountry();
        //This is the accessor function for the country member
        ToeflScore gettoefl();
        //This is the accessor function for the toefl member
private:
        string country;
        ToeflScore TOEFL;
};
