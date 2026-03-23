#include "dashboard_generator.h"
using namespace std; 

namespace aic
{
    vector<DashboardMetric> DashboardGenerator :: generate()
    {
        vector<DashboardMetric> metrics; 

        metrics.push_back(buildMetric("AI Acceleration", 0.78));
        metrics.push_back(buildMetric("Meaning Stability Index", 0.52)); 
        metrics.push_back(buildMetric("Systemic Risk Index", 0.66)); 

        return metrics; 
    }

    DashboardMetric DashboardGenerator :: buildMetric(const string &name, double value)
    {
        DashboardMetric metric; 

        metric.name = name; 
        metric.value = value; 

        if (value > 0.7)
        metric.trend = "HIGH"; 

        else if(value > 0.4)
        metric.trend = "MEDIUM"; 

        else 
        metric.trend = "LOW";
    }
}