#pragma once
#include "CoreMinimal.h"
#include "SHGameplayMapObjectComponent.h"
#include "SHGameplayMapPushableComponent.generated.h"

class USHPushableComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHGameplayMapPushableComponent : public USHGameplayMapObjectComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(SaveGame)
    int32 CurrentValue;
    
public:
    USHGameplayMapPushableComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void ProcessComponentMovementEvent(USHPushableComponent* PushableComponent);
    
    UFUNCTION()
    void ProcessComponentBlockedChangedEvent(USHPushableComponent* PushableComponent);
    
};

