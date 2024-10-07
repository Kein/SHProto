#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SpecialEvent.h"
#include "SpecialEvents.generated.h"

UCLASS(BlueprintType)
class GAMEBASE_API USpecialEvents : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSpecialEvent> Events;
    
    USpecialEvents();

};

