#pragma once 
#include <vector> 

#include <string>
#include <iostream>

using namespace std; 
#include "data_packet.h"

namespace aic 
{
    class SignalRegistry 
    {
        public:  
        void registerSignal(const DataPacket &packet);
        vector<DataPacket> getAllSignals() const; 
        void clear(); 

        private: 
        vector<DataPacket> signals; 
    }; 
}
