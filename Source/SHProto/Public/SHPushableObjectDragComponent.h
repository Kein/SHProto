#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SHPushableComponent.h"
#include "SHPushableObjectDragComponent.generated.h"

class USHPushableObjectDragComponent;
class USHPushingObjectAnimInstance;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHPushableObjectDragComponent : public USHPushableComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHPushableObjectDragComponentEvent, USHPushableObjectDragComponent*, Component);
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName MeshAttachSocketName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bEnforceAttachedOwnerRelativeTransform;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform AttachedOwnerRelativeTransform;
    
public:
    USHPushableObjectDragComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void ProcessMovementStoppedEvent(USHPushingObjectAnimInstance* AnimInst);
    
    UFUNCTION()
    void ProcessMovementStartedEvent(USHPushingObjectAnimInstance* AnimInst);
    
};

