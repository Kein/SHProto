#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneCaptureComponent2D.h"
#include "SHFakeMirrorComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHFakeMirrorComponent : public USceneCaptureComponent2D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float MaxDistanceFromCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float ClippingPlaneOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector MirrorEntityOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector MirrorEntityRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector MirrorBaseNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    bool DrawContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DoNotMirror;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DoNotClip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 FrameCapture2DID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    bool DoNotCheckVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool GIShowFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AllowFakeInputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool FakePositionWhenNotVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector FakeCameraPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector FakeCameraRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float FakeCameraFOV;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    FVector MirrorCameraPosition;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    FVector MirrorCameraRotation;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    float MirrorCameraFOV;
    
    USHFakeMirrorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    float GetRenderFactor() const;
    
};

