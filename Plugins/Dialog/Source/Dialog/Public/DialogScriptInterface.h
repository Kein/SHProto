#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "DialogScriptInterface.generated.h"

class UDialogTalk;
class UObject;

UINTERFACE(Blueprintable, MinimalAPI)
class UDialogScriptInterface : public UInterface {
    GENERATED_BODY()
};

class IDialogScriptInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    void DialogScriptByTag(const FGameplayTag& eventTag, UDialogTalk* DialogTalk, int32 userInteger, const FString& userString, UObject* userAsset);
    
    UFUNCTION(BlueprintNativeEvent)
    void DialogScript(UDialogTalk* DialogTalk, uint8 EventType, int32 userInteger, const FString& userString);
    
};

