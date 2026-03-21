#include "observatory_engine.h"

#include <iostream>
using namespace std; 

namespace aic 
{
    ObservatoryEngine :: ObservatoryEngine(){}

    void ObservatoryEngine :: initialize()
    {
        cout << "Observatory - Initialization complete" << endl; 
    }

    void ObservatoryEngine :: submitSignal(const DataPacket &packet)
    {
        pipeline.ingestSignal(packet);
    }

    void ObservatoryEngine ::run()
    {
        cout << "Observatory - Running Updates" << endl; 
        pipeline.processPipeline(); 
    }
}