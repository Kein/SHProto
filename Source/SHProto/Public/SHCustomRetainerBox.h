#pragma once
#include "CoreMinimal.h"
#include "Components/RetainerBox.h"
#include "SHMaterialPropertyControlHandler.h"
#include "SHCustomRetainerBox.generated.h"

class USHMaterialPropertyControlSettings;

UCLASS()
class SHPROTO_API USHCustomRetainerBox : public URetainerBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USHMaterialPropertyControlSettings* MaterialPropertyControlSettings;
    
    UPROPERTY(Transient)
    TArray<FSHMaterialPropertyControlHandler> MaterialPropertyControlHandlers;
    
public:
    USHCustomRetainerBox();

    UFUNCTION(BlueprintCallable)
    void ManualTick(float InDeltaTime);
    
};

