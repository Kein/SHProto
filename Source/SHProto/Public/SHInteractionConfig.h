#pragma once
#include "CoreMinimal.h"
#include "ESHInteractionInputAxis.h"
#include "SHInteractionConfig.generated.h"

USTRUCT(BlueprintType)
struct FSHInteractionConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MouseRotationInputScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PadRotationInputScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MovementInputScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MouseCharacterRotationScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PadCharacterRotationScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CharacterMovementScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESHInteractionInputAxis InputAxis;
    
    SHPROTO_API FSHInteractionConfig();
};

