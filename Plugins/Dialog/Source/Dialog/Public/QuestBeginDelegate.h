#pragma once
#include "CoreMinimal.h"
#include "QuestBeginDelegate.generated.h"

class UQuest;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FQuestBegin, UQuest*, Quest, FText, Text, bool, Hidden);

