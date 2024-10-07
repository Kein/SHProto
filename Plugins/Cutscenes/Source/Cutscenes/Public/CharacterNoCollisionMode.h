#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "CharacterNoCollisionMode.generated.h"

class ACharacter;

USTRUCT(BlueprintType)
struct CUTSCENES_API FCharacterNoCollisionMode {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    ACharacter* OwningCharacter;
    
    UPROPERTY()
    bool NoCollisionMode;
    
    UPROPERTY()
    TMap<TEnumAsByte<ECollisionChannel>, TEnumAsByte<ECollisionResponse>> CapsuleCollisionSettings;
    
public:
    FCharacterNoCollisionMode();
};

