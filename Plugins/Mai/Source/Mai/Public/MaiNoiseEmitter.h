#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "MaiNoiseEmitter.generated.h"

class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAI_API UMaiNoiseEmitter : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _Aggro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _NoiseRange;
    
    UPROPERTY()
    float _Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _MaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _Loudness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _Period;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName _NoiseTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<AActor> _Instigator;
    
    UMaiNoiseEmitter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartNoise();
    
    UFUNCTION(BlueprintCallable)
    void MakeNoise();
    
    UFUNCTION(BlueprintCallable)
    void MakeLongNoise(float Duration);
    
    UFUNCTION(BlueprintCallable)
    void EndNoise();
    
};

