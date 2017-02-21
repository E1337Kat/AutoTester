/*
*   @author:   Ellie Peterson
*   @version: 0.0.1
*   Project:  Autotester for wecounsel auto testing with Json API
*   Purpose:  The goal of this application is to automate user testing on the WeCounsel application
*
*/

#include "UserID.h"

#include <chrono>
#include <ctime>
#include <iostream>
#include <string>


using namespace std;


//PUBLIC
/**
*   Constructor
*   Constructs a new UUID from the given inputs and the current time
*   @param: string user_domain - holds the domain to test on
*   @param: string test_type - holds the type of test being created
*   @param: string user_type - holds the user type i.e. Provider, Client, or Admin
*/
UserID::UserID(string user_domain, string test_type, string user_type) {
    m_domain = user_domain;
    m_type = user_type;
    m_test = test_type;

}

/**
*   Constructor
*   Constructs a new UUID from the uuid passed to the Constructor
*   @param: uuid is passed to constructor
*/
UserID::UserID(string uuid) {
    unsigned long id = stol(uuid, nullptr, 16);
}

/**
*   Constructor
*   Constructs a new UUID from the uuid passed to the constructor
*   @param: uuid is passed to the constructor
*/
UserID::UserID(unsigned long uuid) {
    ;//@TODO Rework class to make possible to get input from uuid.
}

/**
*   Copy Constructor
*   Constructs a new UUID from the given inputs and the current time
*   @param: string user_domain - holds the domain to test on
*   @param: string test_type - holds the type of test being created
*   @param: string user_type - holds the user type i.e. Provider, Client, or Admin
*/
UserID::UserID(const UserID &obj) {
    m_domain = obj.m_domain;
    m_type = obj.m_type;
    m_test = obj.m_test;
    m_time = obj.m_time;
    m_id = obj.m_id;
}

/**
*   Default Destructor
*   destroys the object created by a constructor
*/
UserID::~UserID() {
    m_domain = NULL;
    m_type = NULL;
    m_test = NULL;
    m_time = NULL;
    m_id = NULL;
}

/**
*   Getter for the uuid
*   @return string representing the uuid. Returned in a "readable format" 
*/
string UserID::getIDasString() {
    return int_to_hex(m_id);
}

/**
*   Getter for created uuid. 
*   @return unsigned long integer holding the uuid
*/
unsigned long UserID::getIDasLong() {
    return m_id;
}

//PRIVATE
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
string UserID::generateNewUserID() {

    int tempint = 0;                                        //temp int to hold (int)char before appending onto end of string_num_[sub]

    int num_domain;                                     //full int value for domain
    //string string_num_domain;                           //string of int representing domain
    for (unsigned int i = 0; i < m_domain.length(); i++) {       //for each in string
        if (m_domain[i] != ' ') {                       //skip spaces
            tempint += (int) m_domain[i];
        }
    }
    num_domain = tempint;
    tempint = 0;
    cout << "int representing domain: " << num_domain <<endl;

    int num_type;
    //string string_num_type;
    for (unsigned int i =0; i <m_type.length(); i++) {           //for each in string
        if (m_type[i] != ' ') {                         //skip spaces
            tempint += (int) m_type[i];
        }
    }
    num_type = tempint;
    tempint = 0;
    cout << "int representing user type: " << num_type <<endl;

    int num_test;
    //string string_num_test;
    if (m_test != "") {
        for (unsigned int i = 0; i < m_test.length(); i++) {     //for each in string
            if (m_test[i] != ' ') {                     //skip spaces
                tempint += (int) m_type[i];
            }
        }
        num_test = tempint;
        tempint = 0;
    } 
    else {
        num_test = 0;
    }
    cout << "int representing test: " << num_test <<endl;
    
    chrono::time_point<chrono::system_clock> t_clock = chrono::system_clock::now();             //get the current time
    time_t t_epoch = chrono::system_clock::to_time_t(t_clock);                                  //convert to epoch time
    m_time = ctime(&t_epoch);                                                                    //convert that to a string

    int num_time;
    //string string_num_time;
    for (unsigned int i = 0; i < m_time.length(); i++) {
        if (m_time[i] != ' ') {
            tempint += (int) m_time[i];
            
        }
    }
    num_time = tempint;
    tempint = 0;
    cout << "int representing epoch time: " << num_time <<endl;


    int total = num_test + num_type + num_domain;

    unsigned long long_string;
    string string_long;
    

    long_string = total;
    string_long = int_to_hex(long_string);

    long_string = num_time;
    string_long  = string_long + int_to_hex(long_string).substr(2);
    
    return string_long;
}

/**
*   Small helper function to convert from int to hex string
*   @param i generic type to convert to a hex string.
*   @return string representing a base 16 number
*/
template< typename T >
string int_to_hex( T i )
{
    stringstream stream;
    stream << "0x" 
        << setfill ('0') << setw(4) 
        << hex << i;
    return stream.str();
}
