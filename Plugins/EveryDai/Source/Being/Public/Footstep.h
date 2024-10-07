#pragma once
#include "CoreMinimal.h"
#include "FootstepEffect.h"
#include "Footstep.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct BEING_API FFootstep {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UObject* _Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UObject* _BackSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _AINoiseModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FFootstepEffect> _Effects;
    
    UPROPERTY()
    TArray<FFootstepEffect> _LeftEffects;
    
    UPROPERTY()
    TArray<FFootstepEffect> _RightEffects;
    
    UPROPERTY()
    TArray<FFootstepEffect> _LeftBackEffects;
    
    UPROPERTY()
    TArray<FFootstepEffect> _RightBackEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _FoliagePlayProbability;
    
    FFootstep();
};

