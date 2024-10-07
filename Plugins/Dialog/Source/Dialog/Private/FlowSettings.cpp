#include "FlowSettings.h"
#include "DialogChoiceSequenceObserver.h"
#include "ReplicaEntityTemplate.h"
#include "ReplicaLineTemplate.h"

UFlowSettings::UFlowSettings() {
    this->_CachedData = NULL;
    this->_ChoiceObserver = UDialogChoiceSequenceObserver::StaticClass();
    this->_PlayerClass = NULL;
    this->_PreloadVoices = false;
    this->_DefaultDelayAfterLine = 1.00f;
    this->_DistanceCheckPeriod = 1.00f;
    this->_PlayMaxDistance = 1500.00f;
    this->_DefaultInterruptPriority = 0;
    this->_MarkUntranslatedTexts = true;
    this->_DialogTemplate = NULL;
    this->_EntityTemplate = UReplicaEntityTemplate::StaticClass();
    this->_HubTemplate = NULL;
    this->_LineTemplate = UReplicaLineTemplate::StaticClass();
    this->_ObjectiveTemplate = NULL;
    this->_QuestTemplate = NULL;
}


