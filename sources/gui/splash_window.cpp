#include"splash_window.hh"
#include<unordered_map>
#include<string>
#include<vector>
#include<math.h>

gui::SplashWindow::SplashWindow() {
    ImGuiWindowFlags flags = ImGuiWindowFlags_NoMove;

    // ImGui::ShowDemoWindow();
}

void gui::SplashWindow::draw() {
    this->m_build_menubar();
    this->m_build_project_panel();
    this->m_build_editor_panel();
    this->m_build_timeline_panel();
}

void gui::SplashWindow::m_build_menubar() {
    // Main menu items to set up. Because unordered map add things to top.
    std::unordered_map<std::string,
        std::vector<std::string>> menu_objects;
    
    menu_objects["View"] = { "Grid", "Panel", "FPS" };
    menu_objects["Edit"] = { "Copy", "Cut", "Paste", "Bring to Front", "Send to Back" };
    menu_objects["File"] = { "New", "Open", "Save", "Save As" };

    if(ImGui::BeginMainMenuBar()){
        for(auto menu: menu_objects){
            if(ImGui::BeginMenu(menu.first.c_str())){
                for(auto menu_item: menu.second){
                    ImGui::MenuItem(menu_item.c_str());
                }
                ImGui::EndMenu();
            }
        }
        ImGui::EndMainMenuBar();
    }
    
}

void gui::SplashWindow::m_build_project_panel() {
    ImGuiWindowFlags flags = ImGuiWindowFlags_NoNav | ImGuiWindowFlags_NoCollapse
        | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoResize;

    if(ImGui::Begin("Editor", (bool *)__null, flags)){
        ImGui::SetWindowPos(ImVec2(0, 20));
        int win_width = 1280;
        int win_height = 720;
        ImGui::SetWindowSize(ImVec2(win_width, win_height - 20));
        
        ImGui::End();
    }
    
}

void gui::SplashWindow::m_build_editor_panel() {

}

void gui::SplashWindow::m_build_timeline_panel() {

}


gui::SplashWindow::~SplashWindow() {
}