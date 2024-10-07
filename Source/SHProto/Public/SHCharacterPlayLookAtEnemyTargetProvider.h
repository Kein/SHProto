#pragma once
#include "CoreMinimal.h"
#include "SHLookAtEnemyTargetProvider.h"
#include "SHCharacterPlayLookAtEnemyTargetProvider.generated.h"

UCLASS(EditInlineNew, Within=SHCharacterPlayLookAtLogicComponent)
class SHPROTO_API USHCharacterPlayLookAtEnemyTargetProvider : public USHLookAtEnemyTargetProvider {
    GENERATED_BODY()
public:
    USHCharacterPlayLookAtEnemyTargetProvider();

protected:
    UFUNCTION(Exec)
    void SHDebug_Character_LookAtEnemy_DrawDebug();
    
};

