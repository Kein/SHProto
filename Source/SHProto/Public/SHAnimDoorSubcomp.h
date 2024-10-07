#pragma once
#include "CoreMinimal.h"
#include "ESHAnimEndType.h"
#include "SHAnimSubcomponentBase.h"
#include "SHAnimDoorSubcomp.generated.h"

class ASHDoorAttachment;
class UAnimMontage;
class USHAnimMontagePlayer;
class USHDoorAnimationsBaseComponent;
class USHDoorLockBaseComponent;

UCLASS(EditInlineNew)
class SHPROTO_API USHAnimDoorSubcomp : public USHAnimSubcomponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    USHAnimMontagePlayer* Open;
    
    UPROPERTY(Transient)
    USHAnimMontagePlayer* action;
    
    UPROPERTY(Instanced, Transient)
    USHDoorLockBaseComponent* InteractingDoorLockComponent;
    
    UPROPERTY(Instanced, Transient)
    USHDoorAnimationsBaseComponent* InteractingDoorAnimsComponent;
    
    UPROPERTY(Transient)
    ASHDoorAttachment* InteractingDoorAttachmentActor;
    
public:
    USHAnimDoorSubcomp();

protected:
    UFUNCTION()
    void OnActionEnd(UAnimMontage* Montage, ESHAnimEndType AnimEndType);
    
    UFUNCTION()
    void OnActionBlendingOut(UAnimMontage* Montage, ESHAnimEndType AnimEndType);
    
};

