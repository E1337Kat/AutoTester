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
#include <iostream>
#include <string>
#include <vector>
#include "UserID.h"

using namespace std;

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
  printWelcome();
  printMenu();
  string option_choice;
  cin >> option_choice;
  while (option_choice != ("3" || "q" || "quit") ){
    if ()
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
  vector<string> input = new vector<string>

  cout << "Test issue: " << endl;
  cin >> input[0];
  cout << "User type: " << endl;
  cin >> input[1];
  //cout << "Email base: " << endl;
  //cin >> input[2];

  return input;
}

/*  
*   name: buildEmail
*   desc: builds email to POST to server
*   @return: string email - holds input
*   @param: vector<string>
*/
string buildEmail(vector<string> in) {
  //string email = in[2];
  string email = "elliep";

  UserID uuid = new UserID(email, in[1], in[0])



  return email;
}

/*  
*   name: outputPrompt
*   desc: print output
*/
void outputPrompt() {
}
