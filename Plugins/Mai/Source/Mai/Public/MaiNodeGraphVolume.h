#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "MaiNodeGraphVolume.generated.h"

class UMaiNodeGraphComponent;

UCLASS()
class MAI_API AMaiNodeGraphVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, VisibleAnywhere)
    UMaiNodeGraphComponent* NodeGraph;
    
    AMaiNodeGraphVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RegenerateGraph();
    
};

