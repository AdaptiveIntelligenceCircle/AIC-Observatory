#pragma once 
#include <string> 

#include <unordered_map>
using namespace std; 

namespace aic 
{
    struct MeaningCrisisResult 
    {
        string model_name; 
        double meaning_stability_index; 
        double confidence; 
        string summary; 
    }; 

    class MeaningCrisisModel 
    {
        public: 
        MeaningCrisisResult evaluate(const unordered_map<string, double>&signals); 

        private: 
        double computeMeaningStability(const unordered_map<string, double>&signals); 
        double estimateConfidence(const unordered_map<string, double> &signals); 
    }; 
}