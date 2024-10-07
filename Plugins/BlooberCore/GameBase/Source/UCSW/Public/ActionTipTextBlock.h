#pragma once
#include "CoreMinimal.h"
#include "UE4InputHandle.h"
#include "StyledRichTextBlock.h"
#include "ActionTipTextBlock.generated.h"

UCLASS()
class UCSW_API UActionTipTextBlock : public UStyledRichTextBlock {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FUE4InputHandle action;
    
    UPROPERTY(Transient)
    FText OrginalText;
    
    UPROPERTY(EditAnywhere)
    bool bTextIsPattern;
    
    UPROPERTY(EditAnywhere)
    FString KeyTagText;
    
public:
    UActionTipTextBlock();

    UFUNCTION(BlueprintCallable)
    void Refresh();
    
};

