#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DialogEntity.h"
#include "FlowItem.h"
#include "Templates/SubclassOf.h"
#include "FlowDialogLine.generated.h"

class UFlowLineTemplate;

UCLASS(EditInlineNew)
class DIALOG_API UFlowDialogLine : public UFlowItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UFlowLineTemplate> _TemplateClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDialogEntity _Speaker;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDialogEntity _DisplaySpeaker;
    
    UPROPERTY(EditAnywhere)
    FString _MenuText;
    
    UPROPERTY(EditAnywhere)
    FString _Text;
    
    UPROPERTY(EditAnywhere)
    FString _StageDirections;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _LockUpdate;
    
    UPROPERTY(EditAnywhere)
    bool _CustomLength;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSoftObjectPath _VoiceOver;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _LineLength;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _DelayAfterLine;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _OverrideDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _CanBeSkipped;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _Resumeable;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _ExclusiveSubtitles;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _OverrideShowingSubtitles;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _StartShowingSubtitles;
    
    UPROPERTY(EditAnywhere)
    uint8 _Loudness;
    
    UPROPERTY(EditAnywhere)
    FString _Mastering;
    
    UPROPERTY(EditAnywhere)
    FString _Note1;
    
    UPROPERTY(EditAnywhere)
    FString _Note2;
    
    UPROPERTY(EditAnywhere)
    FString _Note3;
    
    UFlowDialogLine();

};

