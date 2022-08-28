#pragma once

#if !defined(__GUI_SPLASH_WINDOW_H)
#define __GUI_SPLASH_WINDOW_H

#include "../imgui/imgui.h"
#include "window_manager.hh"

namespace gui {
    /**
     * This class generate the splash window to show at the very beginning of the app launch
     */
    class SplashWindow: public gui::WindowManager{
    private:
        void m_build_menubar();
        void m_build_project_panel();
        void m_build_editor_panel();
        void m_build_timeline_panel();
    public:
        // Takes the ImGui instance and decorates it 
        SplashWindow();
        ~SplashWindow();

        // Overrides the base draw function to draw on the screen
        void draw() override;
    };

}

#endif