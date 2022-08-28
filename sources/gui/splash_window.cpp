#include"splash_window.h"
#include<math.h>

gui::SplashWindow::SplashWindow()  {
    ImGuiWindowFlags flags = ImGuiWindowFlags_Modal;
    flags | ImGuiWindowFlags_NoMove;

    // ImGui::ShowDemoWindow();
}

void gui::SplashWindow::draw() {
    this->m_build_menubar();
    this->m_build_project_panel();
    this->m_build_editor_panel();
    this->m_build_timeline_panel();
}

void gui::SplashWindow::m_build_menubar() {
    if(ImGui::BeginMainMenuBar()){
        if(ImGui::BeginMenu("File")){
            ImGui::MenuItem("New");
            ImGui::MenuItem("Open");
            ImGui::MenuItem("Save");
            ImGui::MenuItem("Save As");
            ImGui::EndMenu();
        }
        
        if(ImGui::BeginMenu("Edit")){
            ImGui::MenuItem("Copy");
            ImGui::MenuItem("Cut");
            ImGui::MenuItem("Paste");
            ImGui::EndMenu();
        }
        
        bool is_what_selected;

        if(ImGui::BeginMenu("View")){
            ImGui::MenuItem("Grid");
            ImGui::MenuItem("Panel");
            ImGui::MenuItem("FPS");
            ImGui::MenuItem("Label");
            ImGui::RadioButton("What Box?", &is_what_selected);
            ImGui::EndMenu();
        }
        
        ImGui::EndMainMenuBar();
    }
    
}

void gui::SplashWindow::m_build_project_panel() {
    if(ImGui::Begin("Editor", (bool *)__null, ImGuiWindowFlags_NoNav | ImGuiWindowFlags_NoCollapse)){
        ImGui::SetWindowPos(ImVec2(0, 20));
        int win_width = ImGui::GetWindowWidth();
        int win_height = ImGui::GetWindowHeight();
        
        ImGui::End();
    }
    
}

void gui::SplashWindow::m_build_editor_panel() {

}

void gui::SplashWindow::m_build_timeline_panel() {

}


gui::SplashWindow::~SplashWindow() {
}