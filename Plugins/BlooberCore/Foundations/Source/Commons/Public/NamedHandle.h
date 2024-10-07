#pragma once
#include "CoreMinimal.h"
#include "NamedHandle.generated.h"

USTRUCT(BlueprintType)
struct COMMONS_API FNamedHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName Name;
    
    FNamedHandle();
};

