#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/LatentActionManager.h"
#include "CommonsGameplayStatics.generated.h"

class AActor;
class UActorComponent;
class UAudioComponent;
class UObject;
class USoundBase;
class USoundConcurrency;

UCLASS(BlueprintType)
class COMMONS_API UCommonsGameplayStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCommonsGameplayStatics();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static UAudioComponent* SpawnGameplaySound2D(const UObject* WorldContextObject, USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, bool PersistAcrossLevelTransition, bool AutoDestroy);
    
    UFUNCTION(BlueprintCallable)
    static void PostFinalizeActorComponentCreation(AActor* Actor, UActorComponent* Component);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static void PlayGameplaySound2D(const UObject* WorldContextObject, USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, AActor* OwningActor);
    
    UFUNCTION(BlueprintPure)
    static bool IsXSXPlatform();
    
    UFUNCTION(BlueprintPure)
    static bool IsXScorpio();
    
    UFUNCTION(BlueprintPure)
    static bool IsXPlatform();
    
    UFUNCTION(BlueprintPure)
    static bool IsXOnePlatform();
    
    UFUNCTION(BlueprintPure)
    static bool IsXLockhart();
    
    UFUNCTION(BlueprintPure)
    static bool IsWindowsPlatform();
    
    UFUNCTION(BlueprintPure)
    static bool IsSwitchPlatform();
    
    UFUNCTION(BlueprintPure)
    static bool IsSonyPlatform();
    
    UFUNCTION(BlueprintPure)
    static bool IsScarletPlatform();
    
    UFUNCTION(BlueprintPure)
    static bool IsPs5Platform();
    
    UFUNCTION(BlueprintPure)
    static bool IsPS5Ext();
    
    UFUNCTION(BlueprintPure)
    static bool IsPs4Platform();
    
    UFUNCTION(BlueprintPure)
    static bool IsPIE();
    
    UFUNCTION(BlueprintPure)
    static bool IsMacPlatform();
    
    UFUNCTION(BlueprintPure)
    static bool IsLinuxPlatform();
    
    UFUNCTION(BlueprintPure)
    static bool IsConsolePlatform();
    
    UFUNCTION(BlueprintPure)
    static bool IsCommandlet();
    
    UFUNCTION(BlueprintPure)
    static bool IsButtonRightForAccept();
    
    UFUNCTION(BlueprintPure)
    static bool IsButtonBottomForAccept();
    
    UFUNCTION(BlueprintPure)
    static bool IsBuildShipping();
    
    UFUNCTION(BlueprintPure)
    static bool IsBuildEditor();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void DelayTicks(UObject* WorldContextObject, int32 Ticks, FLatentActionInfo LatentInfo);
    
};

