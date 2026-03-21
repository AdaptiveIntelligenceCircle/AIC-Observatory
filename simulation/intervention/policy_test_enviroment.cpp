#include "policy_test_enviroment.h"

namespace aic 
{
    PolicyTestResult PolicyTestEnvironment::testPolicy(const string& policy_name) 
    {
    PolicyTestResult result;
    result.policy_name = policy_name;

    // mock evaluation
    result.effectiveness = 0.5;

    return result;
    }
}