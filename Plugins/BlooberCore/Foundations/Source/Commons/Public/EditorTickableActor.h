#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EditorTickableActor.generated.h"

UCLASS()
class COMMONS_API AEditorTickableActor : public AActor {
    GENERATED_BODY()
public:
    AEditorTickableActor(const FObjectInitializer& ObjectInitializer);

};

