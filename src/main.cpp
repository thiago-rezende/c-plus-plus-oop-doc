#include <iostream>
#include <entities\Entity.hpp>

int main(int argc, char **argv)
{
    horus::Entity *e = new horus::Entity("Player", "char_controller", horus::core::vec3<float>(10.0f, 5.0f, 20.0f));

    std::cout << "Name: " << e->getName() << std::endl;
    std::cout << "Info: " << e->getInfo() << std::endl;
    std::cout << "Position: " << e->getPosition().toSting() << std::endl;

    return 0;
}
