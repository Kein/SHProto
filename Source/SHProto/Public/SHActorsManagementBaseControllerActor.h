#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SHActorsManagementBaseControllerActor.generated.h"

class USHSafeBeginPlayComponent;

UCLASS(Abstract)
class SHPROTO_API ASHActorsManagementBaseControllerActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHSafeBeginPlayComponent* SafeBeginPlayComponent;
    
public:
    ASHActorsManagementBaseControllerActor(const FObjectInitializer& ObjectInitializer);

};

