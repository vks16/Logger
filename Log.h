#ifndef Log_H
#define Log_H

#include <iostream>
#include "string.h"

class Log
{
public:
    enum Level : char 
    {
        ERROR, WARN, INFO
    };
    const int LOG_INFO = 2;
    const int LOG_WARN = 1;
    const int LOG_ERROR = 0;

private:
    mutable Level m_LogLevel = ERROR;

public:
    void SetLogLevel(Level level); // sets a log level

    void info(const String& msg, int priority = 0) const; // prints info message to console
    

    void warn(const String& msg, int priority = 0) const; // s warn message to console
   

    void error(const String& msg, int priority = 0) const; // prints error message to console
  
};

#endif // LOG_H