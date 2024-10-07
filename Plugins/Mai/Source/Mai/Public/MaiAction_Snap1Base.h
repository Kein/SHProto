#pragma once
#include "CoreMinimal.h"
#include "AnimationRootMotion.h"
#include "SectionRootMotion.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "MaiAction_AnimationBase.h"
#include "MaiAction_Snap1Base.generated.h"

class UAnimMontage;
class UBeingRootMotionBank;

UCLASS(Abstract, EditInlineNew)
class MAI_API UMaiAction_Snap1Base : public UMaiAction_AnimationBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UBeingRootMotionBank* _OwnerATB;
    
    UPROPERTY(BlueprintReadOnly)
    FAnimationRootMotion _OwnerMontageRM;
    
    UPROPERTY(BlueprintReadOnly)
    FSectionRootMotion _OwnerARM;
    
    UPROPERTY(BlueprintReadOnly)
    FSectionRootMotion _OwnerWorldARM;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FTransform _OwnerIdealTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _RotationInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _TranslationInterpSpeed;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    FName _SectionName;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool _MoveOnRail;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool _Disconnect;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool _SyncSnap;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool _BlockSnap;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool _Snap3D;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool _SnapUpVector;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool _IdealTransformAsTarget;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool _ErrorCorrection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _SnapMoveMulMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _SnapMoveMulMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _SnapMoveMulInterp;
    
    UMaiAction_Snap1Base();

    UFUNCTION(BlueprintCallable)
    UAnimMontage* PlayOwnerMontage();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSectionStart(FName Section);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSectionEnd(FName Section);
    
    UFUNCTION(BlueprintPure)
    FVector GetSectionOffset() const;
    
    UFUNCTION(BlueprintCallable)
    void CalculateIdealTransforms();
    
};

