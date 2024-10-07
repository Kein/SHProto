#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MaiNoiseEvent.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct MAI_API FMaiNoiseEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector NoiseLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Aggro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NoiseRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Loudness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* IgnoreActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Tag;
    
    FMaiNoiseEvent();
};

