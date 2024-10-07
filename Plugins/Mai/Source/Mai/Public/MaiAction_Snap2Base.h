#pragma once
#include "CoreMinimal.h"
#include "AnimationRootMotion.h"
#include "SectionRootMotion.h"
#include "UObject/NoExportTypes.h"
#include "MaiAction_SynchronizationBase.h"
#include "MaiAction_Snap2Base.generated.h"

class UBeingRootMotionBank;

UCLASS(Abstract, EditInlineNew)
class MAI_API UMaiAction_Snap2Base : public UMaiAction_SynchronizationBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UBeingRootMotionBank* _OwnerATB;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UBeingRootMotionBank* _OtherATB;
    
    UPROPERTY(BlueprintReadOnly)
    FAnimationRootMotion _OwnerMontageRM;
    
    UPROPERTY(BlueprintReadOnly)
    FAnimationRootMotion _OtherMontageRM;
    
    UPROPERTY(BlueprintReadOnly)
    FSectionRootMotion _OwnerARM;
    
    UPROPERTY(BlueprintReadOnly)
    FSectionRootMotion _OtherARM;
    
    UPROPERTY(BlueprintReadOnly)
    FSectionRootMotion _OwnerWorldARM;
    
    UPROPERTY(BlueprintReadOnly)
    FSectionRootMotion _OtherWorldARM;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, VisibleInstanceOnly)
    FTransform _OwnerIdealTransform;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, VisibleInstanceOnly)
    FTransform _OtherIdealTransform;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleInstanceOnly)
    FName _SectionName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, VisibleInstanceOnly)
    bool _Disconnect;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool _SyncSnap;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool _BlockSnap;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool _Snap3D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _SnapMoveMulMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _SnapMoveMulMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _SnapMoveMulInterp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _RotationInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _TranslationInterpSpeed;
    
    UMaiAction_Snap2Base();

    UFUNCTION(BlueprintImplementableEvent)
    void OnSectionStart(FName Section);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSectionEnd(FName Section);
    
};

