#pragma once
#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "PathPointEventDelegate.h"
#include "Templates/SubclassOf.h"
#include "MaiFollowingComponent.generated.h"

class AMaiNavLink;
class UCharacterMovementComponent;
class UNavigationQueryFilter;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAI_API UMaiFollowingComponent : public UPathFollowingComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPathPointEvent StartMoveToPoint;
    
protected:
    UPROPERTY(EditAnywhere)
    float _OffsetFromCornersDistance;
    
    UPROPERTY(EditAnywhere)
    bool _UseViewLocation;
    
    UPROPERTY(Instanced, Transient)
    UCharacterMovementComponent* _CharacterMoveComp;
    
    UPROPERTY(AdvancedDisplay, Transient, VisibleAnywhere)
    TSubclassOf<UNavigationQueryFilter> _FilterClass;
    
    UPROPERTY(Transient)
    AMaiNavLink* _PortalOwner;
    
    UPROPERTY(EditAnywhere)
    bool _EnablePortals;
    
    UPROPERTY(EditAnywhere)
    float _PortalMaxDistance;
    
    UPROPERTY(EditAnywhere)
    bool _EnableShortcuts;
    
    UPROPERTY(EditAnywhere)
    float _ShourtcutDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UNavigationQueryFilter> _ShortcutFilterClass;
    
    UPROPERTY(EditAnywhere)
    bool _ObservePath;
    
    UPROPERTY(EditAnywhere)
    float _ObservePathPeriod;
    
public:
    UMaiFollowingComponent(const FObjectInitializer& ObjectInitializer);

};

