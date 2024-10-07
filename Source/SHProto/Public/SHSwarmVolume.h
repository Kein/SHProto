#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Volume.h"
#include "SHSwarmVolume.generated.h"

UCLASS()
class SHPROTO_API ASHSwarmVolume : public AVolume {
    GENERATED_BODY()
public:
    ASHSwarmVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetColorShape(FColor ShapeColor, float Opacity, bool DisplayShadedVolume);
    
    UFUNCTION(BlueprintPure)
    bool IsPointWithin(FVector Point) const;
    
};

