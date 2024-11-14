//
// Created by ericg on 11/5/2024.
//

#ifndef MWINDOWEVENT_H
#define MWINDOWEVENT_H
#include <cstdint>

#include "../../../../MyWindowApi/include/mwindow/mwindow.h"
enum event_code : std::int32_t
{

};

struct MWindowEvent
{
    event_code code;
    std::int32_t lower;
    union
    {
        struct { std::int32_t x, y; };
        std::uint64_t upper;
    };
};


#endif //MWINDOWEVENT_H
