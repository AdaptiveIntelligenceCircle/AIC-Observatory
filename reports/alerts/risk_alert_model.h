#pragma once 

#include <vector> 
#include <string> 

using namespace std; 

namespace aic
{
    struct RiskAlert 
    {
        string category; 
        string message; 
        double severity; 
    }; 

    class RiskAlertEngine 
    {
        public: 
        vector<RiskAlert> generateAlerts(const vector<double> &riskInputs);
        
        private: 
        RiskAlert buildAlert(const string &category, double severity); 
    };
}