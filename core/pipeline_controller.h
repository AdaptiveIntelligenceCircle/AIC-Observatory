#pragma once 
#include "signal_registry.h"
#include <iostream>

#include <algorithm>
#include <string> 
using namespace std; 

namespace aic 
{
    class PipelineController 
    {
        public: 
        PipelineController();

        void ingestSignal(const DataPacket &packet); 
        void processPipeline(); 

        private: 
        SignalRegistry registry; 

        void validateSignals(); 
        void normalizeSignals();
    };  
}