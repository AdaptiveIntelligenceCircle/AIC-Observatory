#include "visualization_exporter.h"
using namespace std;

namespace aic 
{
    ChartData VisualizationExporter :: buildLineChart(
        const string &title, 
        const vector<double> &values 
    )
    {
        ChartData data; 
        data.title = title; 

        for (size_t i = 0 ; i < values.size(); i++)
        {
            ChartPoint p; 
            p.label = "T" + to_string(i); 
            p.value = values[i]; 
            data.points.push_back(p); 
        }
        return data; 
    }

    ChartData VisualizationExporter :: buildBarChart(
        const string &title, 
        const vector<string>&labels, 
        const vector<double> &values 
    )
    {
        ChartData data;
        data.title = title; 

        for (size_t i = 0 ; i < labels.size(); i++)
        {
            ChartPoint p; 
            p.label = labels[i];
            p.value = values[i]; 

            data.points.push_back(p); 
        }
        return data; 
    }
}