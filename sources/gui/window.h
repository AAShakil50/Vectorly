#pragma once

#if !defined(__GUI_WINDOW_H)
#define __GUI_WINDOW_H

#include "../imgui/imgui.h"

namespace GUI {
    /**
     * This class generate the splash window to show at the very beginning of the app launch
     */
    class SplashWindow {
    private:
        void m_build_menubar();
        void m_build_project_panel();
        void m_build_editor_panel();
        void m_build_timeline_panel();
    public:
        // Takes the ImGui instance and decorates it 
        SplashWindow();
        ~SplashWindow();
    };

}

#endif