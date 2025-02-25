#include <Geode/Geode.hpp>
#include <icons.hpp>

using namespace geode::prelude;

CCSprite* icons::getSpriteFromString(std::string icon) {
    return CCSprite::create(fmt::format("{}.png"_spr, icon).c_str());
}

std::string icons::formatName(std::string name) {
    return fmt::format("{}"_spr, name);
}