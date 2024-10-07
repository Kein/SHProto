#pragma once
#include "CoreMinimal.h"
#include "SHLookAtTarget.generated.h"

class USHLookAtTypeID;
class USceneComponent;

USTRUCT(BlueprintType)
struct SHPROTO_API FSHLookAtTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export)
    TWeakObjectPtr<USceneComponent> SceneComponent;
    
    UPROPERTY(BlueprintReadOnly)
    TSoftClassPtr<USHLookAtTypeID> LookAtTypeID;
    
    FSHLookAtTarget();
};

