#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESHHitReactionHitType.h"
#include "ESHHitReactionResponseType.h"
#include "SHHitReactionHitData.generated.h"

class AActor;
class UDamageType;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct SHPROTO_API FSHHitReactionHitData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDamageType* DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESHHitReactionResponseType ResponseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ResponseVariant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DurationLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector HitForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESHHitReactionHitType HitType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector HitLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector SourceLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* DamageCauser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UPrimitiveComponent* HitComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName HitBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 HitBoneShapeIndex;
    
    FSHHitReactionHitData();
};

