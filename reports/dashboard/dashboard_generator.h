#pragma once 
#include <vector> 

#include <string> 
using namespace std; 

namespace aic 
{
    struct DashboardMetric 
    {
        string name; 
        double value; 
        string trend; 
    }; 

    class DashboardGenerator 
    {
        public: 
        vector<DashboardMetric> generate(); 

        private: 
        DashboardMetric buildMetric(const string &name, double value);
    }; 
}