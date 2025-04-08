#pragma once

namespace sound_snail {

enum class PLAYBACK_RATE {
    SLOWER_2_0,        // 0.5x
    SLOWER_1_8,        // 0.55x
    SLOWER_1_6,        // 0.625x
    SLOWER_1_4,        // 0.714x
    SLOWER_1_2,        // 0.833x
    NORMAL,            // 1.0x
    FASTER_1_2,        // 1.2x
    FASTER_1_4,        // 1.4x
    FASTER_1_6,        // 1.6x
    FASTER_1_8,        // 1.8x
    FASTER_2_0         // 2.0x
};

} // namespace sound_snail 