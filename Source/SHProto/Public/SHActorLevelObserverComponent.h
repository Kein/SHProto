#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SHActorLevelObserverComponent.generated.h"

class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHActorLevelObserverComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FActorLevelObserverEvent, AActor*, ObservedActor);
    
protected:
    UPROPERTY(BlueprintAssignable)
    FActorLevelObserverEvent OnObservedActorAvailable;
    
public:
    USHActorLevelObserverComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestStopObserveActor(TSoftObjectPtr<AActor> ActorToStopObserve);
    
    UFUNCTION(BlueprintCallable)
    void RequestObserveActor(TSoftObjectPtr<AActor> InActorToObserve);
    
};

