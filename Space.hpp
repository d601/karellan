#ifndef __SPACE_H
#define __SPACE_H

#include <stdint.h>

class Space {
    uint64_t width, height, depth;
    uint16_t* cells;
    public:
        Space(uint64_t width, uint64_t height, uint64_t depth);
        ~Space();
};

#endif
