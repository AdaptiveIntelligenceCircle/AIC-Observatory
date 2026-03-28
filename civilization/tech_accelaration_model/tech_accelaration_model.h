#pragma once 
#include <iostream>
#include <string> 
#include <map> 

#include <unordered_map>
using namespace std; 

namespace aic 
{
    struct TechAccelerationResult 
    {
        string model_name; 
        double accelaration_index; 
        double confidence; 
        string summary; 
    }; 

    class TechAccelerationModel 
    {
        public: 
        TechAccelerationResult evaluate(const unordered_map<string, double> &signals ); 

        private: 
        double computeAccelerationIndex(const unordered_map<string, double>&signals ); 
        double estimateConfidence(const unordered_map<string, double> &estimates); 
    }; 
}