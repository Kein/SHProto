#pragma once
#include "CoreMinimal.h"
#include "Components/CanvasPanel.h"
#include "EStartGamePanelPlatform.h"
#include "StartGamePanel.generated.h"

UCLASS()
class GAMEBASE_API UStartGamePanel : public UCanvasPanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EStartGamePanelPlatform TargetPlatform;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCanBeOmittedInFastForward;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxTimer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinInputTimer;
    
    UStartGamePanel();

};

