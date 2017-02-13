/*
*   Author:   Ellie Peterson
*   Project:  Autotester for wecounsel auto testing with Json API
*   Purpose:  The goal of this application is to automate user testing on the WeCounsel application
*
*
*
*
*/

#ifndef __UserID_H_INCLUDED__
#define __UserID_H_INCLUDED__

#include <string>

class UserID {
  public:
    UserID(string user_domain, string user_type, string test_type);
    UserID(const UserID &obj);
    ~UserID();
    
    string getIDasString();
    unsigned long getIDasLong();
    
  private:
    String domain;
    String type;
    String test;
    unsigned long id;

    void generateNewUserID();
}

#endif