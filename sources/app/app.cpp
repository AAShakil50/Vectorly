#include"app.hh"
#include"../gui/splash_window.h"
#include"bits/unique_ptr.h"

app::App::App(){
    this->m_configurations = {
        std::make_unique<gui::SplashWindow>(gui::SplashWindow())
    };
}

app::App::~App(){
    
}

void app::App::draw(){
    this->m_configurations.window_manager->draw();
}