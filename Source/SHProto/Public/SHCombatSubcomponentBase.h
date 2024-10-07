#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SHCombatSubcomponentBase.generated.h"

class AActor;
class ACharacter;
class USHCharacterPlayCombatComponent;

UCLASS(Abstract, BlueprintType, EditInlineNew)
class SHPROTO_API USHCombatSubcomponentBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    ACharacter* OwnerCharacter;
    
    UPROPERTY(Instanced, Transient)
    USHCharacterPlayCombatComponent* OwnerComponent;
    
public:
    USHCombatSubcomponentBase();

    UFUNCTION(BlueprintPure)
    USHCharacterPlayCombatComponent* GetOwningComponent() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetOwningActor() const;
    
    UFUNCTION(BlueprintPure)
    ACharacter* GetOwnerCharacter() const;
    
};

