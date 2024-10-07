#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SHSafeBeginPlayComponent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSHSafeBeginPlayEvent);


UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHSafeBeginPlayComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable)
    FSHSafeBeginPlayEvent SafeBeginPlayEvent;
    
public:
    USHSafeBeginPlayComponent(const FObjectInitializer& ObjectInitializer);

};

