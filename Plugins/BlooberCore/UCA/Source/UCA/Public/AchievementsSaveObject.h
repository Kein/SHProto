#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "CollectionCounterSaveData.h"
#include "FloatCounterSaveData.h"
#include "IntegerCounterSaveData.h"
#include "SimpleCounterSaveData.h"
#include "AchievementsSaveObject.generated.h"

UCLASS()
class UCA_API UAchievementsSaveObject : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FSimpleCounterSaveData> SimpleCounters;
    
    UPROPERTY()
    TArray<FIntegerCounterSaveData> IntegerCounters;
    
    UPROPERTY()
    TArray<FFloatCounterSaveData> FloatCounters;
    
    UPROPERTY()
    TArray<FCollectionCounterSaveData> CollectionCounters;
    
    UAchievementsSaveObject();

};

