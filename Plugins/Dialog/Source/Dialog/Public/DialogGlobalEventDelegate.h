#pragma once
#include "CoreMinimal.h"
#include "DialogEntity.h"
#include "DialogTalkID.h"
#include "DialogGlobalEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDialogGlobalEvent, FDialogEntity, speaker, FDialogTalkID, talk);

