#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESHAnimEndType.h"
#include "ESHTraversalObstacleExtendedStage.h"
#include "SHCameraAnimationData.h"
#include "SHTraversalBaseComponent.h"
#include "SHTraversalObstacleExtendedAnimationSet.h"
#include "SHTraversalObstacleExtendedComponent.generated.h"

class ASHCameraAnimationExecutive;
class UAnimMontage;
class UCapsuleComponent;
class USHAnimMontagePlayer;
class USHTraversalObstacleExtendedComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHTraversalObstacleExtendedComponent : public USHTraversalBaseComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHObstacleExtendedEvent, USHTraversalObstacleExtendedComponent*, ComponentPtr);
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector TraversalAnimPosition;
    
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
    FSHCameraAnimationData CameraAnimationStart;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSHCameraAnimationData CameraAnimationEnd;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSHTraversalObstacleExtendedAnimationSet AnimationSet;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    FVector TraversalSecureArea;
    
    UPROPERTY(BlueprintAssignable)
    FSHObstacleExtendedEvent PreTraversalStarted;
    
    UPROPERTY(BlueprintAssignable)
    FSHObstacleExtendedEvent OnTraversalStarted;
    
    UPROPERTY(BlueprintAssignable)
    FSHObstacleExtendedEvent OnTraversalStageChanged;
    
    UPROPERTY(BlueprintAssignable)
    FSHObstacleExtendedEvent OnTraversalFinished;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    USHAnimMontagePlayer* AnimMontagePlayer;
    
    UPROPERTY(Instanced, Transient)
    UCapsuleComponent* TeleportToOnPlayingEndComponent;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ASHCameraAnimationExecutive> PlayingCameraAnimExe;
    
public:
    USHTraversalObstacleExtendedComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void ProcesTraversalAnimEnd(UAnimMontage* Montage, ESHAnimEndType AnimEndType);
    
    UFUNCTION()
    void ProcessTraversalAnimBlendingOut(UAnimMontage* Montage, ESHAnimEndType AnimEndType);
    
    UFUNCTION()
    void ProcessMovementSnapFinish(bool bWasCompleted);
    
public:
    UFUNCTION(BlueprintPure)
    ESHTraversalObstacleExtendedStage GetCurrentStage() const;
    
};

