#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "QuestScriptInterface.generated.h"

class UQuest;

UINTERFACE(Blueprintable, MinimalAPI)
class UQuestScriptInterface : public UInterface {
    GENERATED_BODY()
};

class IQuestScriptInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    void QuestScriptByTag(const FGameplayTag& eventTag, UQuest* Quest, int32 userInteger, const FString& userString);
    
};

