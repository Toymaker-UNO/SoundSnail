#pragma once

#include <string>
#include "AudioPlayerState.hpp"

namespace sound_snail {

class AbstractAudioPlayer {
public:
    virtual ~AbstractAudioPlayer() = default;

    virtual bool initialize(const std::string& a_file_path) = 0;
    virtual void finalize() = 0;

    virtual bool play() = 0;
    virtual bool pause() = 0;
    virtual bool stop() = 0;
    virtual bool seek(int a_position_ms) = 0;

    virtual AUDIO_PLAYER_STATE get_state() const = 0;

    virtual void set_volume(int a_volume) = 0;
    virtual int get_volume() const = 0;

    virtual int get_position() const = 0;
    virtual int get_duration() const = 0;

    virtual void set_playback_rate(float a_rate) = 0;
    virtual float get_playback_rate() const = 0;
};

} // namespace sound_snail 