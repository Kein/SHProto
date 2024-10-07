#pragma once
#include "CoreMinimal.h"
#include "BlooberAkRoomComponent.h"
#include "SHAkRoomComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHAkRoomComponent : public UBlooberAkRoomComponent {
    GENERATED_BODY()
public:
    USHAkRoomComponent(const FObjectInitializer& ObjectInitializer);

};

