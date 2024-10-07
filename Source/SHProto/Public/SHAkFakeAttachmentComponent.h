#pragma once
#include "CoreMinimal.h"
#include "SHAkComponent.h"
#include "SHAkFakeAttachmentComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHAkFakeAttachmentComponent : public USHAkComponent {
    GENERATED_BODY()
public:
    USHAkFakeAttachmentComponent(const FObjectInitializer& ObjectInitializer);

};

