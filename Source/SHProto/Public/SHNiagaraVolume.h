#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Volume.h"
#include "SHNiagaraVolume.generated.h"

UCLASS(Abstract)
class SHPROTO_API ASHNiagaraVolume : public AVolume {
    GENERATED_BODY()
public:
    ASHNiagaraVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool IsPointWithin(FVector Point) const;
    
};

