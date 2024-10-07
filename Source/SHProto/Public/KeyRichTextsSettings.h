#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "KeyRichTextsSettings.generated.h"

class UKeyRichTexts;

UCLASS(DefaultConfig, Config=Game)
class UKeyRichTextsSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UKeyRichTexts> KeyRichTexts;
    
public:
    UKeyRichTextsSettings();

};

