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

#include <string> //  std::string


class UserID {
  public:

    UserID(std::string user_domain, std::string test_type, std::string user_type);
    UserID(std::string uuid);
    UserID(unsigned long uuid);
    UserID(const UserID &obj);
    ~UserID();
    
    std::string getIDasString();
    unsigned long getIDasLong();

    void createFromID();
    
  private:
    std::string m_domain;
    std::string m_type;
    std::string m_test;
    std::string m_time;
    unsigned long m_id;

    void generateNewUserID();
}

#endif