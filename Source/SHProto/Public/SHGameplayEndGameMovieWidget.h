#pragma once
#include "CoreMinimal.h"
#include "SHGameplayEndGamePanelWidget.h"
#include "SHGameplayEndGameMovieWidget.generated.h"

class UBinkMediaPlayer;
class UImage;

UCLASS(EditInlineNew)
class USHGameplayEndGameMovieWidget : public USHGameplayEndGamePanelWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UImage* Movie_img;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UBinkMediaPlayer> MediaPlayer;
    
public:
    USHGameplayEndGameMovieWidget();

protected:
    UFUNCTION()
    void OnMediaReachedEnd();
    
};

