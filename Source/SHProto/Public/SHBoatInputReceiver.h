#pragma once
#include "CoreMinimal.h"
#include "SHInputReceiver.h"
#include "SHVehicleInputReceiver.h"
#include "SHBoatInputReceiver.generated.h"

UCLASS()
class SHPROTO_API USHBoatInputReceiver : public USHVehicleInputReceiver, public ISHInputReceiver {
    GENERATED_BODY()
public:
    USHBoatInputReceiver();


    // Fix for true pure virtual functions not being implemented
};

