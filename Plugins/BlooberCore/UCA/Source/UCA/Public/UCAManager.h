#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UCAManager.generated.h"

class UUserWidget;

UCLASS()
class UCA_API UUCAManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, Transient)
    UUserWidget* DebugWidget;
    
    UUCAManager();

};

