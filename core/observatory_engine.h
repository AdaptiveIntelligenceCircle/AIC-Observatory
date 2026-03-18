#pragma once 
#include <algorithm> 

#include <iostream>
using namespace std; 

#include "pipeline_controller.h"
#include <string>

namespace aic 
{
    class ObservatoryEngine 
    {
        public: 
        ObservatoryEngine(); 

        void initialize();
        void run(); 

        void submitSignal(const DataPacket &packet); 

        private: 
        PipelineController pipeline;
    }; 
}