#include "data_packet.h"
using namespace std; 

namespace aic 
{
    void DataPacket :: addMetric(const string &key, double value)
    {
        metrics[key] = value; 
    }

    double DataPacket :: getMetric(const string &key) const 
    {
        auto it = metrics.find(key); 

        if (it != metrics.end())
        {
            // return it ->first; 
        }

        return 0.0; 

    }
}