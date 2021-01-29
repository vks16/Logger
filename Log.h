#ifndef Log_H
#define Log_H

#include <iostream>
class Log 
{
public:
    const int LOG_INFO = 2;
    const int LOG_WARN = 1;
    const int LOG_ERROR = 0;

    int m_LogLevel = 0;

public:
    void SetLogLevel(int level); // sets a log level

    void info(const char* msg); // prints info message to console 
   

    void warn(const char* msg); // prints warn message to console 
  

    void error(const char* msg); // prints error message to console 
    
};

#endif // LOG_H