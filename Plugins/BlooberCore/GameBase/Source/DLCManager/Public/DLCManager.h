#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "DLCHandle.h"
#include "EDLCState.h"
#include "DLCManager.generated.h"

UCLASS(BlueprintType)
class DLCMANAGER_API UDLCManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UDLCManager();

    UFUNCTION(BlueprintPure)
    EDLCState GetDLCState(const FDLCHandle& Handle) const;
    
};

