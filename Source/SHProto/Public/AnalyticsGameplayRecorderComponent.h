#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AnalyticsGameplayRecorderComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAnalyticsGameplayRecorderComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(SaveGame)
    FString CurrentSessionFilePath;
    
public:
    UAnalyticsGameplayRecorderComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(Exec)
    void SHDebug_Analytics_Gameplay_ValuesDebug();
    
    UFUNCTION(Exec)
    void SHDebug_Analytics_Gameplay_StartSession();
    
    UFUNCTION(Exec)
    void SHDebug_Analytics_Gameplay_FlushSession();
    
    UFUNCTION(Exec)
    void SHDebug_Analytics_Gameplay_EndSession();
    
    UFUNCTION(Exec)
    void SHDebug_Analytics_Gameplay_DumpValues();
    
};

