//header file student.hpp to declare your classes
using namespace std; //use namespace std
#include <string> //you will have to use string in C++
#include <iostream>
#pragma once

class ToeflScore
{
public:
        ToeflScore(int read, int write, int listen, int speak);
        //Constructor function for ToeflScore
        //ToeflScore();
        //Other Constructor for ToeflScore (blank inputs, sets 0 for all members)
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

class STUDENT
{
public:
        STUDENT(string first, string last, float cgpa, int score, int id);
        //This is the constructor function
        void setfname(string first);
        //This is the mutator function for first name (takes datatype string for input)
        void setlname(string last);
        //This is the mutator function for last name (takes datatype string for input)
        void setCGPA(float cgpa);
        //This is the mutator function for gpa (takes datatype float for input)
        void setscore(int score);
        //This is the mutator function for the research-score (takes datatype int for input)
        void setID(int id);
        //This is the mutator function for id (takes datatype int for input)
        string getfname();
        //This is the accessor function for first name (returns a string datatype)
        string getlname();
        //This is the accessor function for last name (returns a string datatype)
        float getCGPA();
        //This is the accessor function for gpa (returns a float datatype)
        int getscore();
        //This is the accessor function for gpa (returns an int datatype)
        int getID();
        //This is the accessor function for id (returns an int datatype)

private:
        string fname;//first name
        string lname;//last name
        float CGPA;//GPA
        int SCORE;//research score
        int ID;//id
        //the id value will be set in the main.cpp
};

class DomesticStudent : public STUDENT
{
public:
        DomesticStudent(string first, string last, float cgpa, int score, int id, string pv);
        //This is the constructor for the DomesticStudent class
        DomesticStudent();
        //This is the other constructor for the DomesticStudent class (blank input, sets 0 for all members)
        void setprovince(string pv);
        //This is the mutator function for the province
        string getprovince();
        //This is the accessor function for the province (returns a string datatype)
private:
        string province;
};


class InternationalStudent : public STUDENT
{
public:         
        InternationalStudent(string first, string last, float cgpa, int score, int id, string co, int read, int write , int listen, int speak);
        //This is the constructor for the InternationalStudent class
        InternationalStudent();
        ""
        void setcountry(string co);
        //This is the mutator function for the country member
        string getcountry();
        //This is the accessor function for the country member
        
private:
        string country;
        ToeflScore TOEFL{ToeflScore(0, 0, 0, 0)};
};
