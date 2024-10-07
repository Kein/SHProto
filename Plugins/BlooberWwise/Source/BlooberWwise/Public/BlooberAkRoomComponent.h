#pragma once
#include "CoreMinimal.h"
#include "AkRoomComponent.h"
#include "BlooberAkRoomComponent.generated.h"

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLOOBERWWISE_API UBlooberAkRoomComponent : public UAkRoomComponent {
    GENERATED_BODY()
public:
    UBlooberAkRoomComponent(const FObjectInitializer& ObjectInitializer);

};

