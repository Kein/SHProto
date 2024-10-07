#pragma once
#include "CoreMinimal.h"
#include "SHGameplayMapObjectComponent.h"
#include "SHGameplayMapDoorAttachmentComponent.generated.h"

class USHFocusableComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHGameplayMapDoorAttachmentComponent : public USHGameplayMapObjectComponent {
    GENERATED_BODY()
public:
    USHGameplayMapDoorAttachmentComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnFocusableSolved(USHFocusableComponent* FocusableComponent);
    
    UFUNCTION()
    void OnFocusableShown(USHFocusableComponent* FocusableComponent);
    
};

