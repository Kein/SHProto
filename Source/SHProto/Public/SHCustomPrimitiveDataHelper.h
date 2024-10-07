#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SHCustomPrimitiveDataHelper.generated.h"

class UPrimitiveComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHCustomPrimitiveDataHelper : public UActorComponent {
    GENERATED_BODY()
public:
    USHCustomPrimitiveDataHelper(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetFloatValue(UPrimitiveComponent* InComp, float InValue, int32 DataIndex);
    
    UFUNCTION(BlueprintCallable)
    void InterpFloatValue(UPrimitiveComponent* InComp, float StartValue, float EndValue, float InterpTime, int32 DataIndex);
    
};

