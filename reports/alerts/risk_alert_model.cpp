#include "risk_alert_model.h"
using namespace std; 

namespace aic 
{
    vector<RiskAlert> RiskAlertEngine:: generateAlerts(const vector<double> &riskInputs)
    {
        vector<RiskAlert> alerts; 

        for (double risk : riskInputs)
        {
            if (risk> 0.7)
            {
                alerts.push_back(buildAlert("High Risk", risk)); 
            }
        }
        return alerts; 
    }

    RiskAlert RiskAlertEngine :: buildAlert(const string &category, double severity)
    {
        RiskAlert alert; 
        alert.category = category; 
        alert.severity = severity; 

        alert.message = "Risk level exceeded threshold" + to_string(severity); 

        return alert; 
    }
}