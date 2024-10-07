#include "FlowEntity.h"
#include "ReplicaEntityTemplate.h"

UFlowEntity::UFlowEntity() {
    this->_TemplateClass = UReplicaEntityTemplate::StaticClass();
}


