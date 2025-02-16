#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>
#include <icons.hpp>

using namespace geode::prelude;
using namespace icons;

class $modify(MyMenuLayer, MenuLayer) {
public:
    bool init() {
        if (!MenuLayer::init()) {
            return false;
        }
        auto tools01 = icons::getIconFromString("tools_01");
        tools01->setPosition({ 100.f, 100.f });
        addChild(tools01);
        return true;
    }
};