//
//  Export.h
//  Onyx
//
//  Created by Todor Ivanov on 10/29/18.
//

#ifndef Export_h
#define Export_h

#ifdef __APPLE__
    #if ONYX_BUILD_DLL
        #define ONYX_API __attribute__((visibility("default")))
    #endif
#elif _WIN32
    #if ONYX_BUILD_DLL
        #define ONYX_API __declspec(dllexport)
    #else
        #define ONYX_API __declspec(dllimport)

    #endif
#endif
#endif /* Export_h */
