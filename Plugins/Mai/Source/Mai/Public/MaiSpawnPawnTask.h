#pragma once
#include "CoreMinimal.h"
#include "MaiSlicedTask.h"
#include "MaiSpawnPawnTask.generated.h"

class AController;
class APawn;

UCLASS()
class UMaiSpawnPawnTask : public UMaiSlicedTask {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    AController* _Controller;
    
    UPROPERTY()
    APawn* _Pawn;
    
public:
    UMaiSpawnPawnTask();

};

