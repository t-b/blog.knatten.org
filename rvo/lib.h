#pragma once
#include "c.h"

#include <vector>

C getTemporaryC();
C getLocalC();
std::vector<C> getVectorOfC();

C URVO_complicated();
C NRVO_complicated();

