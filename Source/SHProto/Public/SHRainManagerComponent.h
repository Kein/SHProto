#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "SHRainManagerComponent.generated.h"

class ASHGameplayRainVolume;
class UObject;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHRainManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<ASHGameplayRainVolume*> RegisteredRainVolumes;
    
public:
    USHRainManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetRainSplashesBlocked(const bool IsBlock, const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void SetRainingBlocked(const bool IsBlock, const UObject* Object);
    
    UFUNCTION(BlueprintPure)
    bool IsRainSplashesBlockedBy(const UObject* Object) const;
    
    UFUNCTION(BlueprintPure)
    bool IsRainSplashesBlocked() const;
    
    UFUNCTION(BlueprintPure)
    bool IsRainingBlockedBy(const UObject* Object) const;
    
    UFUNCTION(BlueprintPure)
    bool IsRainingBlocked() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetRegisteredRainVolumeCount() const;
    
    UFUNCTION(BlueprintPure)
    ASHGameplayRainVolume* GetEncompassedRainVolume(const FVector& InLocation) const;
    
};

