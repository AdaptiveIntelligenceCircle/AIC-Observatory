#pragma once 
#include <vector>

#include "scenario_engine.h"
using namespace std;

namespace aic 
{
    class ScenarioLoader 
    {
        public: 
        vector<Scenario> loadfaultScenarios(); 
    };  
} // namespace aic 
