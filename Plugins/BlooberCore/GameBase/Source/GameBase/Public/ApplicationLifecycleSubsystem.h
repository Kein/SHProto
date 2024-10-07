#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ApplicationLifecycleSubsystem.generated.h"

UCLASS()
class GAMEBASE_API UApplicationLifecycleSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UApplicationLifecycleSubsystem();

};

