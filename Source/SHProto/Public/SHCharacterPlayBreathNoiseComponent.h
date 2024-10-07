#pragma once
#include "CoreMinimal.h"
#include "MaiNoiseEmitter.h"
#include "SHCharacterPlayBreathNoiseComponent.generated.h"

class ASHCharacterPlay;

UCLASS(ClassGroup=Custom, Within=SHCharacterPlay, meta=(BlueprintSpawnableComponent))
class USHCharacterPlayBreathNoiseComponent : public UMaiNoiseEmitter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    ASHCharacterPlay* OwnerCharacter;
    
public:
    USHCharacterPlayBreathNoiseComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool IsHoldingBreath() const;
    
};

