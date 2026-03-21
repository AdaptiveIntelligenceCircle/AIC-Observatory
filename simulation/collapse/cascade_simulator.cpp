#include "cascade_simulator.h"
using namespace std; 

#include <iostream>

namespace aic 
{
    double CascadeSimulator :: simulateCascade(vector<InfrastructureNode> &nodes)
    {
        double collapse_score = 0.0; 

        for (auto &node : nodes)
        {
            if(node.stability < 0.5)
            {
                collapse_score += (1.0 - node.stability); 
            }
        }
        return collapse_score; 
    }
}