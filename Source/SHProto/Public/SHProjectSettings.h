#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "SHProjectSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class USHProjectSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    USHProjectSettings();

};

