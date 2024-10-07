#pragma once
#include "CoreMinimal.h"
#include "MaiSingleSpawner.h"
#include "Templates/SubclassOf.h"
#include "SHAISpawner.generated.h"

class ASHAIWeapon;

UCLASS()
class SHPROTO_API ASHAISpawner : public AMaiSingleSpawner {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bUseCustomWeaponClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ASHAIWeapon> CustomWeaponClass;
    
public:
    ASHAISpawner(const FObjectInitializer& ObjectInitializer);

};

