#pragma once
#include "CoreMinimal.h"
#include "EQuestStatus.h"
#include "QuestFinishDelegate.generated.h"

class UQuest;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FQuestFinish, UQuest*, Quest, FText, Text, bool, Hidden, EQuestStatus, Status);

