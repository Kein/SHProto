#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SHLookAtTargetProvider.generated.h"

class USHCharacterLookAtLogicComponent;
class USHLookAtTypeID;

UCLASS(Abstract, BlueprintType, EditInlineNew)
class SHPROTO_API USHLookAtTargetProvider : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BlendInSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BlendOutSpeed;
    
private:
    UPROPERTY(Instanced, Transient)
    USHCharacterLookAtLogicComponent* LookAtLogic;
    
    UPROPERTY()
    TSoftClassPtr<USHLookAtTypeID> LookAtTypeID;
    
public:
    USHLookAtTargetProvider();

};

