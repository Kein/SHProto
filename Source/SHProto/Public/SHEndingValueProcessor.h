#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SHEndingValueProcessor.generated.h"

class USHCharacterPlayEndingsComponent;

UCLASS(Abstract)
class SHPROTO_API USHEndingValueProcessor : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, Transient)
    USHCharacterPlayEndingsComponent* OwnerComponent;
    
public:
    USHEndingValueProcessor();

};

