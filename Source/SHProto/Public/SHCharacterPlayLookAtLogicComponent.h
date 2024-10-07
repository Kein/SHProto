#pragma once
#include "CoreMinimal.h"
#include "SHCharacterLookAtLogicComponent.h"
#include "SHCharacterPlayLookAtLogicComponent.generated.h"

class ASHCharacterPlay;

UCLASS(ClassGroup=Custom, Within=SHCharacterPlay, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHCharacterPlayLookAtLogicComponent : public USHCharacterLookAtLogicComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    ASHCharacterPlay* CharacterPlay;
    
public:
    USHCharacterPlayLookAtLogicComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(Exec)
    void SHDebug_Character_LookAt_ValuesDebug();
    
    UFUNCTION(Exec)
    void SHDebug_Character_LookAt_DrawDebug();
    
};

