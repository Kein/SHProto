#pragma once
#include "CoreMinimal.h"
#include "DaiContext.h"
#include "DaiContextGetter.h"
#include "Templates/SubclassOf.h"
#include "ProvideComponent.generated.h"

class UActorComponent;

UCLASS(EditInlineNew)
class DAI_API UProvideComponent : public UDaiContextGetter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FDaiContext _Actor;
    
    UPROPERTY()
    bool _LockClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UActorComponent> _Class;
    
    UPROPERTY(EditAnywhere)
    FName _Tag;
    
public:
    UProvideComponent();

};

