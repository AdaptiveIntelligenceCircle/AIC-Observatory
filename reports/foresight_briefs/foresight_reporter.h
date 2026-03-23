#pragma once 

#include <iostream> 
#include <string> 

#include <vector> 
using namespace std; 

namespace aic 
{
    struct ForesightBrief
    {
        string title; 
        string summary;
        vector<string> key_insights; 
    }; 

    class ForesightReporter 
    {
        public: 
        ForesightBrief generateBrief(); 

        private: 
        vector<string> extractInsights(); 
    }; 
}