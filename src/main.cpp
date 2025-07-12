#include <Geode/DefaultInclude.hpp>

struct HookMenuLayer : geode::Modify<HookMenuLayer, MenuLayer> {
	bool init() {
		if (!MenuLayer::init())
			return false;

		geode::log::debug("Hello from MenuLayer::init!")

		return true;
	}
};