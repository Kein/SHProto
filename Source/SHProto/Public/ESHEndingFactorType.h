#pragma once
#include "CoreMinimal.h"
#include "ESHEndingFactorType.generated.h"

UENUM(BlueprintType)
enum class ESHEndingFactorType : uint8 {
    Invalid,
    WoodsideCoinPuzzle,
    CityOWNeelysBarMessage,
    MaryItemsInvestigation,
    AngelasKnifeInvestigation,
    PrisonGallowPuzzle,
    HotelOWMirrorPuzzle,
    HotelFWPyramidHeadBossAftermath,
    HotelFWListenedSickbedConversation,
    WestCityFWInteractedAllAtHeavensNight,
    WestCityFWMariaRedirectionsComments,
    WestCityFWMariaInteractions,
    HospitalFWLyingMariaInteractions,
    LabyrinthMariaRooms,
    PyramidHeadBossFightOutcome,
    HotelFWKilledAllDefenselessEnemies,
    PlaythroughKilledEnemies,
    PlaythroughStompedDeadEnemies,
    PlaythroughMariaReceivedDamage,
    PlaythroughHealingExcess,
    PlaythroughBadHealth,
    AlreadySeenEndings,
    UFOEnding = 100,
    BlissEnding,
};

