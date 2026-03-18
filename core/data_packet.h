#pragma once 
#include <iostream>
using namespace std; 

#include <string>
#include <unordered_map>

namespace aic 
{
    class DataPacket 
    {
        public: 
        string source; 
        string type; 

        unordered_map<string, string> metrics; 
        DataPacket() = default; 

        void addMetric(const string &key, double value); 
        double getMetric(const string &key) const; 
    }; 
}