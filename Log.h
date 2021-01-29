#ifndef Log_H
#define Log_H

#include <iostream>
#include "string.h"

class Log
{
public:
    const int LOG_INFO = 2;
    const int LOG_WARN = 1;
    const int LOG_ERROR = 0;

private:
    mutable int m_LogLevel = 0;

public:
    void SetLogLevel(int level); // sets a log level

    void info(const char* msg, int priority = 0) const; // prints info message to console
    

    void warn(const char *msg, int priority = 0) const; // s warn message to console
   

    void error(const char *msg, int priority = 0) const; // prints error message to console
  
};

#endif // LOG_H