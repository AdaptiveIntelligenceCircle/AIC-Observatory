#include "scenario_loader.h"
using namespace std;

namespace aic 
{
    vector<Scenario> ScenarioLoader :: loadfaultScenarios()
    {
        vector<Scenario> scenarios; 

        scenarios.push_back({"AI Acceleration", 0.6, 0.9});
        scenarios.push_back({"Compute Oligonopoly", 0.8, 0.5});
        scenarios.push_back({"Open source Explosion", 0.4, 0.9}); 
        
        return scenarios;
    }  
}