#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MovieScenePossessable.h"
#include "SHDynamicWidgetAnimStatics.generated.h"

class UMovieScene;

UCLASS()
class SHPROTO_API USHDynamicWidgetAnimStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USHDynamicWidgetAnimStatics();

    UFUNCTION()
    static bool SHReplacePossessable(UMovieScene* InMovieScene, const FGuid& OldGuid, const FMovieScenePossessable& InNewPossessable);
    
};

