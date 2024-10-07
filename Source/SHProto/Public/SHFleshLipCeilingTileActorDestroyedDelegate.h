#pragma once
#include "CoreMinimal.h"
#include "SHFleshLipCeilingTileActorDestroyedDelegate.generated.h"

class ASHFleshLipCeilingTileActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHFleshLipCeilingTileActorDestroyed, ASHFleshLipCeilingTileActor*, CeilingTile);

