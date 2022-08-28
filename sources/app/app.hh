#if !defined(__APP_APP_H__)
#define __APP_APP_H__
#pragma once

#include"../gui/window_manager.hh"
#include<bits/unique_ptr.h>

namespace app {
    /**
     * Contains app configurations, e.g. theme color, laid windows
     */
    struct AppConfiguration{
        // default window manager to manage the window
         std::unique_ptr<gui::WindowManager> window_manager;
    };
    /**
     * App class is the entry point of the app, which starts the app,
     * keeps track of all configurations, draws the window.
     */
    class App {
    private:
        // Main configuration across the application
        AppConfiguration m_configurations;

    public:
        /**
         * Constructs a new App object. Generates default values.
         */
        App();
        ~App();

        /**
         * Draws the application with required configurations. This will be in loop,
         */
        void draw();
    };

} // namespace app

#endif // __APP_APP_H__