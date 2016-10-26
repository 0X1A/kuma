#ifndef _RW_H_
#define _RW_H_

#include "sdl_smart_ptr.h"

#include <SDL.h>

class RW {
public:
	RW() {}
	void from_mem(void *mem);
	void from_mem(const void *mem);
	void from_file(std::string path, std::string mode);
	SDL_RWops *get();
	RW(const RW &copy);
	RW &operator=(const RW &copy);

private:
	SharedRWPtr inner;
};

#endif
