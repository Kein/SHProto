#include "BeingFootstepVPUserData.h"

UBeingFootstepVPUserData::UBeingFootstepVPUserData() {
    this->Evaluator = EVPDataEvaluatorType::TwoChannels;
    this->SingleChannelMask = true;
    this->UsePuddles = false;
    this->ContrastBoost = 2.00f;
    this->SourceChannel = EVPDataSourceChannel::Red;
    this->Channel0 = NULL;
    this->Channel1 = NULL;
    this->Channel2 = NULL;
    this->Channel3 = NULL;
    this->Puddles = NULL;
}


