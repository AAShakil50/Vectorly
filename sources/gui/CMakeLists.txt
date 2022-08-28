set(
    SOURCES
    window_manager.cpp
    splash_window.cpp
)

add_library(Gui STATIC ${SOURCES})
target_link_libraries(Gui PRIVATE ImGUI)