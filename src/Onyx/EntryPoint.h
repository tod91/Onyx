//
//  EntryPoint.h
//  Onyx
//
//  Created by Todor Ivanov on 10/29/18.
//

#ifndef EntryPoint_h
#define EntryPoint_h


namespace onyx {

    extern onyx::Application* CreateApplication();
    
    int main(int argc, **argv)
    {
        auto app = CreateAplication();
        app->Run();
    }
    
}

#endif /* EntryPoint_h */
