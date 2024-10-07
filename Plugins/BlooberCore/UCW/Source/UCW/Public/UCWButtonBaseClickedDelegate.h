#pragma once
#include "CoreMinimal.h"
#include "UCWButtonBaseClickedDelegate.generated.h"

class UUCWButtonBase;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUCWButtonBaseClicked, UUCWButtonBase*, Button);

