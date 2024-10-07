#pragma once
#include "CoreMinimal.h"
#include "DialogTalkID.h"
#include "DialogEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDialogEvent, FDialogTalkID, talkID);

