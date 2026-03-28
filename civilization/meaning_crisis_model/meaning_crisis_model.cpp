#include "meaning_crisis_model.h"

namespace aic 
{
    MeaningCrisisResult MeaningCrisisModel :: evaluate(
        const unordered_map<string,double> &signals 
    )
    {
        MeaningCrisisResult result;
        result.model_name = "MeaningCrisisModel"; 

        result.meaning_stability_index = computeMeaningStability(signals);
        result.confidence = estimateConfidence(signals); 

        result.summary = 
        "Meaning stability estimated at" + 
        to_string(result.meaning_stability_index) + 
        "with confidence" + 
        to_string(result.confidence); 

        return result; 
    }

    double MeaningCrisisModel :: computeMeaningStability(
        const unordered_map<string, double> &signals 
    )
    {
        double loneliness = 0.0; 
        double community_strength = 0.0; 
        double attention_fragmentation = 0.0; 

        auto it = signals.find("loneliness index"); 
        if (it != signals.end()) loneliness = it -> second; 

        it = signals.find("Community strength");
        if (it != signals.end()) community_strength = it -> second; 

        it = signals.find("attention fragmentation"); 
        if (it != signals.end()) attention_fragmentation = it -> second; 

        // Meaning stability is inversely affected by loneliness.. 
        double score  = (0.50 * community_strength) - (0.25 * loneliness) - (0.25 * attention_fragmentation);
        
        // normalize.. // 
        if (score > 1.0 ) score = 1.0; 
        if (score < 0.0) score = 0.0; 

        return score; 
    }

    double MeaningCrisisModel :: estimateConfidence(
        const unordered_map<string, double> &signals 
    )
    {
        int count = 0; 

        if (signals.find("Loneliness index") != signals.end()) count++; 
        if (signals.find("community strength") != signals.end()) count++;
        if (signals.find("attention fragmentation") != signals.end()) count++; 

        return count / 3.0; 
    }
}