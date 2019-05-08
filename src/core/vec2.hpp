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
struct vec2
{
    T x, y;

    /**
     * @brief Construct a new vec2 object
     *
     * @param nX X coordenate
     * @param nY Y coordenate
     */
    vec3(T nX, T nY)
    {
        this->x = nX;
        this->y = nY;
    }

    /**
     * @brief Construct a new empty vec2 object
     *
     */
    vec3()
    {
        this->x = 0;
        this->y = 0;
    }

    /**
     * @brief set the coordenates of vec2 object
     *
     * @param nX X coordenate
     * @param nY Y coordenate
     * @param nZ Z coordenate
     */
    void set(T nX, T nY)
    {
        this->x = nX;
        this->y = nY;
    }

    /**
     * @brief get the vec2 coordenates in string format
     *
     * @return std::string vec2 coordenates in string format
     */
    std::string toSting()
    {
        return "X: " + std::to_string(this->x) + " Y: " + std::to_string(this->y);
    }
};

} // namespace core
} // namespace horus
