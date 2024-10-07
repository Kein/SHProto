#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SaveManager.generated.h"

class USaveProvider;
class UTexture2D;

UCLASS()
class GAMEBASE_API USaveManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    USaveProvider* _Provider;
    
    UPROPERTY()
    UTexture2D* ScreenShot;
    
public:
    USaveManager();

};

