#include "scenario_engine.h"
using namespace std; 

namespace aic 
{
    ScenarioResult ScenarioEngine :: runScenario(const Scenario &scenario)
    {
        ScenarioResult result; 
        result.scenario_name = scenario.name; 

        // SImple scoring logic... 
        result.outcome_score = scenario.growth_factor - scenario.risk_factor;

        return result;
    }

    vector<ScenarioResult> ScenarioEngine::runAll(const vector<Scenario> &scenarios)
    {
        vector<ScenarioResult> results; 

        for (const auto &s: scenarios)
        {
            results.push_back(runScenario(s));
        }
    }
}