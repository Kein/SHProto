#pragma once
#include "CoreMinimal.h"
#include "SHAnimEnviroHitReactionsSubcompSettings.h"
#include "SHAnimSubcomponentBase.h"
#include "SHAnimEnviroHitReactionsSubcomp.generated.h"

class UEnviroHitReactionEvent;
class UObject;

UCLASS(BlueprintType, EditInlineNew)
class SHPROTO_API USHAnimEnviroHitReactionsSubcomp : public USHAnimSubcomponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FSHAnimEnviroHitReactionsSubcompSettings Settings;
    
private:
    UPROPERTY()
    UEnviroHitReactionEvent* FrontHitEvent;
    
    UPROPERTY()
    UEnviroHitReactionEvent* SideHitEvent;
    
public:
    USHAnimEnviroHitReactionsSubcomp();

protected:
    UFUNCTION(Exec)
    void SHDebug_Character_AnimEnviroHitReactions_ValuesDebug();
    
    UFUNCTION(Exec)
    void SHDebug_Character_AnimEnviroHitReactions_DrawDebug();
    
public:
    UFUNCTION(BlueprintCallable)
    void BlockAnimEnviroHitSlideSnap(const bool Blocked, const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void BlockAnimEnviroHitReactions(const bool Blocked, const UObject* Object);
    
};

