#pragma once

namespace sound_snail {

enum class AUDIO_PLAYER_STATE {
    // Initialization states
    NOT_INITIALIZED,   // Not initialized
    INITIALIZING,      // Initializing
    INITIALIZED,       // Initialization completed

    // Playback states
    PLAYING,           // Currently playing
    PAUSED,            // Paused
    STOPPED,           // Stopped
    SEEKING,           // Seeking position

    // Error states
    ERROR,             // General error
    DEVICE_ERROR,      // Audio device error
    FORMAT_ERROR,      // File format error
    BUFFER_ERROR       // Buffer error
};

} // namespace sound_snail 