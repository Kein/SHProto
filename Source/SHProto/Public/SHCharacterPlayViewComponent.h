#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "SHViewLookOperation.h"
#include "SHViewLookOperationSettings.h"
#include "SHCharacterPlayViewComponent.generated.h"

class ASHCharacterPlay;
class UCurveFloat;
class UObject;
class USHCameraMAACRBlender;
class USHCameraMAARLBlender;
class USHOperationEvents;

UCLASS(BlueprintType, ClassGroup=Custom, Within=SHCharacterPlay, meta=(BlueprintSpawnableComponent))
class USHCharacterPlayViewComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D PitchLimit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bPitchLimitHalvedOnCollision;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ScaleRotationScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DeltaRotationScale;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FVector EnsureRelativeLoc;
    
    UPROPERTY(Transient)
    ASHCharacterPlay* CharacterPlay;
    
    UPROPERTY(Transient)
    TArray<USHCameraMAARLBlender*> MAARLBlenders;
    
    UPROPERTY(Transient)
    TArray<USHCameraMAACRBlender*> MAACRBlenders;
    
    UPROPERTY(Transient)
    FSHViewLookOperation LookOperation;
    
public:
    USHCharacterPlayViewComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(Exec)
    void SHDebug_Character_View_ValuesDebug();
    
    UFUNCTION(Exec)
    void SHDebug_Character_View_LookOperationDrawDebug();
    
    UFUNCTION(BlueprintCallable)
    void SetRotationScale(const float Scale, const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void SetRotationBlocked(const bool Blocked, const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    bool ResetLookOperation(const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void OverrideControlRotation(const FRotator& NewControlRotation, const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    USHOperationEvents* LookOperationRot(FRotator Rotation, float RotateDuration, const UObject* Object, const FSHViewLookOperationSettings& InSettings);
    
    UFUNCTION(BlueprintCallable)
    USHOperationEvents* LookOperationLoc(FVector Location, float RotateDuration, const UObject* Object, const FSHViewLookOperationSettings& InSettings);
    
    UFUNCTION(BlueprintCallable)
    USHOperationEvents* LookOperationComp(USceneComponent* InComponent, float RotateDuration, const UObject* Object, const FSHViewLookOperationSettings& InSettings);
    
    UFUNCTION(BlueprintCallable)
    USHOperationEvents* LookAtRotationAbsolute(const FRotator Rotation, float RotateDuration, const UObject* Object, float OffsetAngle, UCurveFloat* InCurve);
    
    UFUNCTION(BlueprintCallable)
    USHOperationEvents* LookAtLocationAbsolute(const FVector Location, float RotateDuration, const UObject* Object, float OffsetAngle, UCurveFloat* InCurve);
    
    UFUNCTION(BlueprintPure)
    bool IsRotationBlocked() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetViewRotation() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetViewLocation() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetViewDirection() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearRotationScale(const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void AddToControlRotation(const FRotator& RotationToAdd, const UObject* Object);
    
};

