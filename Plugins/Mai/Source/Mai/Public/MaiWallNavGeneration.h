#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "MaiWallNavGeneration.generated.h"

USTRUCT(BlueprintType)
struct MAI_API FMaiWallNavGeneration {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool _Synchronous;
    
    UPROPERTY(EditAnywhere)
    float _TileSize;
    
    UPROPERTY(EditAnywhere)
    float _CellSize;
    
    UPROPERTY(EditAnywhere)
    float _AgentHeight;
    
    UPROPERTY(EditAnywhere)
    float _AgentRadius;
    
    UPROPERTY(EditAnywhere)
    float _AgentMaxStepHeight;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<EObjectTypeQuery>> _ObjectTypeQueries;
    
    FMaiWallNavGeneration();
};

