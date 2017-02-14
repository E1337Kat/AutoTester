/*
*   Author:   Ellie Peterson
*   Project:  Autotester for wecounsel auto testing with Json API
*   Purpose:  The goal of this application is to automate user testing on the WeCounsel application
*
*
*
*
*/

#ifndef __USER_H_INCLUDED__
#define __USER_H_INCLUDED__

#include <string>

class User {
  public: 
    
    User();
    User(const User & obj);
    ~User();

    User(string first_name, 
          string last_name, 
          string domain, 
          string user_type, 
          string test_type, 
          string email);

    User(string domain, string user_type);

    string getUserAsString();
    string getFirstName();
    string getLastName();
    string getDomain();
    string getUserType();
    string getTestType();
    string getEmail();
    
    void setFirstName(string name);
    void setLastName(string name);
    void setDomain(string domain);
    void setUserType(string type);
    void setTestType(string type);
    void setEmail(string email);
    
  private:
    //@TODO
    string m_first_name;
    string m_last_name;
    string m_domain;
    string m_user_type;
    string m_test_type;
    string m_email;
}

#endif
