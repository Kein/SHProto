#pragma once
#include "CoreMinimal.h"
#include "Perception/AISense.h"
#include "UObject/NoExportTypes.h"
#include "MaiThe6thSenseEvent.h"
#include "MaiSense_The6thSense.generated.h"

class AActor;
class UObject;

UCLASS()
class MAI_API UMaiSense_The6thSense : public UAISense {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FMaiThe6thSenseEvent> The6thSenseEvents;
    
    UPROPERTY()
    TArray<FMaiThe6thSenseEvent> The6thSenseDisabledEvents;
    
    UMaiSense_The6thSense();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void Report6thSenseEvent(UObject* WorldContext, FName Tag, bool Enable, AActor* Instigator, float power);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void Report6thSenseConstEvent(UObject* WorldContext, FName Tag, bool Enable, AActor* Instigator, FVector Location, float power);
    
};

