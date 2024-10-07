#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SHAnimActionExecutiveBase.generated.h"

class ACharacter;
class USHAnimActionExecutiveBase;

UCLASS(Blueprintable, EditInlineNew)
class SHPROTO_API USHAnimActionExecutiveBase : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAnimActionExeBaseBlueprintEvent, USHAnimActionExecutiveBase*, AnimActionExePtr);
    
protected:
    UPROPERTY(BlueprintAssignable)
    FAnimActionExeBaseBlueprintEvent EndPlayEvent;
    
    UPROPERTY(Transient)
    ACharacter* OwnerCharacter;
    
public:
    USHAnimActionExecutiveBase();

    UFUNCTION(BlueprintCallable)
    void Start();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnTick(float DeltaSeconds);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStart();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFinish();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnBreak();
    
    UFUNCTION(BlueprintImplementableEvent)
    TArray<TSoftObjectPtr<UObject>> GetSoftAssets() const;
    
public:
    UFUNCTION(BlueprintPure)
    ACharacter* GetOwnerCharacter() const;
    
    UFUNCTION(BlueprintPure)
    UObject* GetContextObject() const;
    
    UFUNCTION(BlueprintCallable)
    void Finish(bool Success);
    
    UFUNCTION(BlueprintCallable)
    void Abort();
    
};

