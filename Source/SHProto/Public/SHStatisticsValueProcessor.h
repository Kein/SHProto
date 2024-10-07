#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SHStatisticsValueProcessor.generated.h"

class USHCharacterPlayStatisticsComponent;

UCLASS(Abstract)
class SHPROTO_API USHStatisticsValueProcessor : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, Transient)
    USHCharacterPlayStatisticsComponent* OwnerComponent;
    
public:
    USHStatisticsValueProcessor();

};

