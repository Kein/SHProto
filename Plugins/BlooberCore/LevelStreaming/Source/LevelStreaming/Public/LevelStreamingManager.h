#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "LevelStreamingSlot.h"
#include "LevelStreamingManager.generated.h"

class AActor;
class ULevelStreamingDatabase;
class ULevelStreamingDebugWidget;
class ULevelStreamingTask;
class ULevelStreamingTaskSelector;
class UStreamableLevels;

UCLASS()
class LEVELSTREAMING_API ULevelStreamingManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UStreamableLevels* StreamableLevels;
    
    UPROPERTY(Transient)
    TArray<ULevelStreamingTask*> Tasks;
    
    UPROPERTY(Transient)
    ULevelStreamingTaskSelector* TaskSelector;
    
    UPROPERTY(Transient)
    ULevelStreamingDatabase* Database;
    
    UPROPERTY(Transient)
    TArray<FLevelStreamingSlot> Slots;
    
    UPROPERTY(Instanced, Transient)
    ULevelStreamingDebugWidget* DebugWidget;
    
public:
    ULevelStreamingManager();

private:
    UFUNCTION()
    void OnActorEndPlayDynamic(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION()
    void OnActorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
};

