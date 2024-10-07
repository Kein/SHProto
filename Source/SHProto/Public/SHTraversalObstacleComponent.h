#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESHAnimEndType.h"
#include "ESHDetectionSide.h"
#include "SHCameraAnimationData.h"
#include "SHObstacleAnimationSet.h"
#include "SHTraversalBaseComponent.h"
#include "SHTraversalObstacleComponent.generated.h"

class AActor;
class ASHCameraAnimationExecutive;
class UAnimMontage;
class USHAnimMontagePlayer;
class USHTraversalObstacleComponent;
class USceneComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHTraversalObstacleComponent : public USHTraversalBaseComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSHObstacleWithSideEvent, USHTraversalObstacleComponent*, ComponentPtr, ESHDetectionSide, DetectionSide);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSHObstacleWithCameraAnimExeEvent, USHTraversalObstacleComponent*, ComponentPtr, ASHCameraAnimationExecutive*, CameraAnimExe);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHObstacleEvent, USHTraversalObstacleComponent*, ComponentPtr);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHObstacleComponentEvent, ESHDetectionSide, DetectionSide);
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector TraversalAnimPositionDiffAbove;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector TraversalAnimPositionDiffBelow;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bShouldUnequipWeapon;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bEnableFlashlightPlainSocketMode;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector RequiredDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RequiredViewDotProduct;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bSecureView;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRotator SecuredViewOffset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bSecureViewDurationAsAnimLengthMul;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SecuredViewDuration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bUseFocusTracking;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bUseStaticCameraAnimAnchor;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSHCameraAnimationData CameraAnimationAbove;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSHCameraAnimationData CameraAnimationBelow;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSHObstacleAnimationSet DefaultAnimationSet;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSHObstacleAnimationSet InDangerAnimationSet;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector TraversalSecureArea;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector DebugBoxOffset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector DebugBoxAnchor;
    
    UPROPERTY(BlueprintAssignable)
    FSHObstacleEvent PreTraversalStarted;
    
    UPROPERTY(BlueprintAssignable)
    FSHObstacleComponentEvent OnTraversalStarted;
    
    UPROPERTY(BlueprintAssignable)
    FSHObstacleComponentEvent OnTraversalFinished;
    
    UPROPERTY(BlueprintAssignable)
    FSHObstacleWithCameraAnimExeEvent OnCameraAnimExeCreated;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    USHAnimMontagePlayer* AnimMontagePlayer;
    
    UPROPERTY(Transient)
    TArray<AActor*> FriendActors;
    
public:
    USHTraversalObstacleComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveFriendActor(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    void RegisterBelowFlashlightLookAtComponent(USceneComponent* InLookAtComponent);
    
    UFUNCTION(BlueprintCallable)
    void RegisterAboveFlashlightLookAtComponent(USceneComponent* InLookAtComponent);
    
protected:
    UFUNCTION()
    void ProcessTraversalAnimEnd(UAnimMontage* Montage, ESHAnimEndType AnimEndType);
    
    UFUNCTION()
    void ProcessTraversalAnimBlendingOut(UAnimMontage* Montage, ESHAnimEndType AnimEndType);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddFriendActor(AActor* InActor);
    
};

