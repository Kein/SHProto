#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ESHFocusableInputActionTypeEnum.h"
#include "SHInputKeyDataStruct.h"
#include "SHInputKeysData.generated.h"

UCLASS(BlueprintType)
class SHPROTO_API USHInputKeysData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<ESHFocusableInputActionTypeEnum, FSHInputKeyDataStruct> InputActionKeys;
    
    USHInputKeysData();

};

