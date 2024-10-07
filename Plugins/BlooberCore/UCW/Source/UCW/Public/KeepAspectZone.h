#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ContentWidget.h"
#include "KeepAspectZone.generated.h"

UCLASS()
class UCW_API UKeepAspectZone : public UContentWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool PadLeft;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool PadRight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool PadTop;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool PadBottom;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D MinimumAspectRatio;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bKeepAspectBelowDesire;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D DesireAspectRatio;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D DesireAspectRatioUltraWide;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D DesireAspectRatioSuperUltraWide;
    
public:
    UKeepAspectZone();

    UFUNCTION(BlueprintCallable)
    void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom);
    
};

