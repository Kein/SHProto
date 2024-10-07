#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlockDecorator.h"
#include "RichTextBlockTextWithBgrDecorator.generated.h"

class UDataTable;

UCLASS()
class UCW_API URichTextBlockTextWithBgrDecorator : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UDataTable* StyleSet;
    
public:
    URichTextBlockTextWithBgrDecorator();

};

