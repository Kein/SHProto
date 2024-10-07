#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SHPlayerCameraOverlapReceiveComponent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHPlayerCameraOverlapReceiveEvent, USHPlayerCameraOverlapReceiveComponent*, ComponentRef);

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHPlayerCameraOverlapReceiveComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable)
    FSHPlayerCameraOverlapReceiveEvent OnOverlapStarted;

    UPROPERTY(BlueprintAssignable)
    FSHPlayerCameraOverlapReceiveEvent OnOverlapEnded;
    
public:
    USHPlayerCameraOverlapReceiveComponent(const FObjectInitializer& ObjectInitializer);

};

