set(
    SOURCES
    app.cpp
)

add_library(App STATIC ${SOURCES})
target_link_libraries(App PRIVATE Gui)