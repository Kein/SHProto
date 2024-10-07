#pragma once
#include "CoreMinimal.h"
#include "PlaythroughPersistentData.h"
#include "SHPlaythroughPersistentData.generated.h"

UCLASS(BlueprintType)
class USHPlaythroughPersistentData : public UPlaythroughPersistentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool bIsNewGamePlus;
    
    UPROPERTY(BlueprintReadOnly)
    int32 DeathCount;
    
    UPROPERTY(BlueprintReadOnly)
    bool bHasStartedEddieBossfight;
    
    USHPlaythroughPersistentData();

};

