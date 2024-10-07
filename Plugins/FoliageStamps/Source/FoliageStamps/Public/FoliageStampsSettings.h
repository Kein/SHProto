#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "FoliageStampsSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class FOLIAGESTAMPS_API UFoliageStampsSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UFoliageStampsSettings();

};

