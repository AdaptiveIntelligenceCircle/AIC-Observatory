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

    double TechAccelerationModel :: computeAccelerationIndex(
        const unordered_map<string, double> &signals 
    )
    {
        double ai_growth = 0.0; 
        double compute_growth = 0.0; 
        double open_source_growth = 0.0;

        auto it = signals.find("ai_growth"); 
        if (it != signals.end()) ai_growth = it -> second; 

        it = signals.find("compute growth"); 
        if (it != signals.end()) compute_growth = it -> second; 

        it = signals.find("open source growth"); 
        if (it != signals.end()) open_source_growth = it -> second; 

        // Weighted combination.. 
        double score = (0.45 *ai_growth) + (0.35 *compute_growth) + (0.20 *open_source_growth); 

        if (score > 1.0) score = 1.0;
        if (score < 0.0) score = 0.0; 

        return score; 
    }

    double TechAccelerationModel :: estimateConfidence(
        const unordered_map<string, double>&estimates 
    )
    {
        int count = 0.0; 

        if (estimates.find("ai_agents") != estimates.end()) 
        count++; 

        if (estimates.find("compute_growth") != estimates.end())
        count++; 

        if (estimates.find("open source growth") != estimates.end())
        count++; 

        return count / 3.0; 
    }
}