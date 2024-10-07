#pragma once
#include "CoreMinimal.h"
#include "SHItemEquipable.h"
#include "SHItemEquipment.generated.h"

UCLASS(Abstract)
class SHPROTO_API ASHItemEquipment : public ASHItemEquipable {
    GENERATED_BODY()
public:
    ASHItemEquipment(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TurnOnRequest();
    
    UFUNCTION(BlueprintCallable)
    void TurnOffRequest();
    
    UFUNCTION(BlueprintCallable)
    void ToggleRequest();
    
    UFUNCTION(BlueprintPure)
    bool IsTurnOn() const;
    
};

