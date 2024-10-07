#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ReplicaInterface.generated.h"

UCLASS(DefaultConfig, Config=Game)
class DIALOG_API UReplicaInterface : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditDefaultsOnly)
    FString _User;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FString _Password;
    
    UPROPERTY(Config, EditDefaultsOnly)
    int32 _BitRate;
    
    UPROPERTY(Config, EditDefaultsOnly)
    int32 _SampleRate;
    
    UReplicaInterface();

};

