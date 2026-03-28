#include "tech_accelaration_model.h"
using namespace std; 

namespace aic 
{
    TechAccelerationResult TechAccelerationModel ::evaluate(
        const unordered_map<string, double> &signals 
    )
    {
        TechAccelerationResult result; 

        result.model_name = "TechAccelarationModel"; 
        result.accelaration_index  = computeAccelerationIndex(signals); 

        result.confidence = estimateConfidence(signals); 

        result.summary = 
        "Technology acceleration estimated at" + 
        to_string(result.accelaration_index) + 
        "with confidence" + 
        to_string(result.confidence); 

        return result;
    }
}