#pragma once
#include "CoreMinimal.h"
#include "Components/Border.h"
#include "SHMaterialPropertyControlHandler.h"
#include "SHCustomBorder.generated.h"

class USHMaterialPropertyControlSettings;

UCLASS()
class SHPROTO_API USHCustomBorder : public UBorder {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USHMaterialPropertyControlSettings* MaterialPropertyControlSettings;
    
    UPROPERTY(Transient)
    TArray<FSHMaterialPropertyControlHandler> MaterialPropertyControlHandlers;
    
public:
    USHCustomBorder();

    UFUNCTION(BlueprintCallable)
    void ManualTick(float InDeltaTime);
    
};

