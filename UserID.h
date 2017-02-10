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

class UserID {
  public:
    UserID(String user_domain, String user_type, String test_type);
    UserID(const UserID &obj);
    ~UserID();
    
    String getIDasString();
    unsigned long getIDasLong();
    
  private:
    String domain;
    String type;
    String test;
    unsigned long id;

    void generateNewUserID();
}

#endif