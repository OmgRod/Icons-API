#include <Geode/Geode.hpp>
#include <icons.hpp>

using namespace geode::prelude;

CCSprite* icons::getIconFromString(std::string icon) {
    return CCSprite::create(fmt::format("{}.png"_spr, icon).c_str());
}