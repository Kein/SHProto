#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "MaiDelayedMessage.h"
#include "MaiMessagesManager.generated.h"

UCLASS()
class MAI_API UMaiMessagesManager : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FMaiDelayedMessage> _DelayedMessages;
    
public:
    UMaiMessagesManager();

};

