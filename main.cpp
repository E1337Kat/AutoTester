/*
*   Author:   Ellie Peterson
*   Project:  Autotester for wecounsel auto testing with Json API
*   Purpose:  The goal of this application is to automate user testing on the WeCounsel application
*
*
*
*
*/

//#include <curl/curl.h>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include "UserID.h"
#include "User.h"
#include "DatabaseHelper.h"

using namespace std;

const string EMAILPOST = "@wecounsel.com";  //const ending of all testing email addresses
vector<User> users = NULL;
vector<string> input_responses = NULL;


/* START MAIN CLASS */
/* 
*   function: initializes the program and sets the environment
*   @return int for status
*   @param argc count of arguments passed into program
*   @param argv array of arguments
*     
*     Possible flags:
        -startup, -s : First time start up(if used after first time start up, backs up all history and configuration stored locally and then runs as first time startup)
        -database, -d <options> [url] : Sets the database locations(multiple databases can be used)
          options:
          --new, --n 
          --add, --a
          --remove, -r
          
        -file, -f <options> [file] : Sets program to read history from file
          options:
          --csv, --c :indicates file is csv (DEFAULT)
          --ssv, --v :indicates file is svv
          --text, --t :indicates file is separated with spaces and newline chars
          --new, --n :indicates a file with that name is to be created in /AutoTester/*filename* 
        -output, -o <options> [file] : Sets program to output to file with db
          options:
          --csv, --c :indicates file to be csv (DEFAULT)
          --ssv, --v :indicates file to be svv
          --text, --t :indicates file to be separated with spaces and newline chars
        -local, -l : Sets program to run locally without using a database 
          *WARNING - This FLAG will require the -o option to be used. Without it, the default will take place, which is a csv named o.csv saved in the folder the program runs from*
        -GUI, -g : Starts AutoTester with GUI
        
* */
int main(int argc, char* argv) {
  
  //@TODO Check to see if a file exists(on DB) 
      //that contains user objects, if so load into array
  /*
  if (file exists on DB) {
    loadUsersintoVector();
  }
  
  */
  printWelcome();
  printMenu(1);
  string option_choice;
  cin >> option_choice;
  while (option_choice != ("3" || "q" || "quit") ){
    if ("1" || "\"1\"") { // if user inputs just 1, or "1" in quotes
      system.clear();
      cout << "Is this for a specific Test Case, or a general user?" << endl;
      printMenu(2);
      input_responses = NULL;
      cout << "Enter new user information!" << endl;
      input_responses = inputPrompt(1);
      string email = buildEmail(input_responses&);
      //POST_TO_DB(input_responses[0], input_responses[2])
    }
  }

  return 0;
}

/* START HELPER FUNCTIONS */

/*  
*   name: printWelcome
*   desc: print welcome on start up
*/
void printWelcome() {
  cout << "Copywrite Ellie Peterson 2017; source only available to approved employees of WeCounsel." << endl << endl << endl;
  cout << "Welcome to user gen for WeCounsel, ltd." << endl;
  cout << "The only required information is the issue you are testing, and the type of user to be testing on" << endl;
  cout << "With that, the program will do the rest, including building a Unique user id, first name, last name, and email" << endl;
  cout << "Currently, all created users are created under the elliep@wecounsel.com address, future development may change this" << endl;
  cout << "thoughts are either to your email base(i.e. austinm OR haleye OR carolynm), or have a general tester email for all to use." << endl;
  cout << "Thanks for using! :)" << endl;
}

/*  
*   name: printMenu
*   desc: print menu for options
*/
void printMenu (int choice) {
  if (choice == 1) {    
    cout << "OPTIONS" << endl;
    cout << "\"1\" for new user" << endl;
    cout << "\"2\" to recall last created user[BROKEN]" << endl;
    cout << "\"3\" or \'q\' or \"quit\" to quit app" << endl;
  } else if (choice == 2) {
    cout << "OPTIONS:" << endl;
    cout << "\"1\" for specific test case" << endl;
    cout << "\"2\" for general user" << endl;
  } else {
    cerr << "Error 0x00000001: invalid printMenu argument" << endl;
    //printStackTrace();
  }

}

/*  
*   name: inputPrompt
*   desc: print and recieve input
*   @return: vector<string> holds input
*/
vector<string> inputPrompt(int choice) {
  input_responses = new vector<string>;
  string in;

  if (choice == 1) {
    cout << "Domain to test on(for specific portal testing)" <, endl;
    cin >> in;
    input_responses.push_back(in);
    cout << "Test issue: " << endl;
    cin >> in;
    input_responses.push_back(in);
    cout << "User type: " << endl;
    cin >> in;
    input_responses.push_back(in);
    //cout << "Email base: " << endl;
    //cin >> in;
    //input_responses.push_back(in);
  } else if (choice == 2) {
    cout << "Domain to test on(for specific portal testing)" <, endl;
    cin >> in;
    input_responses.push_back(in);
    //cout << "Test issue: " << endl;
    //cin >> in;
    input_responses.push_back(in);
    cout << "User type: " << endl;
    cin >> in;
    input_responses.push_back(in);
    //cout << "Email base: " << endl;
    //cin >> in;
    //input_responses.push_back(in);
  } else {
    cerr << "Error 0x00000002: Invalid function call"
  }

  return input;
}

/*  
*   name: buildEmail
*   desc: builds email to POST to server
*   @return: string email - holds input
*   @param: vector<string>
*/
string buildEmail(vector<string> in) {
  //string email = in[3];
  string email = "elliep";

  UserID uuid = new UserID(in[0], in[1], in[2]);

  email = email + 
            "+" + 
            in[0] + 
            "." + 
            in[2] + 
            "." +
            in[1] +
            "." +
            uuid.getIDasString() +
            EMAILPOST;


  return email;
}

/*  
*   name: outputPrompt
*   desc: print output
*/
void outputPrompt() {

}

/*  
*   name: loadUsersintVector
*   desc: loads User objects from file into vector to search
*/
void loadUsersintoVector(/*file of User objects*/) {
  
}
