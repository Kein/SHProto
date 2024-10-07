#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ESHEndingType.h"
#include "Templates/SubclassOf.h"
#include "SHCharacterPlayEndingsComponentSettings.generated.h"

class USHEndingFactor;
class USHEndingValueProcessor;

UCLASS(BlueprintType)
class SHPROTO_API USHCharacterPlayEndingsComponentSettings : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<ESHEndingType, int32> InitialEndingsScoresMap;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    TArray<USHEndingFactor*> Factors;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSubclassOf<USHEndingValueProcessor>> CustomizedValueProcessors;
    
public:
    USHCharacterPlayEndingsComponentSettings();

};

