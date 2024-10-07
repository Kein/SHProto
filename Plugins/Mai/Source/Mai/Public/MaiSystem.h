#pragma once
#include "CoreMinimal.h"
#include "AISystem.h"
#include "MaiSystem.generated.h"

class UMaiNodeSystem;
class UMaiWallSystem;
class UShapeComponent;

UCLASS()
class MAI_API UMaiSystem : public UAISystem {
    GENERATED_BODY()
public:
    UPROPERTY()
    UMaiNodeSystem* _NodeSystem;
    
    UPROPERTY()
    UMaiWallSystem* _WallSystem;
    
    UPROPERTY(Instanced)
    TArray<UShapeComponent*> _NarrowAreas;
    
    UPROPERTY(Instanced)
    TArray<UShapeComponent*> _NarrowTriggers;
    
    //UMaiSystem();

};

