#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SHDoorsManagerComponent.generated.h"

class USHDoorAnimationsBaseSetData;
class USHDoorMovementComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHDoorsManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, Transient)
    TArray<USHDoorMovementComponent*> RegisteredDoorMovementComponents;
    
    UPROPERTY(Transient)
    TMap<USHDoorAnimationsBaseSetData*, int32> RegisteredDoorAnimationsSets;
    
public:
    USHDoorsManagerComponent(const FObjectInitializer& ObjectInitializer);

};

