# Instruction to run the program
```
git clone https://github.com/vks16/Logger.git
cd Logger/

make
```

Logger is logging system that we can import in project
#include "Log.h"

```
Log logger; // creates a logger object
logger.warn("message"); // prints warning message in console
logger.info("message"); // prints info message in console
logger.error("message"); // prints error message in console

```

we can controll the level of messages we want to see in the console
```
logger.SetLogLevel(logger.LOG_ERROR);
```
This means from now on, only logger.error() will print and logger.info() and logger.warn() will not print.
This is helpful to reduce console logs