#pragma once
#include "CoreMinimal.h"
#include "SHFleshLipCeilingTileActorDisconnectedDelegate.generated.h"

class ASHFleshLipCeilingTileActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHFleshLipCeilingTileActorDisconnected, ASHFleshLipCeilingTileActor*, CeilingTile);

