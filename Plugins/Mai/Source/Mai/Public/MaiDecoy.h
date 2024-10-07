#pragma once
#include "CoreMinimal.h"
#include "MaiPointOfInterest.h"
#include "MaiDecoy.generated.h"

class UBeingVisibilityLevelStat;
class UMaiLightEmitter;
class UMaiNoiseEmitter;

UCLASS()
class MAI_API AMaiDecoy : public AMaiPointOfInterest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UMaiLightEmitter* _LightEmitter;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UMaiNoiseEmitter* _NoiseEmitter;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UBeingVisibilityLevelStat* _VisibilityLevel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _Hearable;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _Visible;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _Smelly;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool _NoiseEnabled;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool _VisibilityEnabled;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool _OdorEnabled;
    
    AMaiDecoy(const FObjectInitializer& ObjectInitializer);

};

