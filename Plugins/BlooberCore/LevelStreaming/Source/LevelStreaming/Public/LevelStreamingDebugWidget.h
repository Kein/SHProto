#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "StreamableLevel.h"
#include "StreamableLevelBatch.h"
#include "StreamableLevelDebugData.h"
#include "LevelStreamingDebugWidget.generated.h"

UCLASS(EditInlineNew)
class LEVELSTREAMING_API ULevelStreamingDebugWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FStreamableLevel PersistentLevel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FStreamableLevelDebugData> Data;
    
public:
    ULevelStreamingDebugWidget();

protected:
    UFUNCTION(BlueprintPure)
    FLinearColor SelectNextLineColor(const FStreamableLevelBatch& PreviousBatch, const FStreamableLevelBatch& NextBatch, const FLinearColor& CurrentColor, const FLinearColor& FirstColor, const FLinearColor& SecondColor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRefreshed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDataRecreated();
    
};

