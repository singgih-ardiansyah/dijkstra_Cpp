#ifndef COLORS_HPP
#define COLORS_HPP
#include "SFML/Graphics.hpp"
#include <array>

inline std::array const colors = {
    sf::Color { 109, 254, 46 },
    sf::Color { 73, 252, 61 },
    sf::Color { 0, 250, 74 },
    sf::Color { 0, 248, 87 },
    sf::Color { 0, 245, 99 },
    sf::Color { 0, 243, 111 },
    sf::Color { 0, 240, 123 },
    sf::Color { 0, 237, 135 },
    sf::Color { 0, 234, 147 },
    sf::Color { 0, 230, 158 },
    sf::Color { 0, 227, 170 },
    sf::Color { 0, 223, 182 },
    sf::Color { 0, 220, 194 },
    sf::Color { 0, 216, 205 },
    sf::Color { 0, 212, 217 },
    sf::Color { 0, 208, 228 },
    sf::Color { 0, 204, 238 },
    sf::Color { 0, 200, 249 },
    sf::Color { 0, 196, 255 },
    sf::Color { 0, 192, 255 },
    sf::Color { 0, 187, 255 },
    sf::Color { 0, 183, 255 },
    sf::Color { 0, 179, 255 },
    sf::Color { 0, 174, 255 },
    sf::Color { 0, 169, 255 },
    sf::Color { 0, 164, 255 },
    sf::Color { 0, 159, 255 },
    sf::Color { 0, 153, 255 },
    sf::Color { 0, 148, 255 },
    sf::Color { 0, 141, 255 },
    sf::Color { 0, 135, 255 },
    sf::Color { 0, 128, 255 },
    sf::Color { 0, 121, 255 },
    sf::Color { 0, 113, 255 },
    sf::Color { 0, 105, 255 },
    sf::Color { 0, 96, 255 },
    sf::Color { 0, 86, 255 },
    sf::Color { 0, 75, 255 },
    sf::Color { 0, 63, 254 },
    sf::Color { 48, 47, 242 }
};

inline sf::Color const emptyColor { 100, 100, 100 };
inline sf::Color const obstacleColor { 0, 0, 0 };
inline sf::Color const shortestColor { 179, 108, 255 };
inline sf::Color const frontColor { 255, 182, 108 };
inline sf::Color const startColor { 0, 0, 255 };
inline sf::Color const endColor { 255, 0, 0 };

namespace {
sf::Color const& colorFromGradient(unsigned dist, unsigned maxDist)
{
    return colors[((colors.size() - 1) * dist) / maxDist];
}
}
#endif