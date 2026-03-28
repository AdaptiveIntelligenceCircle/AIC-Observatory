#pragma once 
#include <string>

using namespace std; 
#include <vector> 

#include "../dashboard/dashboard_generator.h"
#include "../alerts/risk_alert_model.h"

#include "../foresight_briefs/foresight_reporter.h"
#include <iostream>

namespace aic 
{
    class APIFormatter 
    {
        public: 
        string formatDashboard(
            const vector<DashboardMetric> &metrics
        ); 

        string formatAlerts(
            const vector<RiskAlert> &alerts
        ); 

        string formatBrief(
            const ForesightBrief &brief
        ); 
    }; 
}