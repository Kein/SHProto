#pragma once
#include "CoreMinimal.h"
#include "SHAnalyticsAICharacterDiedDetail.generated.h"

USTRUCT(BlueprintType)
struct FSHAnalyticsAICharacterDiedDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FString SpawnerObject;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FString CharacterClass;
    
    SHPROTO_API FSHAnalyticsAICharacterDiedDetail();
};

