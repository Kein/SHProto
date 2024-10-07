#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LevelStreamingActorSerializer.generated.h"

UCLASS(Abstract, EditInlineNew)
class LEVELSTREAMING_API ULevelStreamingActorSerializer : public UObject {
    GENERATED_BODY()
public:
    ULevelStreamingActorSerializer();

};

