#pragma once
#include "animation.h"
#include "leds.h"
#include "visualization.h"

namespace pixelmap {

class FireVisualization : public Visualization {
  public:
    FireVisualization(Input* input, int size = 1);
    void update();
  private:
    byte* heat_;
};

} // end namespace pixelmap
