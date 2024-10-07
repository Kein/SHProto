#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "SHCharacterPlayLightingBase.generated.h"

UCLASS(Abstract)
class SHPROTO_API ASHCharacterPlayLightingBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLinearColor DefaultGlobalColor;
    
public:
    ASHCharacterPlayLightingBase(const FObjectInitializer& ObjectInitializer);

};

