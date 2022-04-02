#include "apis.h"
// only Windows APIs are supported for libnfy. Sorry!
#if _WIN32
void play(const std::string& B) {
    PlaySound(B.c_str(), NULL, SND_FILENAME | SND_ASYNC);
}
#elif __unix__
#warning "UNIX APIs not working currently. You might have undefined behaviours."
#endif