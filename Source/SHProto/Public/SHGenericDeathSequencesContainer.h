#pragma once
#include "CoreMinimal.h"
#include "SHGenericDeathSequencesContainer.generated.h"

class ASHCharacterPlayGenericDeathPlayer;

USTRUCT(BlueprintType)
struct FSHGenericDeathSequencesContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<TSoftClassPtr<ASHCharacterPlayGenericDeathPlayer>> GenericDeathSequenceSoftClasses;
    
    SHPROTO_API FSHGenericDeathSequencesContainer();
};

