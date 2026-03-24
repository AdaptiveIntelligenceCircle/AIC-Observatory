#pragma once 

#include <string> 
#include <vector>

using namespace std; 

namespace aic 
{
    struct Explaination 
    {
        string title ; 
        string summary; 
        vector<string> reasoning_steps; 
    }; 

    class ExplainationEngine 
    {
        public:
        Explaination generateExplaination(
            const string &context, 
            double value, 
            double confidence
        ); 

        private: 
        vector<string> buildReasoning(
            const string &context, 
            double value
        );
    }; 
}