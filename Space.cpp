#include <stdint.h>
#include "Space.hpp"

Space::Space(uint64_t width, uint64_t height, uint64_t depth)
{
    this->width = width;
    this->height = height;
    this->depth = depth;
    cells = new uint16_t[width * height * depth];
}
