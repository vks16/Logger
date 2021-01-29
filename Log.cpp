#include "Log.h"

void Log::SetLogLevel(int level){
        m_LogLevel = level;
}

void Log::info(const char* msg){
        if(m_LogLevel >= LOG_INFO)
            std::cout << "[Info]: " << msg << std::endl;
}

void Log::warn(const char* msg)
    {
        if(m_LogLevel >= LOG_WARN)
            std::cout << "[Warning]: " << msg << std::endl;
    }

void Log::error(const char* msg)
    {
        if(m_LogLevel >= LOG_ERROR)
            std::cout << "[Error]: " << msg << std::endl;
    }

