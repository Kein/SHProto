#pragma once
#include "CoreMinimal.h"
#include "SHBoolEndingFactor.h"
#include "SHHospitalFWLyingMariaInteractionsEndingFactor.generated.h"

UCLASS(CollapseCategories, DefaultToInstanced, EditInlineNew)
class SHPROTO_API USHHospitalFWLyingMariaInteractionsEndingFactor : public USHBoolEndingFactor {
    GENERATED_BODY()
public:
    USHHospitalFWLyingMariaInteractionsEndingFactor();

    UFUNCTION(Exec)
    void SHDebug_Character_Endings_HospitalFWLyingMariaInteractionsEndingFactor_SetDebugValue(bool InValue);
    
};

