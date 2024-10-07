#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SHMapObjectDataStruct.h"
#include "SHMapDynamicObjectDataStruct.generated.h"

USTRUCT(BlueprintType)
struct FSHMapDynamicObjectDataStruct : public FSHMapObjectDataStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FVector2D WorldLocation2D;
    
    SHPROTO_API FSHMapDynamicObjectDataStruct();
};

