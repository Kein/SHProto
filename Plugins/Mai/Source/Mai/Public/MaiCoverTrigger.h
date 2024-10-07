#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "MaiCoverTrigger.generated.h"

class UMaiCoverComponent;

UCLASS()
class MAI_API AMaiCoverTrigger : public ATriggerBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UMaiCoverComponent* _Cover;
    
    UPROPERTY(EditAnywhere)
    bool _FullCover;
    
    AMaiCoverTrigger(const FObjectInitializer& ObjectInitializer);

};

