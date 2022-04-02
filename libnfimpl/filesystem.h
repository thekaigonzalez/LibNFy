#include <fstream>
#include <iostream>

class NFySong {
    private:
        std::string songFile = "";
        bool G_DEBUG_FS = false;
    public:
        NFySong(const std::string& song);
        ~NFySong();
        void DebugFs();
        bool CheckDebugState();
        
};