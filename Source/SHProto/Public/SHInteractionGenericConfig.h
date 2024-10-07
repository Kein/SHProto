#pragma once
#include "CoreMinimal.h"
#include "SHInteractionConfig.h"
#include "SHInteractionGenericConfig.generated.h"

class USHLookAtTypeID;

USTRUCT(BlueprintType)
struct FSHInteractionGenericConfig : public FSHInteractionConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableCharacterLookAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<USHLookAtTypeID> LookAtTypeID;
    
    SHPROTO_API FSHInteractionGenericConfig();
};

