#pragma once

namespace horus
{
namespace core
{
/**
 * @brief A three-dimensional vector
 *
 * @tparam T vector type
 */
template <typename T>
struct vec3
{
    T x, y, z;

    /**
     * @brief Construct a new vec3 object
     *
     * @param nX X coordenate
     * @param nY Y coordenate
     * @param nZ Z coordenate
     */
    vec3(T nX, T nY, T nZ)
    {
        this->x = nX;
        this->y = nY;
        this->z = nZ;
    }

    /**
     * @brief Construct a new empty vec3 object
     *
     */
    vec3()
    {
        this->x = 0;
        this->y = 0;
        this->z = 0;
    }

    /**
     * @brief set the coordenates of vec3 object
     *
     * @param nX X coordenate
     * @param nY Y coordenate
     * @param nZ Z coordenate
     */
    void set(T nX, T nY, T nZ)
    {
        this->x = nX;
        this->y = nY;
        this->z = nZ;
    }

    /**
     * @brief get the vec3 coordenates in string format
     *
     * @return std::string vec3 coordenates in string format
     */
    std::string toSting()
    {
        return "X: " + std::to_string(this->x) + " Y: " + std::to_string(this->y) + " Z: " + std::to_string(this->z);
    }
};

} // namespace core
} // namespace horus
