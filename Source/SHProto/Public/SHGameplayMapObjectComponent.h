#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "ESHMapObjectTypeEnum.h"
#include "SHMapDataConfigStruct.h"
#include "SHGameplayMapObjectComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHGameplayMapObjectComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    ESHMapObjectTypeEnum MapObjectType;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    FSHMapDataConfigStruct GameplayMapObjectConfig;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    TArray<FSHMapDataConfigStruct> AdditionalGameplayMapObjectConfigs;
    
public:
    USHGameplayMapObjectComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SendObjectDataToGameplayMap(int32 DataValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SendDynamicObjectDataToGameplayMap(FVector WorldLoc, int32 DataValue) const;
    
};

