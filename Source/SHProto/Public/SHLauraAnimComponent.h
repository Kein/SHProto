#pragma once
#include "CoreMinimal.h"
#include "SHAnimComponent.h"
#include "SHAnimHeadRotationBaseSubcompSettings.h"
#include "SHLauraAnimComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHLauraAnimComponent : public USHAnimComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSHAnimHeadRotationBaseSubcompSettings HeadRotationSettings;
    
public:
    USHLauraAnimComponent(const FObjectInitializer& ObjectInitializer);

};

