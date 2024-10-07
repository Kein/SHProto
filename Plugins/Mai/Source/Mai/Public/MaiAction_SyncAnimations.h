#pragma once
#include "CoreMinimal.h"
#include "DaiAnimPlayParams.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EMaiSyncRotationMode.h"
#include "MaiAction_Snap2Base.h"
#include "MaiSyncActionConfig.h"
#include "Templates/SubclassOf.h"
#include "MaiAction_SyncAnimations.generated.h"

class AActor;
class UAnimMontage;
class UMaiAction_SyncAnimations;
class UObject;

UCLASS(EditInlineNew)
class MAI_API UMaiAction_SyncAnimations : public UMaiAction_Snap2Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer _OwnerAnimTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer _OtherAnimTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _PlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMaiSyncRotationMode _RotationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 _SnapOtherToOwner: 1;
    
    UPROPERTY()
    uint8 _UseOtherRotation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 _IgnoreOffset: 1;
    
    UPROPERTY(BlueprintReadOnly)
    FDaiAnimPlayParams _OwnerAnimParams;
    
    UPROPERTY(BlueprintReadOnly)
    FDaiAnimPlayParams _OtherAnimParams;
    
public:
    UMaiAction_SyncAnimations();

    UFUNCTION(BlueprintCallable)
    UAnimMontage* PlayOwnerMontage();
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* PlayOtherMontage();
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContext"))
    static UMaiAction_SyncAnimations* createActionSyncFromRow(UObject* WorldContext, AActor* Other, const FDataTableRowHandle& row);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContext"))
    static UMaiAction_SyncAnimations* createActionSyncFromConfig(UObject* WorldContext, AActor* Other, const FMaiSyncActionConfig& Config, FName behaviorName);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UMaiAction_SyncAnimations* createActionSyncAnimsSingle(UObject* WorldContextObject, FGameplayTag ownerAnimTag, FGameplayTag otherAnimTag, AActor* Other, TSubclassOf<UMaiAction_SyncAnimations> ActionClass, FName behaviorName, float PlayRate);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UMaiAction_SyncAnimations* createActionSyncAnims(UObject* WorldContextObject, FGameplayTagContainer ownerAnimTags, FGameplayTagContainer otherAnimTags, AActor* Other, TSubclassOf<UMaiAction_SyncAnimations> ActionClass, FName behaviorName, float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    void CalculateIdealTransforms();
    
};

