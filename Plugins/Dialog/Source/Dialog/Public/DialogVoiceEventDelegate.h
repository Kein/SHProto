#pragma once
#include "CoreMinimal.h"
#include "DialogVoiceEventDelegate.generated.h"

class USceneComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDialogVoiceEvent, USceneComponent*, voiceOver);

