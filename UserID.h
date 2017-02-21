/*
*   @author:   Ellie Peterson
*   @version: 0.0.1
*   Project:  Autotester for wecounsel auto testing with Json API
*   Purpose:  The goal of this application is to automate user testing on the WeCounsel application
*
*/

#ifndef __UserID_H_INCLUDED__
#define __UserID_H_INCLUDED__

#include <string> //  std::string


class UserID {
  public:

    /**
    *   Constructor
    *   Constructs a new UUID from the given inputs and the current time
    *   @param: string user_domain - holds the domain to test on
    *   @param: string test_type - holds the type of test being created
    *   @param: string user_type - holds the user type i.e. Provider, Client, or Admin
    */
    UserID(std::string user_domain, std::string test_type, std::string user_type);
    
    /**
    *   Constructor
    *   Constructs a new UUID from the uuid passed to the Constructor
    *   @param: uuid is passed to constructor
    */
    UserID(std::string uuid);
   
    /**
    *   Constructor
    *   Constructs a new UUID from the uuid passed to the constructor
    *   @param: uuid is passed to the constructor
    */
    UserID(unsigned long uuid);
    
    /**
    *   Copy Constructor
    *   Constructs a new UUID from the given inputs and the current time
    *   @param: string user_domain - holds the domain to test on
    *   @param: string test_type - holds the type of test being created
    *   @param: string user_type - holds the user type i.e. Provider, Client, or Admin
    */
    UserID(const UserID &obj);
    
    /**
    *   Default Destructor
    *   destroys the object created by a constructor
    */
    ~UserID();
    
    /**
    *   Getter for the uuid
    *   @return string representing the uuid. Returned in a "readable format" 
    */
    std::string getIDasString();

    /**
    *   Getter for created uuid. 
    *   @return unsigned long integer holding the uuid
    */
    unsigned long getIDasLong();

    void createFromID();
    
  private:
    std::string m_domain;
    std::string m_type;
    std::string m_test;
    std::string m_time;
    unsigned long m_id;

    /**
    *   Generates a new UUID from the given inputs and the current time
    *   range: 00000000 - FFFFFFFF ; 0000 0000 0000 0000  0000 0000 0000 0000 - 1111 1111 1111 1111  1111 1111 1111 1111
    *                               | a7   a6   a5   a4    a3   a2   a1   a0 |-| a7   a6   a5   a4    a3   a2   a1   a0 |
    *   a7-a6: represents domain
    *   a5-a4: represents user type
    *   a3-a2: represents test type
    *   a1-a0: represents time at creation
    *   
    */
    void generateNewUserID();
}

#endif