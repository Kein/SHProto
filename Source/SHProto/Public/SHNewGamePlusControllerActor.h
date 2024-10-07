#pragma once
#include "CoreMinimal.h"
#include "ESHNewGamePlusControllerBehaviourType.h"
#include "SHActorsManagementBaseControllerActor.h"
#include "SHNewGamePlusControllerActor.generated.h"

UCLASS(Abstract)
class SHPROTO_API ASHNewGamePlusControllerActor : public ASHActorsManagementBaseControllerActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    ESHNewGamePlusControllerBehaviourType BehaviourType;
    
public:
    ASHNewGamePlusControllerActor(const FObjectInitializer& ObjectInitializer);

};

