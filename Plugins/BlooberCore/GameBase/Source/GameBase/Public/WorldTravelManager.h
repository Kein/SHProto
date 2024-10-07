#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "LevelStreamingRequestHandle.h"
#include "WorldTravelManager.generated.h"

class ULoadScreenWidget;
class ULoadingVideoOverlayWidget;
class UMovieConfig;

UCLASS()
class GAMEBASE_API UWorldTravelManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FLevelStreamingRequestHandle> TravelStreamingRequests;
    
    UPROPERTY()
    UMovieConfig* LoadingMovie;
    
    UPROPERTY(Instanced)
    ULoadScreenWidget* LoadScreenWidget;
    
    UPROPERTY(Instanced)
    ULoadingVideoOverlayWidget* LoadScreenOverlay;
    
public:
    UWorldTravelManager();

};

