#pragma once
#include "CoreMinimal.h"
#include "Perception/AISense.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "MaiNoiseEvent.h"
#include "Templates/SubclassOf.h"
#include "MaiSense_Hearing.generated.h"

class AActor;
class UNavigationQueryFilter;
class UObject;

UCLASS(DefaultConfig, Config=Game)
class MAI_API UMaiSense_Hearing : public UAISense {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FMaiNoiseEvent> NoiseEvents;
    
    UPROPERTY(Config, EditAnywhere)
    float SpeedOfSound;
    
    UPROPERTY(Config, EditAnywhere)
    float DefaultMuteLevel;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<ECollisionChannel> DefaultHearingCollisionChannel;
    
    UPROPERTY(Config, EditAnywhere)
    bool UseNavMesh;
    
    UPROPERTY(Config, EditAnywhere)
    bool CheckNavCost;
    
    UPROPERTY(Config, EditAnywhere)
    TSubclassOf<UNavigationQueryFilter> SoundNavigationFilter;
    
public:
    UMaiSense_Hearing();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void ReportNoiseEvent(UObject* WorldContext, FVector NoiseLocation, AActor* Instigator, FName Tag, float Aggro, float NoiseRange, float MaxRange, float Loudness, AActor* IgnoreActor);
    
};

