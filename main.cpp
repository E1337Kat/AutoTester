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

using namespace std;

const string EMAILPOST = "@wecounsel.com";  //const ending of all testing email addresses
vector<User> users = NULL;
vector<string> input_responses = NULL;
// const char data[]="this is what we post to the silly web server";
 
// struct WriteThis {
//   const char *readptr;
//   long sizeleft;
// };
 
// static size_t read_callback(void *ptr, size_t size, size_t nmemb, void *userp)
// {
//   struct WriteThis *writ = (struct WriteThis *)userp;
 
//   if(size*nmemb < 1)
//     return 0;
 
//   if(writ->sizeleft) {
//     *(char *)ptr = pooh->readptr[0]; /* copy one single byte */ 
//     writ->readptr++;                 /* advance pointer */ 
//     writ->sizeleft--;                /* less data left */ 
//     return 1;                        /* we return 1 byte at a time! */ 
//   }
 
//   return 0;                          /* no more data left to deliver */ 
// }


/* START MAIN CLASS */
int main(int argc, char* argv) {
  //@TODO Check to see if a file exists(on DB) 
      //that contains user objects, if so load into array
  /*
  if (file exists on DB) {
    loadUsersintoVector();

  }
  
  */
  printWelcome();
  printMenu();
  string option_choice;
  cin >> option_choice;
  while (option_choice != ("3" || "q" || "quit") ){
    if (1) {
      input_responses = NULL;
      cout << "Enter new user information!" << endl;
      input_responses = inputPrompt();
      buildEmail(input_responses);
      //POST_TO_DB
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
  cout << "Currently, all created users are created under the elliep@wecounsel.com address, future development my change this" << endl;
  cout << "thoughts are either to your email base(i.e. austinm OR haleye OR carolynm), or have a general tester email for all to use." << endl;
  cout << "Thanks for using! :)" << endl;
}

/*  
*   name: printMenu
*   desc: print menu for options
*/
void printMenu () {
  cout << "OPTIONS" << endl;
  cout << "\"1\" for new user" << endl;
  cout << "\"2\" to recall last created user[BROKEN]" << endl;
  cout << "\"3\" or \'q\' or \"quit\" to quit app" << endl;

}

/*  
*   name: inputPrompt
*   desc: print and recieve input
*   @return: vector<string> holds input
*/
vector<string> inputPrompt() {
  input_responses = new vector<string>;
  string in;

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