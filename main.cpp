/*
*   Author:   Ellie Peterson
*   Project:  Autotester for wecounsel auto testing with Json API
*   Purpose:  The goal of this application is to automate user testing on the WeCounsel application
*
*
*
*
*/

#include <curl/curl.h>
#include <stdio.h>
#include <string.h>
#include "UserID.h"

using namespace std;

String SITE;
String user_type;
String user_domain;
unsigned long UUID;

const char data[]="this is what we post to the silly web server";
 
struct WriteThis {
  const char *readptr;
  long sizeleft;
};
 
static size_t read_callback(void *ptr, size_t size, size_t nmemb, void *userp)
{
  struct WriteThis *writ = (struct WriteThis *)userp;
 
  if(size*nmemb < 1)
    return 0;
 
  if(writ->sizeleft) {
    *(char *)ptr = pooh->readptr[0]; /* copy one single byte */ 
    writ->readptr++;                 /* advance pointer */ 
    writ->sizeleft--;                /* less data left */ 
    return 1;                        /* we return 1 byte at a time! */ 
  }
 
  return 0;                          /* no more data left to deliver */ 
}

int main(int argc, char* argv) {
  
  return 0;
}

void inputPrompt() {
}

void outputPrompt() {
}
