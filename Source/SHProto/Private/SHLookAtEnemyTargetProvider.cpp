#include "SHLookAtEnemyTargetProvider.h"
#include "GameFramework/Character.h"

USHLookAtEnemyTargetProvider::USHLookAtEnemyTargetProvider() {
    this->MaxDistance = 500.00f;
    this->MaxAngle = 90.00f;
    this->AngleScoreCurve = NULL;
    this->EnemyClass = ACharacter::StaticClass();
    this->LastSelectedEnemy = NULL;
}


