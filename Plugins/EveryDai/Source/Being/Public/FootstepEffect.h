#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMoveDirection.h"
#include "FootstepEffect.generated.h"

class UBeingVertexAnim;
class UFXSystemAsset;
class UMaterialInstance;

USTRUCT(BlueprintType)
struct BEING_API FFootstepEffect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 _FootMask;
    
    UPROPERTY(EditAnywhere)
    EMoveDirection _MoveDirection;
    
    UPROPERTY(EditAnywhere)
    UFXSystemAsset* _Particle;
    
    UPROPERTY(EditAnywhere)
    TArray<UBeingVertexAnim*> _VertexAnims;
    
    UPROPERTY(EditAnywhere)
    UMaterialInstance* _DecalMaterial;
    
    UPROPERTY(EditAnywhere)
    float _DecalLifeTime;
    
    UPROPERTY(EditAnywhere)
    FVector _DecalSize;
    
    FFootstepEffect();
};

