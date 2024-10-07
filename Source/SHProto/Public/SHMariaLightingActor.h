#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "SHMariaLightingActor.generated.h"

class USpotLightComponent;

UCLASS(Abstract)
class SHPROTO_API ASHMariaLightingActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USpotLightComponent* SpotLightComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DefaultIntensity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLinearColor DefaultGlobalColor;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SourceOffset;
    
public:
    ASHMariaLightingActor(const FObjectInitializer& ObjectInitializer);

};

