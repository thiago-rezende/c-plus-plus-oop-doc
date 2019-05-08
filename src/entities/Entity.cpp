#include "Entity.hpp"

namespace horus
{
Entity::Entity(std::string nName, std::string nInfo, core::vec3<float> nPos)
{
    setName(nName);
    setInfo(nInfo);
    setPosition(nPos);
}

Entity::Entity()
{
    setName("UNKNOWN");
    setInfo("UNKNOWN");
    setPosition(core::vec3<float>(0.0f, 0.0f, 0.0f));
}

Entity::~Entity()
{
}

// Getters/Setters
std::string Entity::getName()
{
    return this->m_name;
}

void Entity::setName(std::string nName)
{
    this->m_name = nName;
}

std::string Entity::getInfo()
{
    return this->m_info;
}

void Entity::setInfo(std::string nInfo)
{
    this->m_info = nInfo;
}

core::vec3<float> Entity::getPosition()
{
    return this->m_position;
}

void Entity::setPosition(core::vec3<float> nPos)
{
    this->m_position.set(nPos.x, nPos.y, nPos.z);
}

} // namespace horus
