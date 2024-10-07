#pragma once
#include "CoreMinimal.h"
#include "ChromaAnimDef.h"
#include "ChromaAnimProxy.generated.h"

USTRUCT(BlueprintType)
struct FChromaAnimProxy {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 Channel;
    
    UPROPERTY(EditAnywhere)
    bool ReplaceAll;
    
    UPROPERTY(EditAnywhere)
    bool SendsEvent;
    
    UPROPERTY(EditAnywhere)
    bool LoopsEvent;
    
    UPROPERTY(EditAnywhere)
    bool PersistentEvent;
    
    UPROPERTY(EditAnywhere)
    TArray<FChromaAnimDef> Variants;
    
    UCCE_API FChromaAnimProxy();
};

