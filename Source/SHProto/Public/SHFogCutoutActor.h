#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SHFogCutoutActor.generated.h"

class UObject;

UCLASS()
class SHPROTO_API ASHFogCutoutActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CutoutStencilNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Opacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EdgeFade;
    
public:
    ASHFogCutoutActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEnabled(const UObject* Enabler, bool InEnabled);
    
};

