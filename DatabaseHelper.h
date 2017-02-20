/*
*   Author:   Ellie Peterson
*   Project:  Autotester for wecounsel auto testing with Json API
*   Purpose:  The goal of this application is to automate user testing on the WeCounsel application
*
*
*
*
*/

#ifndef __DATABASEHELPER_H_INCLUDED__
#define __DATABASEHELPER_H_INCLUDED__

#include <mysql.h>

class DatabaseHelper {
  public:
    //@TODO add functions


  private:
    //@TODO add functions/variables
    const static string DATABASE_NAME = "db 1"
    MYSQL* db_conn;
};

#endif //__DATABASEHELPER_H_INCLUDED__
