#include "Log.h"

void Log::SetLogLevel(Level level)
{
    m_LogLevel = level;
}

void Log::info(const String& msg, int priority) // const means this method is not going to modify any data inside this class
    const
{
    if (m_LogLevel >= Log::INFO)
        std::cout << "[Info]: " << msg << std::endl;
}

void Log::warn(const String& msg, int priority) const
{
    if (m_LogLevel >= Log::WARN)
        std::cout << "[Warning]: " << msg << std::endl;
}

void Log::error(const String& msg, int priority) const
{
    if (m_LogLevel >= Log::ERROR)
        std::cout << "[Error]: " << msg << std::endl;
}
