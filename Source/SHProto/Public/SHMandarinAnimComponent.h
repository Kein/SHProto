#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "MandarinIKSettings.h"
#include "SHAnimFootIKSubcompSettings.h"
#include "SHEnemyAnimComponent.h"
#include "SHMandarinAnimComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHMandarinAnimComponent : public USHEnemyAnimComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool WasLastStepRight;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSHAnimFootIKSubcompSettings SHAnimFootIKSubcompSettings;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FMandarinIKSettings SHMandarinIKSettings;
    
public:
    USHMandarinAnimComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ToggleLegsRagdoll(bool Activate);
    
    UFUNCTION(BlueprintCallable)
    void SetTongueTransformationAlpha(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetTongueSnapRotation(FRotator Rotation);
    
    UFUNCTION(BlueprintCallable)
    void SetTongueSnapLocation(FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void SetLastStep(bool WasRight);
    
    UFUNCTION(BlueprintCallable)
    void SetHanging(bool IsHanging);
    
    UFUNCTION(BlueprintCallable)
    void RequestStopOnHit();
    
    UFUNCTION(BlueprintCallable)
    void ChangeLocomotion(bool ToAggressive);
    
};

