#pragma once
#include "CoreMinimal.h"
#include "SHLookAtInteractionTargetProvider.h"
#include "SHCharacterPlayLookAtInteractionTargetProvider.generated.h"

UCLASS(EditInlineNew, Within=SHCharacterPlayLookAtLogicComponent)
class SHPROTO_API USHCharacterPlayLookAtInteractionTargetProvider : public USHLookAtInteractionTargetProvider {
    GENERATED_BODY()
public:
    USHCharacterPlayLookAtInteractionTargetProvider();

protected:
    UFUNCTION(Exec)
    void SHDebug_Character_LookAtInteraction_DrawDebug();
    
};

