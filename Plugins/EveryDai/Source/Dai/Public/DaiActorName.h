#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DaiActorName.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct DAI_API FDaiActorName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName _Name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AActor> _Class;
    
    FDaiActorName();
};

