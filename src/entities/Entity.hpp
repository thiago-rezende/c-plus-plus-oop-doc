#pragma once
#include <string>
#include "..\core\vec3.hpp"

namespace horus
{
/**
 * @brief Entity class
 *
 */
class Entity
{
private:
    // Member Variables
    std::string m_name;
    std::string m_info;
    core::vec3<float> m_position;

public:
    /**
     * @brief Construct a new Entity object
     *
     * @param nName name
     * @param nInfo info
     * @param nPos position
     */
    Entity(std::string nName, std::string nInfo, core::vec3<float> nPos);

    /**
     * @brief Construct a new empty Entity object
     *
     */
    Entity();

    /**
     * @brief Destroy the Entity object
     *
     */
    ~Entity();

    /**
     * @brief Get the Name object
     *
     * @return std::string name
     */
    std::string getName();

    /**
     * @brief Set the Name object
     *
     * @param nName name
     */
    void setName(std::string nName);

    /**
     * @brief Get the Info object
     *
     * @return std::string info
     */
    std::string getInfo();

    /**
     * @brief Set the Info object
     *
     * @param nInfo info
     */
    void setInfo(std::string nInfo);

    /**
     * @brief Get the Position object
     *
     * @return core::vec3<float> position
     */
    core::vec3<float> getPosition();

    /**
     * @brief Set the Position object
     *
     * @param nPos position
     */
    void setPosition(core::vec3<float> nPos);
};
} // namespace horus
