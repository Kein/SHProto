#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DialogVoices.generated.h"

class UDialogData;

UCLASS(Abstract, EditInlineNew)
class DIALOG_API UDialogVoices : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UDialogData* _DialogData;
    
    UDialogVoices();

};

