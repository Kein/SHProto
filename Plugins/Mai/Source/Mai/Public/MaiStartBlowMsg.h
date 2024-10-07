#pragma once
#include "CoreMinimal.h"
#include "MaiMessage.h"
#include "Templates/SubclassOf.h"
#include "MaiStartBlowMsg.generated.h"

class UDamageType;

UCLASS(EditInlineNew)
class MAI_API UMaiStartBlowMsg : public UMaiMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TSubclassOf<UDamageType> _DamageType;
    
    UMaiStartBlowMsg();

};

