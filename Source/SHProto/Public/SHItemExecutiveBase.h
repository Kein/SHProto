#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SHItemExecutiveBase.generated.h"

class ASHCharacterPlay;
class ASHItemBase;
class ASHItemExecutiveBase;

UCLASS(Abstract)
class SHPROTO_API ASHItemExecutiveBase : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHItemExecutiveBlueprintEvent, ASHItemExecutiveBase*, ExecutivePtr);
    
protected:
    UPROPERTY(BlueprintAssignable)
    FSHItemExecutiveBlueprintEvent OnFinished;
    
    UPROPERTY(Transient)
    ASHCharacterPlay* OwnerCharacter;
    
    UPROPERTY(Transient)
    ASHItemBase* ItemContext;
    
public:
    ASHItemExecutiveBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestManualAbort();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnExecutiveInitialized();
    
public:
    UFUNCTION(BlueprintPure)
    ASHItemBase* GetItemContextActor() const;
    
};

