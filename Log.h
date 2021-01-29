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

    void info(String& msg, int priority = 0) const // prints info message to console
    {
        if (priority == 1 && m_LogLevel < LOG_INFO)
            m_LogLevel = LOG_INFO;

        if (m_LogLevel >= LOG_INFO)
            std::cout << "[Info]: " << msg << std::endl;
    }

    void warn(String& msg, int priority = 0) const // prints warn message to console
    {
        if (priority == 1 && m_LogLevel < LOG_INFO)
            m_LogLevel = LOG_WARN;

        if (m_LogLevel >= LOG_WARN)
            std::cout << "[Warning]: " << msg << std::endl;
    }

    void error(String& msg, int priority = 0) const // prints error message to console
    {
        if (priority == 1 && m_LogLevel < LOG_INFO)
            m_LogLevel = LOG_ERROR;

        if (m_LogLevel >= LOG_ERROR)
            std::cout << "[Error]: " << msg << std::endl;
    }
};

#endif // LOG_H