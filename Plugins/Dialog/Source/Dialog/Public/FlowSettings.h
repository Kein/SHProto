#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DeveloperSettings.h"
#include "Templates/SubclassOf.h"
#include "FlowSettings.generated.h"

class AActor;
class UDialogChoiceSequenceObserver;
class UDialogData;
class UFlowDialogTemplate;
class UFlowEntityTemplate;
class UFlowHubTemplate;
class UFlowLineTemplate;
class UFlowObjectiveTemplate;
class UFlowQuestTemplate;

UCLASS(DefaultConfig, Config=Game)
class DIALOG_API UFlowSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UDialogData* _CachedData;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath _DefaultData;
    
public:
    UPROPERTY(Config, EditAnywhere)
    TSubclassOf<UDialogChoiceSequenceObserver> _ChoiceObserver;
    
    UPROPERTY(Config, EditAnywhere)
    TSubclassOf<AActor> _PlayerClass;
    
    UPROPERTY(Config, EditAnywhere)
    bool _PreloadVoices;
    
    UPROPERTY(Config, EditAnywhere)
    float _DefaultDelayAfterLine;
    
    UPROPERTY(Config, EditAnywhere)
    float _DistanceCheckPeriod;
    
    UPROPERTY(Config, EditAnywhere)
    float _PlayMaxDistance;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 _DefaultInterruptPriority;
    
    UPROPERTY(Config, EditAnywhere)
    bool _MarkUntranslatedTexts;
    
    UPROPERTY(Config, EditAnywhere)
    TSubclassOf<UFlowDialogTemplate> _DialogTemplate;
    
    UPROPERTY(Config, EditAnywhere)
    TSubclassOf<UFlowEntityTemplate> _EntityTemplate;
    
    UPROPERTY(Config, EditAnywhere)
    TSubclassOf<UFlowHubTemplate> _HubTemplate;
    
    UPROPERTY(Config, EditAnywhere)
    TSubclassOf<UFlowLineTemplate> _LineTemplate;
    
    UPROPERTY(Config, EditAnywhere)
    TSubclassOf<UFlowObjectiveTemplate> _ObjectiveTemplate;
    
    UPROPERTY(Config, EditAnywhere)
    TSubclassOf<UFlowQuestTemplate> _QuestTemplate;
    
    UFlowSettings();

};

