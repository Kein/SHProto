#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SHMariaCombatComponent.generated.h"

class USHMariaCombatComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHMariaCombatComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHMariaCombatBlueprintEvent, USHMariaCombatComponent*, Component);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName BlackboardDangerModeKeyname;
    
    UPROPERTY(BlueprintAssignable)
    FSHMariaCombatBlueprintEvent OnInDangerStateChangedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FSHMariaCombatBlueprintEvent OnInjuredStateChangedEvent;
    
public:
    USHMariaCombatComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool WasSaved() const;
    
    UFUNCTION(BlueprintPure)
    bool WasAttacked() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInjured() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInDanger() const;
    
    UFUNCTION(BlueprintCallable)
    void InitBehaviors();
    
    UFUNCTION(BlueprintCallable)
    void GrabStarted();
    
    UFUNCTION(BlueprintCallable)
    void GrabFinished();
    
    UFUNCTION(BlueprintCallable)
    void GrabAborted();
    
};

