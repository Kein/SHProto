#include "NodeGraphTester.h"
#include "MaiNodePathDrawer.h"

ANodeGraphTester::ANodeGraphTester(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_NodePath = CreateDefaultSubobject<UMaiNodePathDrawer>(TEXT("NodePath"));
}


