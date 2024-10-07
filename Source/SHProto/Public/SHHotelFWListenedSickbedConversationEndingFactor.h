#pragma once
#include "CoreMinimal.h"
#include "SHBoolEndingFactor.h"
#include "SHHotelFWListenedSickbedConversationEndingFactor.generated.h"

UCLASS(CollapseCategories, DefaultToInstanced, EditInlineNew)
class SHPROTO_API USHHotelFWListenedSickbedConversationEndingFactor : public USHBoolEndingFactor {
    GENERATED_BODY()
public:
    USHHotelFWListenedSickbedConversationEndingFactor();

    UFUNCTION(Exec)
    void SHDebug_Character_Endings_HotelFWListenedSickbedConversationEndingFactor_SetDebugValue(bool InValue);
    
};

