#pragma once
#include "CoreMinimal.h"
#include "Components/VerticalBox.h"
#include "ECreditsItemType.h"
#include "Templates/SubclassOf.h"
#include "UCWCreditsBox.generated.h"

class UCreditsConfig;
class UUCWCreditsImageRowWidget;
class UUCWCreditsRowWidget;

UCLASS()
class UCW_API UUCWCreditsBox : public UVerticalBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UCreditsConfig> CreditsRowSet;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, EditFixedSize)
    TMap<ECreditsItemType, TSubclassOf<UUCWCreditsRowWidget>> RowClasses;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UUCWCreditsRowWidget> HeaderWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UUCWCreditsRowWidget> OneColumnWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UUCWCreditsRowWidget> TwoColumnWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UUCWCreditsRowWidget> ThreeColumnWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UUCWCreditsImageRowWidget> ImageWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RowSpace;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool AutoWrapHeader;
    
public:
    UUCWCreditsBox();

};

