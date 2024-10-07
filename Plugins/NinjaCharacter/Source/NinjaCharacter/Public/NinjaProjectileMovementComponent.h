#pragma once
#include "CoreMinimal.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "NinjaProjectileMovementComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NINJACHARACTER_API UNinjaProjectileMovementComponent : public UProjectileMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bFollowGravityDirection: 1;
    
    UNinjaProjectileMovementComponent(const FObjectInitializer& ObjectInitializer);

};

