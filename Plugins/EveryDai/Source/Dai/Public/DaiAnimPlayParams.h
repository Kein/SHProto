#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "DaiAnimPlayParams.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct DAI_API FDaiAnimPlayParams : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag _Tag;
    
    UPROPERTY(EditAnywhere)
    uint8 _Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _Angle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimationAsset* _Anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _PlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _TimeToStartAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _BlendOutTriggerTime;
    
    UPROPERTY(EditAnywhere)
    bool _IsMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName _Section;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName _Slot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _BlendInTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _BlendOutTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector _SyncOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator _SyncRotation;
    
    FDaiAnimPlayParams();
};

