#include <iostream>
// #include <cstring>
#include "Log.h"
#include "string.h"

// class String
// {
// private:
//     char *m_Buffer;
//     unsigned int m_Size;

// public:
//     String(const char *string)
//     {
//         m_Size = strlen(string);
//         m_Buffer = new char[m_Size];
//         memcpy(m_Buffer, string, m_Size);
//     }

//     friend std::ostream &operator<<(std::ostream &stream, const String &string);
// };

// // To make this class able to work with cout <<
// std::ostream &operator<<(std::ostream &stream, const String &string)
// {
//     stream << string.m_Buffer;
//     return stream;
// }

int main()
{
    Log logger;                           // logger object
    logger.SetLogLevel(logger.LOG_ERROR); // setting log level to only display error messages

    logger.info("THis is info");    // this will not print because it is not error
    logger.warn("This is warning"); // this will not print because it is not error
    logger.error("This is error");  // this will print because it is error

    String str = "vishal";
    std::cout << str << std::endl;
    return 0;
}