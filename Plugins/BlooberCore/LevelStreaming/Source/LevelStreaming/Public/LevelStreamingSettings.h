#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "InputCoreTypes.h"
#include "LevelStreamingSlotConfig.h"
#include "Templates/SubclassOf.h"
#include "LevelStreamingSettings.generated.h"

class ULevelStreamingActorSerializer;
class ULevelStreamingDebugWidget;
class ULevelStreamingRequestCollection;
class ULevelStreamingSerializationConfig;
class ULevelStreamingTaskSelector;
class UStreamableLevels;

UCLASS(DefaultConfig, Config=Game)
class LEVELSTREAMING_API ULevelStreamingSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UStreamableLevels> StreamableLevels;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<ULevelStreamingRequestCollection> RequestCollection;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<ULevelStreamingTaskSelector> TaskSelectorClass;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<ULevelStreamingActorSerializer> ActorSerializerClass;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<ULevelStreamingSerializationConfig> SerializationConfigClass;
    
    UPROPERTY(Config, EditAnywhere)
    bool DelayIdleEvents;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FLevelStreamingSlotConfig> Slots;
    
    UPROPERTY(Config, EditAnywhere)
    bool ForceGCWhenLevelsArePendingPurge;
    
    UPROPERTY(Config, EditAnywhere)
    bool FullPurgeWhenForcingGC;
    
    UPROPERTY(Config, EditAnywhere)
    int32 NumberOfPendingLevelsRequiredForGC;
    
    UPROPERTY(Config, EditAnywhere)
    float ShortestDelayBetweenForcingGC;
    
    UPROPERTY(Config, EditAnywhere)
    TSubclassOf<ULevelStreamingDebugWidget> DebugWidgetClass;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FKey> ShowDebugWidgetKeys;
    
public:
    ULevelStreamingSettings();

};

