#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DialogTalkID.h"
#include "Components/ActorComponent.h"
#include "PlayAnimationData.h"
#include "SHCameraAnimationData.h"
#include "Templates/SubclassOf.h"
#include "SHAsyncLoadRequestingComponent.generated.h"

class UObject;
class USHAnimActionExecutiveBase;
class USHAsyncLoadRequestingComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHAsyncLoadRequestingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSHAsyncLoadReqEventWithObjectContext, USHAsyncLoadRequestingComponent*, Component, TSoftObjectPtr<UObject>, SoftObjectContext);
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    bool bSkipReleaseAllAssetsOnEndPlay;
    
    UPROPERTY(BlueprintAssignable)
    FSHAsyncLoadReqEventWithObjectContext OnObjectLoaded;
    
    UPROPERTY(Transient)
    TArray<FSoftObjectPath> KeepedObjects;
    
public:
    USHAsyncLoadRequestingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestAsyncLoadSet(TSet<TSoftObjectPtr<UObject>> SoftObjects, bool bKeepLoaded);
    
    UFUNCTION(BlueprintCallable)
    void RequestAsyncLoadAnimActionExe(const TSubclassOf<USHAnimActionExecutiveBase>& InAnimActionExeClass, bool bKeepLoaded);
    
    UFUNCTION(BlueprintCallable)
    void RequestAsyncLoad(TSoftObjectPtr<UObject> SoftObject, bool bKeepLoaded);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseAsset(TSoftObjectPtr<UObject> SoftObject);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseAllAssets();
    
    UFUNCTION(BlueprintCallable)
    void PreloadDialog(const FDialogTalkID& InDialogTalkID);
    
    UFUNCTION(BlueprintCallable)
    void PreloadCameraData(const FSHCameraAnimationData& InCameraData);
    
    UFUNCTION(BlueprintCallable)
    void PreloadAnimationData(const FPlayAnimationData& InAnimationData);
    
    UFUNCTION(BlueprintCallable)
    void PreloadAnimActionExecutive(const TSubclassOf<USHAnimActionExecutiveBase>& InAnimActionExeClass);
    
    UFUNCTION(BlueprintPure)
    bool IsLoaded(const TSubclassOf<USHAnimActionExecutiveBase>& InAnimActionExeClass) const;
    
    UFUNCTION(BlueprintCallable)
    UObject* GetObject(TSoftObjectPtr<UObject> SoftObject, bool bShouldFallbackToSyncLoad);
    
};

