/*
*   @author:   Ellie Peterson
*   @version: 0.0.1
*   Project:  Autotester for wecounsel auto testing with Json API
*   Purpose:  The goal of this application is to automate user testing on the WeCounsel application
*
*/

#include "User.h"

User::User() {}
User::User(const User & obj) {
    m_first_name = obj.m_first_name;
    m_last_name = obj.m_last_name;
    m_domain = obj.m_domain;
    m_user_type = obj.m_user_type;
    m_test_type = obj.m_test_type;
    m_email = obj.m_email;
}
User::~User() {}

User::User(string first_name, 
          string last_name, 
          string domain, 
          string user_type, 
          string test_type, 
          string email) {


}

User::User(string domain, string user_type) {}

string User::getUserAsString() {
    string user = "";
    user = user + 
            m_first_name + ", " +
            m_last_name + ", " +
            m_domain + ", " +
            m_user_type + ", " +
            m_test_type + ", " +
            m_email;

    return user;
}


string User::getFirstName() {
    return m_first_name;
}
string User::getLastName() {
    return m_last_name;
}
string User::getDomain() {
    return m_domain;
}
string User::getUserType() {
    return m_user_type;
}
string User::getTestType() {
    return m_test_type;
}
string User::getEmail() {
    return m_email;
}
    
void User::setFirstName(string name) {
    m_first_name = name;
}
void User::setLastName(string name) {
    m_last_name = name;
}
void User::setDomain(string domain) {
    m_domain = domain;
}
void User::setUserType(string type) {
    m_user_type = type;
}
void User::setTestType(string type) {
    m_test_type = type;
}
void User::setEmail(string email) {
    m_email = email;
}
