cmake_minimum_required(VERSION 3.10)
project(sound_snail)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 외부 라이브러리 찾기
find_package(SDL2 REQUIRED)
find_package(SDL2_mixer REQUIRED)

# 헤더 파일 디렉토리 설정
include_directories(${CMAKE_SOURCE_DIR}/soundsnail_framework/audio_player_module/model/hpp)
include_directories(${SDL2_INCLUDE_DIRS})
include_directories(${SDL2_MIXER_INCLUDE_DIRS})

# 소스 파일 목록
set(SOURCES
    soundsnail_framework/audio_player_module/model/cpp/AudioPlayer.cpp
)

# 실행 파일 생성
add_executable(${PROJECT_NAME} ${SOURCES})

# 라이브러리 링크
target_link_libraries(${PROJECT_NAME}
    ${SDL2_LIBRARIES}
    ${SDL2_MIXER_LIBRARIES}
) 