#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MaiNoiseSilencerComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAI_API UMaiNoiseSilencerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _MuteLevel;
    
    UMaiNoiseSilencerComponent(const FObjectInitializer& ObjectInitializer);

};

