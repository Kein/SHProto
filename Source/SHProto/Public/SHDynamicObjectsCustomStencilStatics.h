#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESHCustomStencilDynamicObject.h"
#include "SHDynamicObjectsCustomStencilStatics.generated.h"

class UPrimitiveComponent;

UCLASS(BlueprintType)
class USHDynamicObjectsCustomStencilStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USHDynamicObjectsCustomStencilStatics();

    UFUNCTION(BlueprintCallable)
    static void SetCustomStencilValue(UPrimitiveComponent* InDynamicObjectPrimitive, const ESHCustomStencilDynamicObject DynamicObjectType);
    
    UFUNCTION(BlueprintPure)
    static int32 GetCustomStencilValue(const ESHCustomStencilDynamicObject DynamicObjectType);
    
};

