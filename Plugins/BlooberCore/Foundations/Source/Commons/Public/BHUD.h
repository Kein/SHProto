#pragma once
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "BHUD.generated.h"

class UTexture2D;

UCLASS(NonTransient)
class COMMONS_API ABHUD : public AHUD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UTexture2D* CrosshairTex;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bDrawFPS;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bDrawFocus;
    
    ABHUD(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    int32 GetHitches() const;
    
    UFUNCTION(BlueprintPure)
    float GetAvgFps() const;
    
};

