#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "SHBloodPuddle.generated.h"

class UCurveFloat;
class UDecalComponent;
class UMaterialInstanceDynamic;

UCLASS(Abstract)
class ASHBloodPuddle : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UDecalComponent* DecalPuddle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* ErosionCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TimeToFillPuddle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName VisibleFactorParameterName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FadeAwayTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool EnableAutoFadeAway;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DelayToFadeAway;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool DestroyAfterFadeAway;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* DecalMaterialDynamic;
    
    UPROPERTY(SaveGame)
    FGuid OwnerCharacterGuid;
    
public:
    ASHBloodPuddle(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnInitialized();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFadeOutCompleted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFadeInCompleted();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsFullyDeveloped() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableFadeAway();
    
};

