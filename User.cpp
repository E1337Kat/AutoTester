/*
*   Author:   Ellie Peterson
*   Project:  Autotester for wecounsel auto testing with Json API
*   Purpose:  The goal of this application is to automate user testing on the WeCounsel application
*
*
*
*
*/

#include "User.h"

User::User() {}
User::User(const User & obj) {}
User::~User() {}

User::User(string first_name, 
          string last_name, 
          string domain, 
          string user_type, 
          string test_type, 
          string email) {


}

User::User(string domain, string user_type) {}

string User::getUserAsString() {return "null";}
string User::getFirstName() {return "null";}
string User::getLastName() {return "null";}
string User::getDomain() {return "null";}
string User::getUserType() {return "null";}
string User::getTestType() {return "null";}
string User::getEmail() {return "null";}
    
void User::setFirstName(string name) {}
void User::setLastName(string name) {}
void User::setDomain(string domain) {}
void User::setUserType(string type) {}
void User::setTestType(string type) {}
void User::setEmail(string email) {}
