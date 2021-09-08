project(game_number_lib)

set(HEADERS
        GameNumber.h
        )

set(SOURCES
        GameNumber.cpp
        )

add_library(${PROJECT_NAME} STATIC ${HEADERS} ${SOURCES})

