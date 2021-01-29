#include <iostream>
#include "Log.h"


int main(){
    Log logger;
    logger.SetLogLevel(logger.LOG_ERROR);

    logger.info("THis is info");
    logger.warn("This is warning");
    logger.error("This is error");

    return 0;
}