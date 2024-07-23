#pragma one
#include "library.hpp"
#include "letters.hpp"
#include <memory>

class LibraryManager
{
    public:
    LibraryManager(std::unique_ptr<Library> library) : library_(std::move(library)) {};

    void run_interface();
    void print_main_title(std::string title);

    private:
    
    std::unique_ptr<Library> library_;


};