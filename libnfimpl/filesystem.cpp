#include "filesystem.h"


NFySong::NFySong(const std::string& song)
{
    songFile = song;   
}

void NFySong::DebugFs()
{
    G_DEBUG_FS = !G_DEBUG_FS; /* switch */
}

NFySong::~NFySong()
{
    if (G_DEBUG_FS) {
        std::cout << "Unscoping " << songFile << std::endl;
    }
}
