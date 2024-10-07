#pragma once
#include "CoreMinimal.h"
#include "Components/CanvasPanel.h"
#include "UCWTabPanel.generated.h"

UCLASS()
class UCW_API UUCWTabPanel : public UCanvasPanel {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText TabText;
    
    UUCWTabPanel();

};

