#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EDynamicResolution.h"
#include "ERaytracing.h"
#include "GFXQuality.h"
#include "SHAnalyticsPerormanceData.h"
#include "SHAnalyticsPerformanceRecordsDatabase.generated.h"

USTRUCT(BlueprintType)
struct FSHAnalyticsPerformanceRecordsDatabase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FString SessionStartTimeString;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FDateTime SessionStartTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FString SessionEndTimeString;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FString PlatformString;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FIntPoint Resolution;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    ERaytracing Raytracing;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    EDynamicResolution DynRes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    GFXQuality Quality;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    TArray<FString> LevelNames;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    int32 BuildVersion;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    TArray<FSHAnalyticsPerormanceData> Data;
    
    SHPROTO_API FSHAnalyticsPerformanceRecordsDatabase();
};

