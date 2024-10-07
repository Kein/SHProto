#pragma once
#include "CoreMinimal.h"
#include "DialogEntity.h"
#include "DialogTalkID.h"
#include "EventAnyDialogDelegate.generated.h"

class UDialogTalk;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEventAnyDialog, UDialogTalk*, DialogTalk, FDialogTalkID, talkID, const TArray<FDialogEntity>&, speakerIDs);

