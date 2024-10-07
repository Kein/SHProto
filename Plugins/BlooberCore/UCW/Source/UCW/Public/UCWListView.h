#pragma once
#include "CoreMinimal.h"
#include "Components/ListView.h"
#include "UCWListView.generated.h"

UCLASS()
class UCW_API UUCWListView : public UListView {
    GENERATED_BODY()
public:
    UUCWListView();

    UFUNCTION(BlueprintCallable)
    void SetEntrySpacing(float InEntrySpacing);
    
};

