#pragma once
#include "CoreMinimal.h"
#include "SettingOptionHandle.h"
#include "SettingOptionsBoxBase.h"
#include "SettingOptionsBox.generated.h"

UCLASS(EditInlineNew)
class UCSW_API USettingOptionsBox : public USettingOptionsBoxBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    TArray<FSettingOptionHandle> Options;
    
public:
    USettingOptionsBox();

};

