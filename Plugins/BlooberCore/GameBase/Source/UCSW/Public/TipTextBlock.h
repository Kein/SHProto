#pragma once
#include "CoreMinimal.h"
#include "StyledRichTextBlock.h"
#include "TipTextBlock.generated.h"

UCLASS()
class UCSW_API UTipTextBlock : public UStyledRichTextBlock {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FText MKText;
    
    UPROPERTY(EditAnywhere)
    FText PadText;
    
    UPROPERTY(EditAnywhere)
    bool bAppendTextProperty;
    
public:
    UTipTextBlock();

    UFUNCTION(BlueprintCallable)
    void Refresh();
    
};

