# SoundSnail

A C++ audio player framework using SDL2 and SDL2_mixer.

## Features

- Audio file playback
- Playback control (play, pause, stop, seek)
- Volume control
- Playback rate control

## Dependencies

- C++17
- CMake 3.10 or higher
- SDL2
- SDL2_mixer

## Building

```bash
mkdir build
cd build
cmake ..
make
```

## Project Structure

```
soundsnail_framework/
└── audio_player_module/
    └── model/
        ├── hpp/
        │   ├── AbstractAudioPlayer.hpp
        │   └── AudioPlayerState.hpp
        └── cpp/
            └── AudioPlayer.cpp
``` 