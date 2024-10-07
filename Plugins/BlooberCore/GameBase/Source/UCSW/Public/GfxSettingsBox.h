#pragma once
#include "CoreMinimal.h"
#include "GfxOptionHandle.h"
#include "SettingOptionsBoxBase.h"
#include "GfxSettingsBox.generated.h"

UCLASS(EditInlineNew)
class UCSW_API UGfxSettingsBox : public USettingOptionsBoxBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    TArray<FGfxOptionHandle> Options;
    
public:
    UGfxSettingsBox();

};

