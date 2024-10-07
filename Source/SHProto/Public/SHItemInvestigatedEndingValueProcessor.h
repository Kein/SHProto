#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SHEndingValueProcessor.h"
#include "SHItemInvestigatedEndingValueProcessor.generated.h"

class USHCharacterPlayItemsComponent;

UCLASS(Abstract, BlueprintType)
class SHPROTO_API USHItemInvestigatedEndingValueProcessor : public USHEndingValueProcessor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FDataTableRowHandle> MaryItems;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle AngelasKnifeItem;
    
public:
    USHItemInvestigatedEndingValueProcessor();

protected:
    UFUNCTION()
    void ProcessCollectedItemInvestigatedEvent(USHCharacterPlayItemsComponent* ComponentPtr, FName ItemContext);
    
};

