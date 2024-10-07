#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "MaiLightData.h"
#include "MaiLightedActors.h"
#include "MaiLightsManager.generated.h"

class AActor;
class UMaiLightEmitter;
class UMaiLightObserver;
class UMaiLightsManager;
class UObject;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAI_API UMaiLightsManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TMap<TWeakObjectPtr<UMaiLightEmitter>, FMaiLightData> _AllLights;
    
    UPROPERTY(VisibleAnywhere)
    TMap<UMaiLightObserver*, FMaiLightedActors> _Observers;
    
    UPROPERTY(Export, VisibleAnywhere)
    TArray<TWeakObjectPtr<UMaiLightEmitter>> _DirtyLights;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    TArray<UMaiLightObserver*> _DirtyObservers;
    
    UMaiLightsManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool TestIsLit(AActor* observer, float Radius, float hheight, FVector Offset) const;
    
    UFUNCTION(BlueprintCallable)
    void RefreshLighting();
    
protected:
    UFUNCTION()
    void OnLightObserverChange(UMaiLightObserver* observer);
    
    UFUNCTION()
    void OnLightEmitterChange(UMaiLightEmitter* Light);
    
public:
    UFUNCTION(BlueprintPure)
    UMaiLightEmitter* GetLitLight(const UMaiLightObserver* observer) const;
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContext"))
    static UMaiLightsManager* getLightsManager(const UObject* WorldContext);
    
    UFUNCTION(BlueprintPure)
    bool GetIsLit(AActor* observer) const;
    
};

