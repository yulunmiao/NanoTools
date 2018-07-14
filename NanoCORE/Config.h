#ifndef CONFIG_H
#define CONFIG_H
#include <string>

/*
   Kept this as simple as possible.
   Need to check the year in a CORE function (or your own)? `gconf` is a global instance.
       if (gconf.year == 2017) { ... }
   Want to update the year in your babymaker?
       gconf.year = 2018;
   Need another variable? Add a line with a dummy default.
*/

class GlobalConfig {
    public:
        unsigned int year = 0;
        std::string analysis = ""; 
        // ...
};

#ifndef __CINT__
extern GlobalConfig gconf;
#endif

#endif
