#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "SHCameraAnimationEventDelegate.h"
#include "SHCameraAnimationExecutive.generated.h"

class USHCineCameraComponent;

UCLASS()
class SHPROTO_API ASHCameraAnimationExecutive : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHCineCameraComponent* Camera;
    
public:
    UPROPERTY(BlueprintAssignable)
    FSHCameraAnimationEvent OnPlayed;
    
    UPROPERTY(BlueprintAssignable)
    FSHCameraAnimationEvent OnBlendOut;
    
    UPROPERTY(BlueprintAssignable)
    FSHCameraAnimationEvent OnStop;
    
    ASHCameraAnimationExecutive(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetLockCharacterAttachmentTransform(const FTransform& InTransform);
    
    UFUNCTION(BlueprintCallable)
    void SetLockCharacterAttachment(bool InLockCharacterAttachment);
    
    UFUNCTION(BlueprintCallable)
    void SetActorToAttachTo(AActor* InActorToAttachTo);
    
protected:
    UFUNCTION()
    void OnSequenceStopped();
    
};

