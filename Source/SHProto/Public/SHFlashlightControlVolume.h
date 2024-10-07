#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "SHCharacterPlayLightingControlData.h"
#include "SHCharacterPlayRimLightingControlData.h"
#include "SHFlashlightControlData.h"
#include "SHMariaLightingControlData.h"
#include "SHFlashlightControlVolume.generated.h"

class UObject;

UCLASS()
class ASHFlashlightControlVolume : public AVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlendDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool BlendDistanceOnly2D;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 VolumePriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSHFlashlightControlData FlashlightControlData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSHCharacterPlayLightingControlData CharacterPlayLightingControlData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSHCharacterPlayRimLightingControlData CharacterPlayRimLightingControlData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSHMariaLightingControlData MariaLightingControlData;
    
public:
    ASHFlashlightControlVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDisabled(const bool bInDisabled, const UObject* Object);
    
    UFUNCTION(BlueprintPure)
    bool IsDisabled() const;
    
};

