#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "SHItemExeCameraManagerComponent.generated.h"

class UCurveFloat;
class UObject;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHItemExeCameraManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bUseStartCameraAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StartCameraAnimationDuration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FTransform StartCameraAnimationFirstFrameRelPose;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FTransform StartCameraAnimationLastFrameRelPose;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bEnableCameraMovement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D ZoomedOutMovementClamp;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D ZoomedInMovementClamp;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MovementMaxSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MovementAcceleration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MovementDeceleration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bEnableCameraZoom;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ZoomFocialLength;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ZoomInTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* ZoomInCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ZoomOutTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* ZoomOutCurve;
    
public:
    USHItemExeCameraManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetCameraZoomBlocked(const bool Blocked, const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraMovementBlocked(const bool Blocked, const UObject* Object);
    
    UFUNCTION(BlueprintPure)
    bool IsCameraZoomBlocked() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCameraMovementBlocked() const;
    
};

