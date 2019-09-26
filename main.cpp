//main.cpp, put your driver code here, 
//you can manipulate your class objects here
#include <iostream> //cin and cout
#include <fstream> //file processing
#include <sstream> //formatted string processing
#include <cstdlib> //atof and atoi
#include "student.hpp"

/*I provide example code here to help you read the input
 *data from a file, so that you can focus on creating
 *and manipulating classes and objects
 */
int main(){
  //Read the domestic-stu.txt file and exit if failed
  string line; //Used to retrieve the line in the files
  DomesticStudent Dstudent; // Constructed a DomesticStudent object
  InternationalStudent Istudent; // Constructed an InternationalStudent object
  //accessing the domestic-stu.txt
  ifstream domesticFile("domestic-stu.txt");
  if(!domesticFile.is_open()) {
    cout << "Unable to open file domestic-stu.txt" << endl;
    return -1;
  }

  getline(domesticFile, line);//this skips the first line about the file format
  //cout << "File format: " << line << endl;

  /*Keep reading the rest of the lines in domestic-stu.txt.
   *In the example code here, I will read each data separated
   *by a comma, and then print it out to the screen.
   *In your lab assignment 1, you should use these read data
   *to initialize your DomesticStudent object. Then you can
   *use get and set functions to manipulate your object, and
   *print the object content to the screen
   */
  int Dstu_count = 1;
  int ID_count = 20200000; // This int will increment each loop to generate a unique id for each student
  while( getline(domesticFile, line) ) {
    /*process each line, get each field separated by a comma.
     *We use istringstream to handle it.
     *Note in this example code here, we assume the file format
     *is perfect and do NOT handle error cases. We will leave the
     *error and exception handling of file format to Lab Assignment 4
     */
    istringstream ss(line);
    string firstName, lastName, province, s_cgpa, s_researchScore;
    float cgpa;
    int researchScore;
    //get firstName separated by comma
    getline(ss, firstName, ',');
    //get lastName separated by comma
    getline(ss, lastName, ',');
    //get province separated by comma
    getline(ss, province, ',');
    //get cpga separated by comma, and convert string to float
    getline(ss, s_cgpa, ',');
    cgpa = atof(s_cgpa.c_str());
    //get researchScore separated by comma, and convert it to int
    getline(ss, s_researchScore, ',');
    researchScore = atoi(s_researchScore.c_str());
	  
    Dstudent.setID(ID_count);
     // Set all data to the Istudent object with mutator functions
    Dstudent.setfname(firstName);
    Dstudent.setlname(lastName);
    Dstudent.setCGPA(cgpa);
    Dstudent.setscore(researchScore);
    Dstudent.setID(ID_count);
    Dstudent.setprovince(province);
	

    //print the student info to the screen  
    cout << "Domestic student " << Dstu_count << " " << Dstudent.getfname() << " " 
	 << Dstudent.getlname() << " from " << Dstudent.getprovince() << " province has cgpa of "
	 << Dstudent.getCGPA() << ", and research score of " << Dstudent.getscore() << ", the assigned ID is " << Dstudent.getID() << endl;    

    Dstu_count++;
    ID_count++;
  }
  
  //accessing the international-stu.txt
  ifstream internationalFile("international-stu.txt");
  if(!internationalFile.is_open()) {
    cout << "Unable to open file international-stu.txt" << endl;
    return -1;
  }
	
	
	
	
	
  getline(internationalFile, line);//this skips the first line about the file format
  int Istu_count = 1;
  while( getline(internationalFile, line) ) {
    /*process each line, get each field separated by a comma.
     *We use istringstream to handle it.
     *Note in this example code here, we assume the file format
     *is perfect and do NOT handle error cases. We will leave the
     *error and exception handling of file format to Lab Assignment 4
     */
    istringstream ss(line);
    string firstName, lastName, s_cgpa, s_researchScore, country, s_read, s_listen, s_speak, s_write;
    float cgpa;
    int researchScore, read, listen, speak, write;
    //get firstName separated by comma
    getline(ss, firstName, ',');
    //get lastName separated by comma
    getline(ss, lastName, ',');
    //get country separated by comma
    getline(ss, country, ',');
    //get cpga separated by comma, and convert string to float
    getline(ss, s_cgpa, ',');
    cgpa = atof(s_cgpa.c_str());
    //get researchScore separated by comma, and convert it to int
    getline(ss, s_researchScore, ',');
    researchScore = atoi(s_researchScore.c_str());
	//get toeflscores, each seperated by commas, and convert each in to int
	getline(ss, s_read, ',');
    read = atoi(s_read.c_str());
	getline(ss, s_listen, ',');
    listen = atoi(s_listen.c_str());
	getline(ss, s_speak, ',');
    speak = atoi(s_speak.c_str());
	getline(ss, s_write, ',');
    write = atoi(s_write.c_str());
    // Set all data to the Istudent object with mutator functions
    Istudent.setfname(firstName);
    Istudent.setlname(lastName);
    Istudent.setCGPA(cgpa);
    Istudent.setscore(researchScore);
    Istudent.setID(ID_count);
    Istudent.setcountry(country);
    Istudent.settoefl(read,write,listen,speak);
	
    Istudent.setID(ID_count);
    //print the student info to the screen  
    cout << "International student " << Istu_count << " " << Istudent.getfname() << " " 
	 << Istudent.getlname() << " from " << Istudent.getcountry() << " country has cgpa of "
	 << Istudent.getCGPA() << ", and research score of " << Istudent.getscore() 
	    << ", the assigned ID is " << Istudent.getID() 
	    << ", their toefl scores are: reading " << Istudent.gettoeflread() << ", writing "<< Istudent.gettoeflwrite()<< ", listening "<< Istudent.gettoefllisten() << ", speaking " << Istudent.gettoeflspeak()
	    << ", and their total toefl score is " << Istudent.gettotal() <<endl;                        

    Istu_count++;
    ID_count++;
  }

  //close your file
  domesticFile.close();

  return 0;
}
