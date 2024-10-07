#pragma once
#include "CoreMinimal.h"
#include "PerMaterialInfo.generated.h"

USTRUCT(BlueprintType)
struct FPerMaterialInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 NumberOfInstances;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ShellsCastShadow;
    
    INSTANCEDMESHEX_API FPerMaterialInfo();
};

