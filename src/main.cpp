#include "Thorium/Core/Core.hpp"
#include "Thorium/IO/Logger.hpp"
#include "SDL2/SDL.h"
#include <SDL2/SDL_log.h>

using namespace Thorium;

int main() {

    IO::Logger logger;
    if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
        logger.fatal(std::format("Cannot initialise SDL2: {}", SDL_GetError()));
        return -1;       
    }

    
}
