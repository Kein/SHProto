#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "AnimationRootMotion.h"
#include "BlendSpaceRootMotion.h"
#include "Stamp.h"
#include "TaggedAnimationTransform.h"
#include "Templates/SubclassOf.h"
#include "BeingRootMotionBank.generated.h"

class AActor;
class UAnimSequence;
class UAnimationAsset;
class UBeingRootMotionData;
class UBlendSpace;
class UDataTable;
class UNavigationQueryFilter;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BEING_API UBeingRootMotionBank : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UBeingRootMotionData> _RootMotionDataAsset;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    UBeingRootMotionData* _RootMotionData;
    
    UPROPERTY(EditAnywhere)
    float _MinSpeed;
    
    UPROPERTY(EditAnywhere)
    float _MaxSpeed;
    
    UPROPERTY(EditAnywhere)
    float _SpeedStep;
    
    UPROPERTY(AdvancedDisplay, EditInstanceOnly)
    TArray<FStamp> _Stamps;
    
    UPROPERTY(EditAnywhere)
    UAnimationAsset* _DebugAssetRM;
    
    UPROPERTY(EditAnywhere)
    float _DebugDrawSpeed;
    
    UPROPERTY(EditAnywhere)
    float _DebugDrawBSYaw;
    
    UPROPERTY(EditAnywhere)
    float _DebugDrawDuration;
    
    UPROPERTY(EditAnywhere)
    float _DebugDrawOffset;
    
    UPROPERTY(EditAnywhere)
    int32 _MaxStampCount;
    
    UPROPERTY(EditAnywhere)
    AActor* _DebugTarget;
    
    UPROPERTY(EditDefaultsOnly)
    int32 _MaxFramesPerSecond;
    
    UPROPERTY(EditAnywhere)
    float _Precision;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer _AnimTags;
    
    UPROPERTY(EditAnywhere)
    TArray<UDataTable*> _AnimTable;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UAnimSequence*> _Animations;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UBlendSpace*> _Blendspaces;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    TMap<UAnimationAsset*, FAnimationRootMotion> _AnimRootMotion;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    TMap<UBlendSpace*, FBlendSpaceRootMotion> _BSRootMotion;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FName, FTaggedAnimationTransform> _BonesTransform;
    
    UBeingRootMotionBank(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool TryGetRootMotionData(const UAnimSequence* Animation, FAnimationRootMotion& outdata, bool inActorRotation) const;
    
    UFUNCTION(BlueprintCallable)
    void StampBS(const UBlendSpace* BlendSpace, float Yaw, FVector TargetLocation, FLinearColor Color);
    
    UFUNCTION(BlueprintCallable)
    void Stamp(const UAnimSequence* Animation, FLinearColor Color);
    
    UFUNCTION(BlueprintPure)
    FVector GetLocalOffset(const UAnimSequence* Animation) const;
    
    UFUNCTION(BlueprintPure)
    bool GetBoneMovement(const UAnimSequence* AnimationSequence, FName BoneName, FTransform& Movement) const;
    
    UFUNCTION(BlueprintPure)
    bool GetBoneInitialTransform(const UAnimSequence* AnimationSequence, FName BoneName, FTransform& Transform) const;
    
    UFUNCTION(BlueprintPure)
    bool GetBoneFinalTransform(const UAnimSequence* AnimationSequence, FName BoneName, FTransform& Transform) const;
    
    UFUNCTION(BlueprintPure)
    float FindBestSpeedForBlendSpace(const UBlendSpace* BlendSpace, FVector Location) const;
    
    UFUNCTION(BlueprintPure)
    float FindBestSpeedForAnim(const UAnimSequence* Animation, FVector Location) const;
    
    UFUNCTION(BlueprintPure)
    float FindBestAngleForBlendSpace(const UBlendSpace* BlendSpace, FVector Location) const;
    
    UFUNCTION(BlueprintCallable)
    void DebugStamp();
    
    UFUNCTION(BlueprintPure)
    bool CanGoWithBlendspace(const UBlendSpace* BlendSpace, float Yaw, float Distance, TSubclassOf<UNavigationQueryFilter> filterClass) const;
    
    UFUNCTION(BlueprintPure)
    bool CanGoWithAnim(const UAnimSequence* Animation, float Distance, TSubclassOf<UNavigationQueryFilter> filterClass) const;
    
    UFUNCTION(BlueprintPure)
    bool CanGotoWithBlendspace(const UBlendSpace* BlendSpace, FVector Location, float Distance, TSubclassOf<UNavigationQueryFilter> filterClass) const;
    
};

