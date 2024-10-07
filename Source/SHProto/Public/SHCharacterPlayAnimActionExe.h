#pragma once
#include "CoreMinimal.h"
#include "SHAnimActionExecutive.h"
#include "SHCharacterPlayAnimActionExe.generated.h"

class USHCharacterPlayCombatComponent;

UCLASS(EditInlineNew)
class SHPROTO_API USHCharacterPlayAnimActionExe : public USHAnimActionExecutive {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bBlockMovement;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bBlockViewRotation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bAllowCombatActions;
    
public:
    USHCharacterPlayAnimActionExe();

protected:
    UFUNCTION()
    void ProcessCharacterReceivedHitEvent(USHCharacterPlayCombatComponent* CombatComp);
    
    UFUNCTION()
    void ProcessCharacterCombatInputModeChangedEvent(USHCharacterPlayCombatComponent* CombatComp);
    
};

