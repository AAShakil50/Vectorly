#if !defined(__WINDOW_MANAGER_H__)
#define __WINDOW_MANAGER_H__
#pragma once

namespace gui{

// WindowManager contains every single information for a window
class WindowManager {
private:
public:
    virtual void draw();
};

} // namespace gui

#endif // __WINDOW_MANAGER_H__