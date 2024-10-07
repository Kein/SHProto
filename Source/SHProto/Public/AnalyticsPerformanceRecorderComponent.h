#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AnalyticsPerformanceRecorderComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAnalyticsPerformanceRecorderComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UAnalyticsPerformanceRecorderComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(Exec)
    void SHDebug_Analytics_Performance_ValuesDebug();
    
    UFUNCTION(Exec)
    void SHDebug_Analytics_Performance_StartSession();
    
    UFUNCTION(Exec)
    void SHDebug_Analytics_Performance_FlushSession();
    
    UFUNCTION(Exec)
    void SHDebug_Analytics_Performance_EndSession();
    
    UFUNCTION(Exec)
    void SHDebug_Analytics_Performance_DumpCurrentWorldOwnedComponents();
    
};

