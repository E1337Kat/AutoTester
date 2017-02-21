/*
*   @author:   Ellie Peterson
*   @version: 0.0.1
*   Project:  Autotester for wecounsel auto testing with Json API
*   Purpose:  The goal of this application is to automate user testing on the WeCounsel application
*
*/

#ifndef __USER_H_INCLUDED__
#define __USER_H_INCLUDED__

#include <string>

/**
*
*
*
*/
class User {
  public: 
    
    /**
    *   Getter for the user object as a string. Returns as csv.
    *   @return string represents the user object in csv format.
    */
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

    /***GETTERS BELOW***/
    /**
    *   Getter for the user object as a string. Returns as csv.
    *   @return string represents the user object in csv format.
    */
    string getUserAsString();

    /**
    *   Getter for first name
    *   @return string represents user's first name.
    */
    string getFirstName();

    /**
    *   Getter for last name
    *   @return string represents user's last name
    */
    string getLastName();

    /**
    *   Getter for domain
    *   @return string represents domain to test on, i.e. "wcpp" or "metame" or "inpathy"
    */
    string getDomain();

    /**
    *   Getter for user type
    *   @return string represents user type, i.e. "Client" or "Provider"
    */
    string getUserType();

    /**
    *   Getter for the test type
    *   @return string represents test type, i.e. "billing" or "settings"
    */
    string getTestType();

    /**
    *   getter for email
    *   @return string represents "[identifier]@[domain]"
    */
    string getEmail();

    /***SETTERS BELOW***/
    /**
    *   Setter for first name
    *   @param name represents user's first name.
    */
    void setFirstName(string name);

    /**
    *   Setter for last name
    *   @param name represents user's last name
    */
    void setLastName(string name);

    /**
    *   Setter for domain
    *   @param domain represents domain to test on, i.e. "wcpp" or "metame" or "inpathy"
    */
    void setDomain(string domain);

    /**
    *   Setter for user type
    *   @param type represents user type, i.e. "Client" or "Provider"
    */
    void setUserType(string type);

    /**
    *   Setter for the test type
    *   @param type represents test type, i.e. "billing" or "settings"
    */
    void setTestType(string type);

    /**
    *   Setter for email
    *   @param email represents "[identifier]@[domain]"
    */
    void setEmail(string email);
    
  private:
    string m_first_name;
    string m_last_name;
    string m_domain;
    string m_user_type;
    string m_test_type;
    string m_email;
}

#endif
