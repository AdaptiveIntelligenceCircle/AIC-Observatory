#include "signal_registry.h"
using namespace std; 

namespace aic 
{
    void SignalRegistry :: registerSignal(const DataPacket &packet)
    {
        signals.push_back(packet); 
    }

    vector<DataPacket> SignalRegistry :: getAllSignals() const 
    {
        return signals; 
    } 

    void SignalRegistry::clear()
    {
        signals.clear(); 
    }
}