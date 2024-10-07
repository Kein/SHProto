#pragma once
#include "CoreMinimal.h"
#include "MaiTokenLocks.generated.h"

class AActor;

USTRUCT()
struct MAI_API FMaiTokenLocks {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    AActor* _Actor;
    
    UPROPERTY(EditAnywhere)
    FName _Lock;
    
    FMaiTokenLocks();
};

