#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DaiAnimPlayParams.h"
#include "MaiAttack.h"
#include "MaiDebugPrintParams.h"
#include "MaiScriptAttack.generated.h"

class UAnimMontage;
class UCurveFloat;

UCLASS(EditInlineNew)
class MAI_API UMaiScriptAttack : public UMaiAttack {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDaiAnimPlayParams _OwnerAnimParams;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    UAnimMontage* _OwnerMontage;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector _SnapTargetLocation;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleInstanceOnly, meta=(AllowPrivateAccess=true))
    float _StartSectionDuration;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleInstanceOnly, meta=(AllowPrivateAccess=true))
    float _AttackAnimTime;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleInstanceOnly, meta=(AllowPrivateAccess=true))
    float _SnapStartTime;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleInstanceOnly, meta=(AllowPrivateAccess=true))
    TArray<float> _HitTimes;
    
public:
    UPROPERTY(EditAnywhere)
    bool _SnapOnlyInStartSection;
    
    UPROPERTY(EditAnywhere)
    bool _SnapOnlyToLastHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _MaxAttackSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _MaxSlideSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _AbortBlendOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _RotationInterpolationRate;
    
    UPROPERTY(EditAnywhere)
    float _MovementDist;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* _MovementCurve;
    
    UPROPERTY(EditAnywhere)
    FMaiDebugPrintParams _PrintParams;
    
    UMaiScriptAttack();

    UFUNCTION(BlueprintCallable)
    void SetSliding(float Distance, UCurveFloat* Curve);
    
    UFUNCTION(BlueprintCallable)
    void SetOwnerMontage(UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    void SelectBestAnim(FVector Forward);
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* PlayOwnerMontage();
    
    UFUNCTION()
    void OnOwnerMontageEnds(UAnimMontage* Montage, bool interrupted);
    
};

