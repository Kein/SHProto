#include "SHNewGamePlusControllerActor.h"

ASHNewGamePlusControllerActor::ASHNewGamePlusControllerActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BehaviourType = ESHNewGamePlusControllerBehaviourType::DefaultGameOnly;
}


