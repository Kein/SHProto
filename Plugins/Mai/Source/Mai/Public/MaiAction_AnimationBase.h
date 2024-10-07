#pragma once
#include "CoreMinimal.h"
#include "MaiAction.h"
#include "MaiAction_AnimationBase.generated.h"

class ACharacter;
class UAnimMontage;

UCLASS(Abstract, EditInlineNew)
class MAI_API UMaiAction_AnimationBase : public UMaiAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    UAnimMontage* _OwnerMontage;
    
    UPROPERTY(BlueprintReadWrite)
    ACharacter* _OwnerCH;
    
public:
    UMaiAction_AnimationBase();

    UFUNCTION(BlueprintCallable)
    void SetOwnerMontage(UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    void SetOwnerCH(ACharacter* ownerCH);
    
    UFUNCTION()
    void OnOwnerMontageEnds(UAnimMontage* Montage, bool interrupted);
    
};

