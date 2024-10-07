#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ECombatDifficulty.h"
#include "EGameOverCause.h"
#include "EPuzzlesDifficulty.h"
#include "SHGameplayStatics.generated.h"

class ACharacter;
class UChildActorComponent;
class UObject;
class USphereComponent;

UCLASS(BlueprintType)
class USHGameplayStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USHGameplayStatics();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SaveAndReloadGame(const UObject* WorldContextObject, FName InAutoSaveName);
    
    UFUNCTION(BlueprintCallable)
    static void ReCreateChildActorChild(UChildActorComponent* ChildActorComponent, bool Force);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RecordInventoryState(const UObject* WorldContextObject, const FString& InContextString);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RecordEndingsFactorsState(const UObject* WorldContextObject, const FString& InContextString);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RecordCombatState(const UObject* WorldContextObject, const FString& InContextString);
    
    UFUNCTION(BlueprintPure)
    static bool IsCharacterOverlappingProximitySphere(ACharacter* InCharacter, USphereComponent* InProximitySphere);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EPuzzlesDifficulty GetPuzzlesDifficulty(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ECombatDifficulty GetCombatDifficulty(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GameOver(const UObject* WorldContextObject, EGameOverCause Cause);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GameEnded(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void EnsurePlayerHasFullHealth(const UObject* WorldContextObject, const bool bInInvisibleHeal);
    
    UFUNCTION(BlueprintCallable)
    static void DestroyChildActorChild(UChildActorComponent* ChildActorComponent);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CreateAutoSave(const UObject* WorldContextObject, FName InAutoSaveName);
    
    UFUNCTION(BlueprintCallable)
    static void AddFutureViewLocation(const FVector& Location);
    
};

