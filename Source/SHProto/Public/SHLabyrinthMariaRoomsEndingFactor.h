#pragma once
#include "CoreMinimal.h"
#include "SHBoolEndingFactor.h"
#include "SHLabyrinthMariaRoomsEndingFactor.generated.h"

UCLASS(CollapseCategories, DefaultToInstanced, EditInlineNew)
class SHPROTO_API USHLabyrinthMariaRoomsEndingFactor : public USHBoolEndingFactor {
    GENERATED_BODY()
public:
    USHLabyrinthMariaRoomsEndingFactor();

    UFUNCTION(Exec)
    void SHDebug_Character_Endings_LabyrinthMariaRoomsEndingFactor_SetDebugValue(bool InValue);
    
};

