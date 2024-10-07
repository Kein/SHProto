#pragma once
#include "CoreMinimal.h"
#include "SHAnalyticsGameplayEvent.h"
#include "SHAnalyticsGameplayEventsDetails.h"
#include "SHAnalyticsGameplayRecordsDatabase.generated.h"

USTRUCT(BlueprintType)
struct FSHAnalyticsGameplayRecordsDatabase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FString SessionStartTimeString;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FString SessionRestoreTimeString;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FString SessionEndTimeString;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    TArray<FSHAnalyticsGameplayEvent> Events;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FSHAnalyticsGameplayEventsDetails Details;
    
    SHPROTO_API FSHAnalyticsGameplayRecordsDatabase();
};

