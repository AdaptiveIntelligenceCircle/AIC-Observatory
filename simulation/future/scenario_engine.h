#pragma once 
#include <iostream> 

using namespace std; 

#include <vector>
#include <string> 

namespace aic 
{
    struct Scenario 
    {
        string name; 
        double risk_factor; 
        double growth_factor; 
    }; 

    struct ScenarioResult 
    {
        string scenario_name; 
        double outcome_score; 
    }; 

    class ScenarioEngine 
    {
        public: 
        ScenarioResult runScenario(const Scenario &scenario); 
        vector<ScenarioResult> runAll(const vector<Scenario> &scenarios); 
    };
}