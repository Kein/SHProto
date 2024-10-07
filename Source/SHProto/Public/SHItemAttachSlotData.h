#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SHItemAttachSlotData.generated.h"

USTRUCT(BlueprintType)
struct FSHItemAttachSlotData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector RelativeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector RelativeRotation;
    
    SHPROTO_API FSHItemAttachSlotData();
};

