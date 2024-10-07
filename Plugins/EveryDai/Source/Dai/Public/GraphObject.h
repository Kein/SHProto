#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GraphObject.generated.h"

class UGraphObject;

UCLASS(Abstract, BlueprintType)
class DAI_API UGraphObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName _ObjectName;
    
protected:
    UPROPERTY(Transient)
    UObject* _Context;
    
    UPROPERTY(TextExportTransient)
    UGraphObject* _Parent;
    
public:
    UGraphObject();

    UFUNCTION(BlueprintCallable)
    void SetRuntimeInfo(const FString& Text);
    
    UFUNCTION(BlueprintPure)
    FString GetRuntimeInfo() const;
    
    UFUNCTION(BlueprintPure)
    FString GetPropertiesDescription() const;
    
    UFUNCTION(BlueprintPure)
    FString getDisplayName() const;
    
};

