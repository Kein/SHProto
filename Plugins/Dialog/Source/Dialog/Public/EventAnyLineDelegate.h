#pragma once
#include "CoreMinimal.h"
#include "DialogEntity.h"
#include "DialogLine.h"
#include "EventAnyLineDelegate.generated.h"

class UDialogTalk;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEventAnyLine, UDialogTalk*, DialogTalk, FDialogLine, lineID, FDialogEntity, speakerID);

