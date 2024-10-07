#pragma once
#include "CoreMinimal.h"
#include "DaiAnimPlayParams.h"
#include "GameplayTagContainer.h"
#include "MaiAction_Snap1Base.h"
#include "MaiAction_PlayAnimation.generated.h"

class UMaiAction_PlayAnimation;
class UObject;

UCLASS(EditInlineNew)
class MAI_API UMaiAction_PlayAnimation : public UMaiAction_Snap1Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer _AnimTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer _AbortAnimTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName _AbortSection;
    
    UPROPERTY(EditAnywhere)
    uint8 _NonBlocking: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 _InfinitLoop: 1;
    
    UPROPERTY(EditAnywhere)
    float _AbortBlendOutTime;
    
    UPROPERTY(EditAnywhere)
    float _Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _PlayRate;
    
    UPROPERTY(EditAnywhere)
    int32 _LoopCount;
    
    UPROPERTY(EditAnywhere)
    FName _BlockBT;
    
    UPROPERTY(BlueprintReadOnly)
    FDaiAnimPlayParams _OwnerAnimParams;
    
    UMaiAction_PlayAnimation();

    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UMaiAction_PlayAnimation* createActionPlayLoopedAnim(UObject* WorldContextObject, FGameplayTagContainer animTags, FName blockBT, int32 LoopCount);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UMaiAction_PlayAnimation* createActionPlayFromTags(UObject* WorldContextObject, FGameplayTagContainer animTags, FName blockBT, int32 LoopCount);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UMaiAction_PlayAnimation* createActionPlayAnimWithParams(UObject* WorldContextObject, FDaiAnimPlayParams animParams, FName blockBT, int32 LoopCount);
    
};

