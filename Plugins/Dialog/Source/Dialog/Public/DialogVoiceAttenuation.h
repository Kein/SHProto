#pragma once
#include "CoreMinimal.h"
#include "DialogVoiceAttenuation.generated.h"

USTRUCT(BlueprintType)
struct DIALOG_API FDialogVoiceAttenuation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _EnableAttenuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _FalloffRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _FalloffDistance;
    
    FDialogVoiceAttenuation();
};

