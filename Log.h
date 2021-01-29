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
    void SetLogLevel(int level);

    void info(const char* msg);
   

    void warn(const char* msg);
  

    void error(const char* msg);
    
};

#endif // LOG_H