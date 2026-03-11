#include <iostream>

int main() {
    SaveGame save;

    if(!save.load("Profile.sav")) {
        std::cout << "Nu s-a putut incarca save-ul\n";
        return 1;
    }

    std::cout << "Save incarcat\n";

    save.save("Profile_copy.sav");

    std::cout << "Save rescris\n";

    return 0;
}