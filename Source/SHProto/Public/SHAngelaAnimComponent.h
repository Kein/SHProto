#pragma once
#include "CoreMinimal.h"
#include "SHAnimComponent.h"
#include "SHAnimHeadRotationBaseSubcompSettings.h"
#include "SHAngelaAnimComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHAngelaAnimComponent : public USHAnimComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSHAnimHeadRotationBaseSubcompSettings HeadRotationSettings;
    
public:
    USHAngelaAnimComponent(const FObjectInitializer& ObjectInitializer);

};

