#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESHSuccessFailureEnum.h"
#include "SHCharacterStatics.generated.h"

class AActor;
class ACharacter;
class APawn;
class ASHCharacterPlay;
class UObject;

UCLASS(BlueprintType)
class USHCharacterStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USHCharacterStatics();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SwitchCharacterPlay(const UObject* WorldContextObject, ESHSuccessFailureEnum& Result, ASHCharacterPlay*& Character);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SetActorTeam(const UObject* WorldContextObject, APawn* PawnActor, FGenericTeamId TeamID);
    
    UFUNCTION(BlueprintPure)
    static bool IsCharacterOnGround(const ACharacter* CheckedCharacter);
    
    UFUNCTION(BlueprintPure)
    static bool IsCharacterKnockedDown(const ACharacter* CheckedCharacter);
    
    UFUNCTION(BlueprintPure)
    static bool IsCharacterInSyncAction(const ACharacter* CheckedCharacter);
    
    UFUNCTION(BlueprintPure)
    static bool IsCharacterInCutscene(const ACharacter* Character);
    
    UFUNCTION(BlueprintPure)
    static bool IsCharacterDead(const ACharacter* CheckedCharacter);
    
    UFUNCTION(BlueprintPure)
    static FVector GetTrueCharacterLocation(const AActor* InCharacterActor);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APawn* GetMariaPawn(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APawn* GetEddiePawn(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ASHCharacterPlay* GetCharacterPlay(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool CanCharacterBeFinished(const ACharacter* CheckedCharacter);
    
};

