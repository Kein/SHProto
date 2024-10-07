#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DialogUI.generated.h"

class UDialogTalk;

UCLASS(Abstract, BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DIALOG_API UDialogUI : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleInstanceOnly)
    UDialogTalk* _DialogTalk;
    
    UDialogUI(const FObjectInitializer& ObjectInitializer);

};

