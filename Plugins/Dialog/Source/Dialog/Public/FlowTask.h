#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DialogObjectID.h"
#include "FlowTask.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DIALOG_API UFlowTask : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleAnywhere)
    FDialogObjectID _FlowRef;
    
public:
    UFlowTask(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    FDialogObjectID GetFlowRef() const;
    
};

