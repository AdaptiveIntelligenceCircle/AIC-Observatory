#include "api_formatter.h"
using namespace std; 

#include <sstream>

namespace aic 
{
    string APIFormatter :: formatDashboard(
        const vector<DashboardMetric> &metrics 
    )
    {
        ostringstream oss; 
        oss << "{ \"dashboard\": [" << endl;

        for (size_t i = 0 ; i < metrics.size(); i++)
        {
            oss << "{";
            oss << "\"name\":\"" << metrics[i].name << "\",";
            oss << "\"value\":" << metrics[i].value << ",";
            oss << "\"trend\":\"" << metrics[i].trend << "\"";
            oss << "}";

            if (i !=metrics.size() - 1) oss << ","; 
        }

        oss << "]}";
        return oss.str(); 
    }

    string APIFormatter :: formatAlerts(
        const vector<RiskAlert> &alerts 
    )
    {
        ostringstream oss; 
        oss << "{ \"alerts\": [";

        for (size_t i = 0 ; i < alerts.size();i++)
        {
            oss << "{"; 

            oss << "\"category\":\"" << alerts[i].category << "\",";
            oss << "\"message\":\"" << alerts[i].message << "\",";
            oss << "\"severity\":" << alerts[i].severity;
            oss << "}";

            if (i != alerts.size() - 1) oss << ";" ;
        }

        oss << "]}" << endl;
        return oss.str();  
    }
}