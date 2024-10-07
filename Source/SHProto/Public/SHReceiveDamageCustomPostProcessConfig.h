#pragma once
#include "CoreMinimal.h"
#include "SHReceiveDamagePostProcessConfig.h"
#include "SHReceiveDamageCustomPostProcessConfig.generated.h"

USTRUCT(BlueprintType)
struct FSHReceiveDamageCustomPostProcessConfig : public FSHReceiveDamagePostProcessConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bMarkAsSplatterVignette;
    
    SHPROTO_API FSHReceiveDamageCustomPostProcessConfig();
};

