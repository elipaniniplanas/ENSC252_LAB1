//header file student.hpp to declare your classes
using namespace std; //use namespace std
#include <string> //you will have to use string in C++
#include <iostream>
#pragma once

//class for toefl score
class ToeflScore
{
public:
        ToeflScore(int read, int write, int listen, int speak);
        //Constructor function for ToeflScore
        ToeflScore();
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
//the private variables 
private:
        int reading; //reading scores
        int writing; //writing scores
        int listening; //listening scores
        int speaking; //speaking scores
        int totalscore; //addition of all the toefl scores 
};

class STUDENT
{
public:
        STUDENT(string first, string last, float cgpa, int score, int id);
        //This is the constructor function fro STUDENT
        STUDENT();
        //Other Constructor for STUDENT (blank inputs, sets 0 for all members)
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

//creating child class for domestic student within the STDUENT class
class DomesticStudent : public STUDENT
{
public:
        //Constructors
        DomesticStudent(string first, string last, float cgpa, int score, int id, string pv);
        //Other Constructor for Domesticstduent (blank inputs, sets 0 for all members)
        DomesticStudent();
        //Mutator functions for province
        void setprovince(string pv);
        //Accessor functions for province
        string getprovince();
private:
        string province;
};

//creating child class for international student within the STDUENT class
class InternationalStudent : public STUDENT
{
public:    
        //Constructors for InternationalStudent
        InternationalStudent(string first, string last, float cgpa, int score, int id, string co, int read, int write , int listen, int speak);
        //Other Constructor for InternationalStudent (blank inputs, sets 0 for all members)
        InternationalStudent();
        //Mutator functions for country
        void setcountry(string co);
        //Accessor functions country
        string getcountry(); 
        //gets toefl value from Toeflscore class
        void settoefl(int read, int write, int listen, int speak);
        //outputs toefl values and total
        int gettoeflread();
        int gettoeflwrite();
        int gettoefllisten();
        int gettoeflspeak();
        int gettotal();
        
private:
        string country;
        ToeflScore TOEFL;
};
