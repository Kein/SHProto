#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ActionDisplayInfo.h"
#include "AnalogAxisInfo.h"
#include "AxisDisplayInfo.h"
#include "InputState.h"
#include "ToggleableInfo.h"
#include "UE4InputHandle.h"
#include "MappingDisplayInfo.generated.h"

UCLASS()
class INPUTREBINDING_API UMappingDisplayInfo : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FActionDisplayInfo> ActionInfos;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FAxisDisplayInfo> AxisInfos;
    
    UPROPERTY(EditAnywhere)
    TArray<FToggleableInfo> Toggleable;
    
    UPROPERTY(EditAnywhere)
    TArray<FAnalogAxisInfo> AnalogAxisInfos;
    
    UPROPERTY(EditAnywhere)
    bool bUseInputStates;
    
    UPROPERTY(EditAnywhere)
    TArray<FInputState> InputStates;
    
    UPROPERTY(EditAnywhere)
    TMap<FUE4InputHandle, FInputState> ActionNonConflicts;
    
public:
    UMappingDisplayInfo();

};

