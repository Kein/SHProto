#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Volume.h"
#include "ESHInteriorExteriorStateEnum.h"
#include "SHInteriorExteriorVolume.generated.h"

UCLASS()
class ASHInteriorExteriorVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESHInteriorExteriorStateEnum Value;
    
    ASHInteriorExteriorVolume(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintPure)
    bool IsPointWithin(FVector Point) const;
    
};

