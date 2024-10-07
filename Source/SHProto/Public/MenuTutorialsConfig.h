#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ESHMenuTutorialEnum.h"
#include "MenuTutorial.h"
#include "MenuTutorialsConfig.generated.h"

UCLASS()
class UMenuTutorialsConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, EditFixedSize)
    TMap<ESHMenuTutorialEnum, FMenuTutorial> Tutorials;
    
    UMenuTutorialsConfig();

};

