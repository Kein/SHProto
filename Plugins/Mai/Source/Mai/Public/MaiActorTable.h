#pragma once
#include "CoreMinimal.h"
#include "MaiActorTable.generated.h"

class AActor;

USTRUCT()
struct MAI_API FMaiActorTable {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<AActor*> _Actors;
    
    FMaiActorTable();
};

