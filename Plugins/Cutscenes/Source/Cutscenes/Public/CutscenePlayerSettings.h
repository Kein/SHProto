#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DeveloperSettings.h"
#include "CutsceneToGameClassMap.h"
#include "CutscenePlayerSettings.generated.h"

UCLASS(BlueprintType, DefaultConfig, Config=Game)
class CUTSCENES_API UCutscenePlayerSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath SkipWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FCutsceneToGameClassMap CutsceneToGameClass;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    FName CharacterCutsceneSlotName;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    FName CharacterCutsceneFaceSlotName;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    FName CutsceneCharacterAnimGraphTag;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    FName CharacterMainMeshTag;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    float CharacterCutsceneBlendInTime;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    float CharacterCutsceneBlendOutTime;
    
public:
    UCutscenePlayerSettings();

};

