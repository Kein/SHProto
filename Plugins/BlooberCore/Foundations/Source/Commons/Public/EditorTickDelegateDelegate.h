#pragma once
#include "CoreMinimal.h"
#include "EditorTickDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEditorTickDelegate, float, dt);

