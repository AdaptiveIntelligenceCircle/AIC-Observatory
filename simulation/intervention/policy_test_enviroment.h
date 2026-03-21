#pragma once 

#include <string> 
#include <algorithm> 

using namespace std; 

namespace aic 
{
    struct PolicyTestResult 
    {
        string policy_name; 
        double effectiveness; 
    }; 

    class PolicyTestEnvironment 
    {
        public: 
        PolicyTestResult testPolicy(const string &policy_name); 
    }; 
}