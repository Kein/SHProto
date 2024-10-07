#pragma once
#include "CoreMinimal.h"
#include "LevelStreamingActorSerializer.h"
#include "LevelStreamingActorSerializerDefault.generated.h"

class AActor;

UCLASS(EditInlineNew)
class LEVELSTREAMING_API ULevelStreamingActorSerializerDefault : public ULevelStreamingActorSerializer {
    GENERATED_BODY()
public:
    ULevelStreamingActorSerializerDefault();

protected:
    UFUNCTION()
    void DynamicActorOnBeginPlay(AActor* Actor);
    
};

