#pragma once 
#include <string> 

using namespace std; 

namespace aic 
{
    struct InfrastructureNode 
    {
        string name; 
        double stability; // 0 -> unstable, 1 -> stable..
    };
}