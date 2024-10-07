#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DialogDataTree.generated.h"

class UDialogData;

UCLASS()
class DIALOG_API UDialogDataTree : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleAnywhere)
    UDialogData* _DialogData;
    
    UDialogDataTree();

};

