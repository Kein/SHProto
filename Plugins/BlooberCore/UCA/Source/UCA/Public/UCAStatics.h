#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AchievementHandle.h"
#include "ActivityHandle.h"
#include "ActivityZoneHandle.h"
#include "CollectionHandle.h"
#include "CounterHandle.h"
#include "EActivityOutcome.h"
#include "UCAStatics.generated.h"

class AActor;
class UObject;

UCLASS(BlueprintType)
class UCA_API UUCAStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUCAStatics();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UnlockAchievement(const UObject* WorldContextObject, const FAchievementHandle Achievement);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TerminateActivity(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartActivity(const UObject* WorldContextObject, const FActivityHandle& Handle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetActualZone(const UObject* WorldContextObject, const FActivityZoneHandle Zone);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetActivityAvailability(const UObject* WorldContextObject, const FActivityHandle& Handle, const bool bEnabled);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ResumeActivity(const UObject* WorldContextObject, const FActivityHandle& Handle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void IncrementAchievementCounter(const UObject* WorldContextObject, const FCounterHandle Counter);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void EndActivity(const UObject* WorldContextObject, const FActivityHandle& Handle, EActivityOutcome Outcome);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddAchievementCounter(const UObject* WorldContextObject, const FCounterHandle Counter, const int32 Delta);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddAchievementCollectionGuidFromActor(const UObject* WorldContextObject, const FCollectionHandle Collection, AActor* Actor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddAchievementCollectionGuid(const UObject* WorldContextObject, const FCollectionHandle Collection, FGuid Guid);
    
};

