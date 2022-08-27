set(
    MAIN_SOURCES
    main.cpp
)

add_subdirectory(imgui)
add_subdirectory(gui)

add_library(Main STATIC ${MAIN_SOURCES})
target_link_libraries(Main PRIVATE ImGUI)
target_link_libraries(Main PRIVATE Gui)
target_link_libraries(Main PRIVATE glfw GL)