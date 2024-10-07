#include "FlowDialogLine.h"
#include "ReplicaLineTemplate.h"

UFlowDialogLine::UFlowDialogLine() {
    this->_TemplateClass = UReplicaLineTemplate::StaticClass();
    this->_LockUpdate = false;
    this->_CustomLength = false;
    this->_LineLength = 0.00f;
    this->_DelayAfterLine = 0.00f;
    this->_OverrideDelay = false;
    this->_CanBeSkipped = true;
    this->_Resumeable = true;
    this->_ExclusiveSubtitles = false;
    this->_OverrideShowingSubtitles = false;
    this->_StartShowingSubtitles = 0.00f;
    this->_Loudness = 3;
}


