#pragma once
#include "CoreMinimal.h"
#include "SHFXComponent.h"
#include "SHMandarinUnderFXComponent.generated.h"

class USHFXVisualHPSubcompSettings;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHMandarinUnderFXComponent : public USHFXComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USHFXVisualHPSubcompSettings* VisualHPSettings;
    
public:
    USHMandarinUnderFXComponent(const FObjectInitializer& ObjectInitializer);

};

