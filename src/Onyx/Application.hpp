//
//  Application.hpp
//  Onyx
//
//  Created by Todor Ivanov on 10/29/18.
//

#ifndef Application_hpp
#define Application_hpp

#include "Export.h"

namespace onyx
{

class ONYX_API Application
{
public:
    Application();
    ~Application();
    
    void Run();
};
    
} // end of Onyx namespace;
#endif /* Application_hpp */
