#pragma once
#include "CoreMinimal.h"
#include "SectionRootMotion.h"
#include "MontageRootMotion.generated.h"

USTRUCT(BlueprintType)
struct BEING_API FMontageRootMotion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FSectionRootMotion> _Sections;
    
    FMontageRootMotion();
};

