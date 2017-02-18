/**
*   @author:   Ellie Peterson
*   Project:  Autotester for wecounsel auto testing with Json API
*   Purpose:  The goal of this application is to automate user testing on the WeCounsel application
*   
*
*
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
    domain = user_domain;
    type = user_type;
    test = test_type;

}

/**
*   Constructor
*   Constructs a new UUID from the given inputs and the current time
*   @param: string user_domain - holds the domain to test on
*   @param: string test_type - holds the type of test being created
*   @param: string user_type - holds the user type i.e. Provider, Client, or Admin
*/
UserID::UserID(string uuid) {
    unsigned long id = stol(uuid, nullptr, 16);
}

/**
*   Constructor
*   Constructs a new UUID from the given inputs and the current time
*   @param: string user_domain - holds the domain to test on
*   @param: string test_type - holds the type of test being created
*   @param: string user_type - holds the user type i.e. Provider, Client, or Admin
*/
UserID::UserID(unsigned long uuid) {
    ;
}

/**
*   Constructor
*   Constructs a new UUID from the given inputs and the current time
*   @param: string user_domain - holds the domain to test on
*   @param: string test_type - holds the type of test being created
*   @param: string user_type - holds the user type i.e. Provider, Client, or Admin
*/
UserID::UserID(const UserID &obj) {

}

/**
*   Constructor
*   Constructs a new UUID from the given inputs and the current time
*   @param: string user_domain - holds the domain to test on
*   @param: string test_type - holds the type of test being created
*   @param: string user_type - holds the user type i.e. Provider, Client, or Admin
*/
UserID::~UserID() {

}

/**
*   Constructor
*   Constructs a new UUID from the given inputs and the current time
*   @param: string user_domain - holds the domain to test on
*   @param: string test_type - holds the type of test being created
*   @param: string user_type - holds the user type i.e. Provider, Client, or Admin
*/
string UserID::getIDasString() {

}

/**
*   Constructor
*   Constructs a new UUID from the given inputs and the current time
*   @param: string user_domain - holds the domain to test on
*   @param: string test_type - holds the type of test being created
*   @param: string user_type - holds the user type i.e. Provider, Client, or Admin
*/
unsigned long UserID::getIDasLong() {

}

//PRIVATE
/**
*   Constructor
*   generates a new UUID from the given inputs and the current time
*   range: 00000000 - FFFFFFFF ; 0000 0000 0000 0000  0000 0000 0000 0000 - 1111 1111 1111 1111  1111 1111 1111 1111
*                               | a7   a6   a5   a4    a3   a2   a1   a0 |-| a7   a6   a5   a4    a3   a2   a1   a0 |
*   a7-a6: represents domain
*   a5-a4: represents user type
*   a3-a2: represents test type
*   a1-a0: represents time at creation
*   
*/
void UserID::generateNewUserID() {

    int tempint;                                        //temp int to hold (int)char before appending onto end of string_num_[sub]

    int num_domain;                                     //full int value for domain
    string string_num_domain;                           //string of int representing domain
    for (int i = 0; i < m_domain.length(); i++) {       //for each in string
        if (m_domain[i] != ' ') {                       //skip spaces
            tempint = (int) m_domain[i];
            string_num_domain + tempint;
        }
    }
    cout << "int representing domain: " << string_num_domain <<endl;

    int num_type;
    string string_num_type;
    for (int i =0; i <m_type.length(); i++) {           //for each in string
        if (m_type[i] != ' ') {                         //skip spaces
            tempint = (int) m_type[i];
            string_num_type + tempint;
        }
    }
    cout << "int representing user type: " << string_num_type <<endl;

    int num_test;
    string string_num_test;
    if (m_test != NULL) {
        for (int i = 0; i < m_test.length(); i++) {     //for each in string
            if (m_test[i] != ' ') {                     //skip spaces
                tempint = (int) m_type[i];
                string_num_test + tempint;
            }
        }
    } 
    else {
        string_num_test = '0';
    }
    cout << "int representing test: " << string_num_test <<endl;
    
    time_point<steady_clock> t_clock = now();           //get the current time
    time_t t_epoch = to_time_t(tclock);                 //convert to epoch time
    m_time = ctime(t_epoch);                            //convert that to a string

    int num_time;
    string string_num_time;
    for (int i = 0; i < m_time.length(); i++) {
        if (m_time[i] != ' ') {
            tempint = (int) m_time[i];
            string_num_time + tempint;
        }
    }
    num_time = string_num_time.stoi();
    cout << "int representing epoch time: " << string_num_time <<endl;


    string string_long;
    unsigned long long_string;

    long_string = string_num_domain.stoul();
    string_long 

}

template< typename T >
std::string int_to_hex( T i )
{
  std::stringstream stream;
  stream << "0x" 
         << std::setfill ('0') << std::setw(sizeof(T)*2) 
         << std::hex << i;
  return stream.str();
}
