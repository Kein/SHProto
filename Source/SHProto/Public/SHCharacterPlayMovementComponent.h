#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "ESHInteriorExteriorStateEnum.h"
#include "SHCustomMovementStruct.h"
#include "SHMovementSnapConfig.h"
#include "Templates/SubclassOf.h"
#include "SHCharacterPlayMovementComponent.generated.h"

class AActor;
class ASHCharacterPlay;
class ASHInteriorExteriorVolume;
class UCameraShakeBase;
class UCurveFloat;
class UObject;
class USHCharacterPlayCombatComponent;
class USHCharacterPlayMovementComponent;
class USHCharacterPlayMovementSettings;
class USHMovementObstacleDetection;
class USHOperationEvents;
class USHPushableComponent;
class USHVehicleMovementProcessor;
class USceneComponent;

UCLASS(ClassGroup=Custom, Within=SHCharacterPlay, meta=(BlueprintSpawnableComponent))
class USHCharacterPlayMovementComponent : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHCharacterPlayMovementEvent, USHCharacterPlayMovementComponent*, ComponentRef);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USHMovementObstacleDetection* MovementObstacleDetection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float IncreaseMaxSpeedInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DecreaseMaxSpeedInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinVelocityToPlaySprintShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinWaterDepthToBeInWaterState;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    USHCharacterPlayMovementSettings* Settings;
    
    UPROPERTY(BlueprintAssignable)
    FSHCharacterPlayMovementEvent PushableRegisteredBPEvent;
    
    UPROPERTY(BlueprintAssignable)
    FSHCharacterPlayMovementEvent PushableUnregisteredBPEvent;
    
    UPROPERTY(Transient)
    ASHCharacterPlay* OwnerCharacter;
    
    UPROPERTY(Transient)
    UCameraShakeBase* PlayingSprintCameraShake;
    
    UPROPERTY(Transient)
    TSubclassOf<UCameraShakeBase> AssignedSprintCameraShakeClass;
    
    UPROPERTY(Instanced, Transient)
    USHPushableComponent* PushableComponent;
    
    UPROPERTY(Transient)
    USHVehicleMovementProcessor* VehicleMovementProcessor;
    
    UPROPERTY(Transient)
    TArray<ASHInteriorExteriorVolume*> TeriorVolumes;
    
    UPROPERTY(Transient)
    TArray<FSHCustomMovementStruct> CustomMovements;
    
public:
    USHCharacterPlayMovementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TelportAbsoluteWithDefaultView(const FTransform& InTransform);
    
    UFUNCTION(BlueprintCallable)
    void TeleportRelativelyToComponents(USceneComponent* FirstAnchor, USceneComponent* SecondAnchor);
    
    UFUNCTION(BlueprintCallable)
    void TeleportRelativelyToActors(AActor* FirstAnchor, AActor* SecondAnchor);
    
    UFUNCTION(BlueprintCallable)
    void TeleportRelatively(const FTransform& FirstAnchor, const FTransform& SecondAnchor);
    
    UFUNCTION(BlueprintCallable)
    void TeleportAbsoluteWithView(const FTransform& InTransform, const FRotator& InViewRotation);
    
    UFUNCTION(BlueprintCallable)
    void TeleportAbsolute(const FTransform& InTransform);
    
    UFUNCTION(BlueprintCallable)
    void StopRotateInPlaceImmediately();
    
    UFUNCTION(BlueprintCallable)
    USHOperationEvents* SlideSnapAbsolute(const FVector Location, const float Duration, const UObject* Object, TArray<AActor*> InCollisionIgnoredActors, UCurveFloat* Curve);
    
    UFUNCTION(Exec)
    void SHDebug_Character_Movement_ValuesDebug();
    
    UFUNCTION(Exec)
    void SHDebug_Character_Movement_SpamMovementInputDebug();
    
    UFUNCTION(Exec)
    void SHDebug_Character_Movement_SpamMovementImpacts();
    
    UFUNCTION(Exec)
    void SHDebug_Character_Movement_SlideSnapDrawDebug();
    
    UFUNCTION(Exec)
    void SHDebug_Character_Movement_RotationSnapDrawDebug();
    
    UFUNCTION(Exec)
    void SHDebug_Character_Movement_PushableDrawDebug();
    
    UFUNCTION(Exec)
    void SHDebug_Character_Movement_MovementSnapDrawDebug();
    
    UFUNCTION(Exec)
    void SHDebug_Character_Movement_ForceSprint();
    
    UFUNCTION(Exec)
    void SHDebug_Character_Movement_DrawDebug();
    
    UFUNCTION(BlueprintCallable)
    void SetSprintBlocked(const bool Blocked, const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void SetRotateInPlaceCustomAllowed(const bool bInAllowed, const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void SetRotateInPlaceBlocked(const bool Blocked, const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void SetPhysWalkingBlocked(const bool Blocked, const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void SetMovementScale(const float Scale, const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void SetMovementBlocked(const bool Blocked, const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void SetIsOnStairs(bool OnStairs);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableToggleSprintAutoEnd(const bool InValue, const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerYawRotationMatchingBlocked(const bool Blocked, const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    USHOperationEvents* RotationSnapAbsoluteStatic(const FRotator WorldRotation, const float Duration, const UObject* Object, UCurveFloat* Curve);
    
    UFUNCTION(BlueprintCallable)
    USHOperationEvents* RotationSnapAbsolute(const FVector Location, const float Duration, const UObject* Object, UCurveFloat* Curve);
    
    UFUNCTION(BlueprintCallable)
    USHOperationEvents* MovementSnapAbsolute(const FVector Location, const float Timeout, const FSHMovementSnapConfig Config, const UObject* Object);
    
    UFUNCTION(BlueprintPure)
    bool IsSprinting() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSprintBlockedBy(const UObject* Object) const;
    
    UFUNCTION(BlueprintPure)
    bool IsSprintBlocked() const;
    
    UFUNCTION(BlueprintPure)
    bool IsRotateInPlaceBlocked() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPhysWalkingBlocked() const;
    
    UFUNCTION(BlueprintPure)
    bool IsOnStairs() const;
    
    UFUNCTION(BlueprintPure)
    bool IsMovingOnSlope() const;
    
    UFUNCTION(BlueprintPure)
    bool IsMovementBlockedBy(const UObject* Object) const;
    
    UFUNCTION(BlueprintPure)
    bool IsMovementBlocked() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInWater() const;
    
    UFUNCTION(BlueprintPure)
    bool IsControllerYawRotationMatchingBlocked() const;
    
protected:
    UFUNCTION()
    void HandleReceiveDamageEvent(USHCharacterPlayCombatComponent* CombatComp);
    
public:
    UFUNCTION(BlueprintPure)
    float GetLastSlopeAngleDeg() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLastInputValue() const;
    
    UFUNCTION(BlueprintPure)
    ESHInteriorExteriorStateEnum GetInteriorExteriorState() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetFakedVelocity() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearMovementScale(const UObject* Object);
    
};

