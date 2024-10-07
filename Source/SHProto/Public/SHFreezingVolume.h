#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Volume.h"
#include "SHFreezingVolume.generated.h"

UCLASS()
class ASHFreezingVolume : public AVolume {
    GENERATED_BODY()
public:
    ASHFreezingVolume(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintPure)
    bool IsPointWithin(FVector Point) const;
    
};

