#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MaiDebugPrintParams.generated.h"

USTRUCT(BlueprintType)
struct MAI_API FMaiDebugPrintParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _ToScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _ToLog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor _Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _IgnoreActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString _Category;
    
    FMaiDebugPrintParams();
};

