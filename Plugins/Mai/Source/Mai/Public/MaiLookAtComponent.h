#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ArrowComponent.h"
#include "MaiLookAtData.h"
#include "MaiLookAtComponent.generated.h"

class AActor;
class USceneComponent;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAI_API UMaiLookAtComponent : public UArrowComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _LoseRanageExt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _HeadPitchOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _HeadYawOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _HeadRotationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _ConstantInterp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _Debug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _Enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _ExceedingLimit;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    TArray<FMaiLookAtData> _LookAtData;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    FRotator _HeadLocalRotation;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    FRotator _TargetLocalRotation;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    int32 _CurrentPriority;
    
public:
    UMaiLookAtComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetLookAtRotation(FRotator Rotation, float MaxRange, uint8 Priority);
    
    UFUNCTION(BlueprintCallable)
    void LookAtLocation(FVector Location, float MaxRange, uint8 Priority);
    
    UFUNCTION(BlueprintCallable)
    void LookAtComponent(USceneComponent* comp, float MaxRange, uint8 Priority);
    
    UFUNCTION(BlueprintCallable)
    void LookAtActor(AActor* Actor, float MaxRange, uint8 Priority);
    
    UFUNCTION(BlueprintPure)
    bool IsLookAtEnabled() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetLookAtRotation(uint8 Priority) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLookAtLocation(uint8 Priority) const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetLookAtActor(uint8 Priority) const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetHeadLocalRotation() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableLookAt(int32 Priority);
    
    UFUNCTION(BlueprintCallable)
    void DisableLookAt(int32 Priority);
    
    UFUNCTION(BlueprintCallable)
    void ClearLookAt(int32 Priority);
    
};

