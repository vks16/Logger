#include <iostream>
#include "Log.h"
#include "string.h"



int main()
{
    Log logger;                           // logger object
    logger.SetLogLevel(Log::ERROR); // setting log level to only display error messages

    logger.info("THis is info");    // this will not print because it is not error
    logger.warn("This is warning"); // this will not print because it is not error
    logger.error("This is error");  // this will print because it is error

    String str = "vishal";
    String vis = str;
    std::cout << vis << " " << str.length() << std::endl;
    return 0;
}