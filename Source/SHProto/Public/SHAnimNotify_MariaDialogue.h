#pragma once
#include "CoreMinimal.h"
#include "DialogDialog.h"
#include "DialogInfo.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SHAnimNotify_MariaDialogue.generated.h"

UCLASS(CollapseCategories)
class SHPROTO_API USHAnimNotify_MariaDialogue : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDialogDialog DialogToPlay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDialogInfo DialogInfo;
    
    USHAnimNotify_MariaDialogue();

};

