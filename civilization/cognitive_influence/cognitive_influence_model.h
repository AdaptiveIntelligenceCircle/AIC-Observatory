#pragma once 
#include <string> 
#include <unordered_map>

using namespace std; 

namespace aic 
{
    struct CognitiveInfluenceResult 
    {
        string model_name; 
        double manipulation_risk_index; 
        double confidence; 
        string summary; 
    }; 

    class CognitiveInfluenceModel 
    {
        public:
        CognitiveInfluenceResult evaluate(const unordered_map<string, double> &signals); 

        private: 
        double computeManipulationRisk(const unordered_map<string, double> &signals); 
        double estimateConfidence(const unordered_map<string, double> &signals); 
    }; 
}