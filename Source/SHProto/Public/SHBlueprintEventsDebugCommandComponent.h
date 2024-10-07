#pragma once
#include "CoreMinimal.h"
#include "SHBlueprintEventsBaseComponent.h"
#include "SHBlueprintEventsDebugCommandComponent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDebugCommandEvent, FString, Command, int32, Value);

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHBlueprintEventsDebugCommandComponent : public USHBlueprintEventsBaseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable)
    FDebugCommandEvent OnDebugCommand;
    
public:
    USHBlueprintEventsDebugCommandComponent(const FObjectInitializer& ObjectInitializer);

};

