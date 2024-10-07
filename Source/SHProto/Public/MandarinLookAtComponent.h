#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "MaiLookAtComponent.h"
#include "MandarinLookAtComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API UMandarinLookAtComponent : public UMaiLookAtComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IsOver;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float HeadUpdateMinDot;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator RelativeHeadRotation;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsLookingAt;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LookAtAlphaAddRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LookAtAlphaLoseRate;
    
    UPROPERTY(BlueprintReadOnly)
    float LookAtAlpha;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LookAtVinterpRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool UseCurrentPriority;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 DesiredPriority;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TargetZOffset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LoseInterestDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AttackYawLimit;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AttackPitchLimit;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool UsePitchCorrection;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PitchCorrectionMin;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PitchCorrectionMax;
    
    UPROPERTY(BlueprintReadOnly)
    bool UseAttackLookAtLimits;
    
    UMandarinLookAtComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetFreezeLookAt(bool Freeze);
    
    UFUNCTION(BlueprintCallable)
    void SetAttackLookAtLimits(bool AttackLimit);
    
    UFUNCTION(BlueprintPure)
    FVector GetLookAtTargetLocation();
    
};

