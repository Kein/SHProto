#pragma once
#include "CoreMinimal.h"
#include "BGameInstance.h"
#include "StreamableLevelHandle.h"
#include "EGameOverCause.h"
#include "Templates/SubclassOf.h"
#include "SHGameInstance.generated.h"

class UAkRtpc;
class USHDebugManager;
class USHDebugManagerWidget;
class USHGameInstance;

UCLASS(NonTransient)
class USHGameInstance : public UBGameInstance {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRestoreWorldDependentSettings, USHGameInstance*, OutGameInstance);
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bDeathReload;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EGameOverCause LastDeathReason;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UAkRtpc> WWisePadHeadPhonesRTPC;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<USHDebugManagerWidget> DebugManagerWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USHDebugManager* DebugManager;
    
private:
    UPROPERTY(Transient)
    UAkRtpc* WWisePadHeadPhonesRTPCPtr;
    
public:
    USHGameInstance();

    UFUNCTION(BlueprintImplementableEvent)
    void OnChangeWorldDependentSettings();
    
    UFUNCTION(BlueprintCallable)
    void BeginCustomLevel(const FStreamableLevelHandle& LevelHandle);
    
};

