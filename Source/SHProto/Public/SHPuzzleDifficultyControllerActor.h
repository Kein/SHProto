#pragma once
#include "CoreMinimal.h"
#include "SHActorsManagementBaseControllerActor.h"
#include "SHPuzzleDifficultyControllerActor.generated.h"

UCLASS(Abstract)
class SHPROTO_API ASHPuzzleDifficultyControllerActor : public ASHActorsManagementBaseControllerActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    bool bManagedActorsActiveInEasyDifficulty;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    bool bManagedActorsActiveInMediumDifficulty;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    bool bManagedActorsActiveInHardDifficulty;
    
public:
    ASHPuzzleDifficultyControllerActor(const FObjectInitializer& ObjectInitializer);

};

