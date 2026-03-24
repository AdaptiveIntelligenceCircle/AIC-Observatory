#pragma once 
#include <vector>
#include <string>

using namespace std; 

namespace aic 
{
    struct ChartPoint
    {
        string label; 
        double value; 
    };

    struct ChartData
    {
        string title; 
        vector<ChartPoint> points; 
    };

    class VisualizationExporter
    {
        public: 
        ChartData buildLineChart(
            const string &title, 
            const vector<double>&values
        ); 

        ChartData buildBarChart(
            const string &title, 
            const vector<string> &labels, 
            const vector<double> &values
        );
    }; 
}