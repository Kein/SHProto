#pragma once
#include "CoreMinimal.h"
#include "MovieSceneObjectBindingID.h"
#include "CharacterNoCollisionMode.h"
#include "CharacterBinding.generated.h"

class ACutsceneCharacterProxy;
class UObject;

USTRUCT(BlueprintType)
struct FCharacterBinding {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneObjectBindingID BindingID;
    
    UPROPERTY()
    FCharacterNoCollisionMode NoCollisionMode;
    
    UPROPERTY()
    UObject* Character;
    
    UPROPERTY()
    ACutsceneCharacterProxy* Proxy;
    
    CUTSCENES_API FCharacterBinding();
};

