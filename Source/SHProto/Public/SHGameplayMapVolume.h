#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "ESHMapsEnum.h"
#include "SHGameplayMapVolume.generated.h"

UCLASS()
class ASHGameplayMapVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESHMapsEnum Map;
    
    ASHGameplayMapVolume(const FObjectInitializer& ObjectInitializer);

};

