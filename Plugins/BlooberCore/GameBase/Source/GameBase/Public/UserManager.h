#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UserManager.generated.h"

class ULocalPlayer;

UCLASS()
class GAMEBASE_API UUserManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    ULocalPlayer* OwningUser;
    
public:
    UUserManager();

};

