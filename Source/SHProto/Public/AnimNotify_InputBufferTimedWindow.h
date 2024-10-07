#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ESHInputBufferAction.h"
#include "AnimNotify_InputBufferTimedWindow.generated.h"

UCLASS(CollapseCategories)
class SHPROTO_API UAnimNotify_InputBufferTimedWindow : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WindowDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<ESHInputBufferAction> AllowedInputActionsToBuffer;
    
    UAnimNotify_InputBufferTimedWindow();

};

