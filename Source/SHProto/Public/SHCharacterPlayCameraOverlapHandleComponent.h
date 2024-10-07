#pragma once
#include "CoreMinimal.h"
#include "SHPlayerCameraOverlapReceiveComponent.h"
#include "SHCharacterPlayCameraOverlapHandleComponent.generated.h"

class ASHCharacterPlay;

UCLASS(BlueprintType, ClassGroup=Custom, Within=SHCharacterPlay, meta=(BlueprintSpawnableComponent))
class USHCharacterPlayCameraOverlapHandleComponent : public USHPlayerCameraOverlapReceiveComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinimumHiddenTime;
    
    UPROPERTY(Transient)
    ASHCharacterPlay* OwnerCharacterPlay;
    
public:
    USHCharacterPlayCameraOverlapHandleComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(Exec)
    void SHDebug_Character_CameraOverlapHandler_ValuesDebug();
    
};

