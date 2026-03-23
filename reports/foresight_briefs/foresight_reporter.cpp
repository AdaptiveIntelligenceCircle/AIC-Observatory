#include <iostream>
#include "foresight_reporter.h"

#include <string> 
using namespace std; 

namespace aic 
{
    ForesightBrief ForesightReporter :: generateBrief()
    {
        ForesightBrief brief; 

        brief.title = "Civilization Outlook Report";
        brief.summary = "Analysis of current technological and societal dynamic"; 

        brief.key_insights = extractInsights();

        return brief;
    }

    vector<string> ForesightReporter :: extractInsights()
    {
        vector<string> insights; 

        insights.push_back("AI Accelaration continues to increase."); 
        insights.push_back("Meaning stability show signs of decline");
        insights.push_back("Systemic risk is moderately high.");

        return insights; 
    }
}