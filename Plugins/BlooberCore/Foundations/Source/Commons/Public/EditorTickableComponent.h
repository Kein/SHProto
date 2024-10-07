#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EditorTickDelegateDelegate.h"
#include "EditorTickableComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class COMMONS_API UEditorTickableComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bEditorOnlyTick;
    
    UPROPERTY(BlueprintAssignable)
    FEditorTickDelegate EditorTick;
    
    UEditorTickableComponent(const FObjectInitializer& ObjectInitializer);

};

