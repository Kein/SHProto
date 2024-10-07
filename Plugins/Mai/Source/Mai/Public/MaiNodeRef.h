#pragma once
#include "CoreMinimal.h"
#include "MaiNodeRef.generated.h"

USTRUCT(BlueprintType)
struct MAI_API FMaiNodeRef {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString _Name;
    
    UPROPERTY(VisibleAnywhere)
    int32 _ID;
    
    FMaiNodeRef();
};

