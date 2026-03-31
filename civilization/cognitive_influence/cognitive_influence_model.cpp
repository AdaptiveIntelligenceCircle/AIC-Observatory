#include "cognitive_influence_model.h"
using namespace std; 

namespace aic 
{
    CognitiveInfluenceResult CognitiveInfluenceModel :: evaluate(
        const unordered_map<string, double> &signals 
    )
    {
        CognitiveInfluenceResult result; 
        result.model_name = "cognitive Influence Model"; 

        result.manipulation_risk_index = computeManipulationRisk(signals); 
        result.confidence = estimateConfidence(signals); 

        result.summary = 
        "Cognitive Simulation risk estimated at"
        + to_string(result.manipulation_risk_index) + 
        "with confidence" + 
        to_string(result.confidence); 

        return result; 
    }

    double CognitiveInfluenceModel :: computeManipulationRisk(
        const unordered_map<string, double> &signals 
    )
    {
        double misinformation_rate = 0.0; 
        double outrage_amplification = 0.0;
        double ai_generated_content = 0.0; 

        auto it = signals.find("misinformation rate"); 
        if (it!= signals.end()) misinformation_rate = it -> second; 

        it = signals.find("outrage amplification"); 
        if (it != signals.end()) outrage_amplification = it-> second; 

        it = signals.find("Ai_generated content ratio"); 
        if (it != signals.end()) ai_generated_content = it -> second; 

        double score = (0.40 * misinformation_rate) + 
        (0.35 * outrage_amplification) + 
        (0.25 * ai_generated_content); 

        if (score > 1.0) score = 1.0;
        if (score < 0.0) score = 0.0; 

        return score; 
    }

    double CognitiveInfluenceModel :: estimateConfidence(
        const unordered_map<string, double> &signals 
    )
    {
        int count = 0; 

        if (signals.find("misinformation rate") != signals.end()) count++; 
        if (signals.find("outrage amplification") != signals.end()) count++; 
        if (signals.find("ai-generated content ratio") != signals.end()) count++; 

        return count / 3.0; 
    }
}