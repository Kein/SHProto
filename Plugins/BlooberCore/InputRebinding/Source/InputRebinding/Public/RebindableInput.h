#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BindingList.h"
#include "RebindableInput.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPreSaveCreation, URebindableInput*, RebindableInput);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPostSaveCreation, URebindableInput*, RebindableInput, UInputRebindingSaveData*, SaveData);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPreLoad, URebindableInput*, RebindableInput);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPostLoad, URebindableInput*, RebindableInput);

UCLASS()
class INPUTREBINDING_API URebindableInput : public UObject {
    GENERATED_BODY()
public:
protected:
    
    UPROPERTY(BlueprintAssignable)
    FPreSaveCreation PreSaveCreation;
    
    UPROPERTY(BlueprintAssignable)
    FPostSaveCreation PostSaveCreation;
    
    UPROPERTY(BlueprintAssignable)
    FPreLoad PreLoad;
    
    UPROPERTY(BlueprintAssignable)
    FPostLoad PostLoad;
    
    UPROPERTY()
    FBindingList BindingList;
    
public:
    URebindableInput();

};

