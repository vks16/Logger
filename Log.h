#include <iostream>
class Log 
{
public:
    const int LOG_INFO = 2;
    const int LOG_WARN = 1;
    const int LOG_ERROR = 0;

    int m_LogLevel = 0;

public:
    void SetLogLevel(int level){
        m_LogLevel = level;
    }

    void info(const char* msg)
    {
        if(m_LogLevel >= LOG_INFO)
            std::cout << "[Info]: " << msg << std::endl;
    }

    void warn(const char* msg)
    {
        if(m_LogLevel >= LOG_WARN)
            std::cout << "[Warning]: " << msg << std::endl;
    }

    void error(const char* msg)
    {
        if(m_LogLevel >= LOG_ERROR)
            std::cout << "[Error]: " << msg << std::endl;
    }
};