#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "LoadingVideoOverlayWidget.generated.h"

class ULocalizedOverlays;

UCLASS(EditInlineNew)
class GAMEBASE_API ULoadingVideoOverlayWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    ULocalizedOverlays* Subtitles;
    
public:
    ULoadingVideoOverlayWidget();

    UFUNCTION(BlueprintImplementableEvent)
    void WorldIsFinallyLoaded();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetSubtitles(const FString& NewSubtitles);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ResetWorldLoadState();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ResetSubtitles();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnMovieTimeChanged(float MovieTime, const FString& MovieName);
    
    UFUNCTION(BlueprintCallable)
    void MovieTimeChanged(float MovieTime, const FString& MovieName);
    
};

