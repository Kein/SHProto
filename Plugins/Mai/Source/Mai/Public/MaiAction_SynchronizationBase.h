#pragma once
#include "CoreMinimal.h"
#include "MaiAction_AnimationBase.h"
#include "MaiAction_SynchronizationBase.generated.h"

class ACharacter;
class UAnimMontage;

UCLASS(Abstract, EditInlineNew)
class MAI_API UMaiAction_SynchronizationBase : public UMaiAction_AnimationBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    UAnimMontage* _OtherMontage;
    
    UPROPERTY(BlueprintReadWrite)
    ACharacter* _OtherCH;
    
public:
    UMaiAction_SynchronizationBase();

    UFUNCTION(BlueprintCallable)
    void SetOtherMontage(UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    void SetOtherCH(ACharacter* otherCH);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReleaseOther();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PossessOther();
    
    UFUNCTION()
    void OnOtherMontageEnds(UAnimMontage* Montage, bool interrupted);
    
};

