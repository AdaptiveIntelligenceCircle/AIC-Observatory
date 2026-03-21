#pragma once 
using namespace std; 

#include <vector> 
#include "infrastructure_failure_model.h"

namespace aic 
{
    class CascadeSimulator 
    {
        public: 
        double simulateCascade(vector<InfrastructureNode> &node); 
    }; 
}