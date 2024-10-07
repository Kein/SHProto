#pragma once
#include "CoreMinimal.h"
#include "ESHHitReactionResponseType.h"
#include "SHHitReactionIdentifier.generated.h"

USTRUCT(BlueprintType)
struct SHPROTO_API FSHHitReactionIdentifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESHHitReactionResponseType ResponseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName VariantName;
    
    FSHHitReactionIdentifier();
};

