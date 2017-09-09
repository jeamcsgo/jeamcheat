#pragma once

#include "interfaces.h"
#include "Hacks/hacks.h"
#include "shortcuts.h"

#include "imgui/imgui.h"
#include "imgui/imgui_impl_sdl.h"
#include "imgui/imgui_internal.h"
#include "imgui/fonts/KaiGenGothicCNRegular.h"
//#include "imgui/fonts/RobotoMonoRegular.h"
#include "ATGUI/SegoeUI.h"


typedef void (*SDL_GL_SwapWindow_t) (SDL_Window*);
typedef int (*SDL_PollEvent_t) (SDL_Event*);

namespace SDL2
{
	void SwapWindow(SDL_Window*);
	void UnhookWindow();
	int PollEvent(SDL_Event*);
	void UnhookPollEvent();
}
