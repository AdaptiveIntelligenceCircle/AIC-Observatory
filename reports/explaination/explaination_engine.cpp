#include "explaination_engine.h"
using namespace std; 

namespace aic 
{
    Explaination ExplainationEngine :: generateExplaination(
        const string &context, 
        double value,
        double confidence 
    )
    {
        Explaination exp; 

        exp.title = "Explaination for" + context; 

        exp.summary = 
        "The system evaluated the signal" + context+
        "with Value" + to_string(value) + 
        "and confidence" + to_string(confidence); 

        exp.reasoning_steps = buildReasoning(context, value); 

        return exp;
    }

    vector<string> ExplainationEngine :: buildReasoning(
        const string &context, double value 
    )
    {
        vector<string> steps; 
        steps.push_back("Collected signals related to " + context); 
        steps.push_back("Detected trend pattern in signal data");

        if (value > 0.7)
        steps.push_back("High impact signal detected");
        else 
        steps.push_back("Moderate or low impact signal"); 

        steps.push_back("Aggregated into system-level indicator"); 
        return steps;
    }
}