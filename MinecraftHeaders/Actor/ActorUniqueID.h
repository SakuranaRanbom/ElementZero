#pragma once

#include <cstdint>
#include "../dll.h"

struct ActorUniqueID {
public:
  uint64_t value = 0;

  MCAPI static ActorUniqueID const INVALID_ID;

  inline ActorUniqueID() {}
  inline ActorUniqueID(uint64_t value) : value(value) {}
};