#include "pipeline_controller.h"

#include <iostream>
using namespace std; 
#include <cmath>

namespace aic 
{
    PipelineController :: PipelineController(){}

    void PipelineController :: ingestSignal(const DataPacket &packet) 
    {
        registry.registerSignal(packet); 
    }

    void PipelineController :: processPipeline()
    {
        validateSignals(); 
        normalizeSignals(); 
    }

    void PipelineController :: validateSignals()
    {
        auto signals = registry.getAllSignals(); 

        for (const auto &s: signals)
        {
            if (s.metrics.empty())
            {
                cout << "Warning - Empty signal detected\n";
            }
        }
    }

    void PipelineController :: normalizeSignals()
    {
        auto signals = registry.getAllSignals(); 

        for (auto &s: signals)
        {
            for (auto &s : signals)
            {
                for (auto &kv : s.metrics)
                {
                    kv.second = 100.0; // simple normalization.. 
                }
            }
        }
    }
}