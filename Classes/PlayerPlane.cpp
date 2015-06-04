#include "PlayerPlane.h"

USING_NS_CC;

PlayerPlane::PlayerPlane() 
{
	log("PlayerPlane()");
}

void PlayerPlane::onEnter()
{
	BasePlayer::onEnter();
	auto particle = ParticleSystemQuad::create("Tail.plist");
	this->addChild(particle);
}

// PlayerPlane* PlayerPlane::create(float x, float y)
// {
// 	PlayerPlane *pRet = new(std::nothrow) PlayerPlane(float x, float y);
// 	CALL_INIT();
// }


// bool PlayerPlane::init()
// {
// 	if (!BasePlayer::init())
// 	{
// 		return false;
// 	}
// 	return true;
// }

// PlayerPlane* PlayerPlane::create()
// {
// 	PlayerPlane* pRet = new(std::nothrow) PlayerPlane();
// 	CALL_INIT();
// }

// void PlayerPlane::update(float deltaTime)
// {
// 	// log("LinearDamping: %f", physicsBody->getLinearDamping());
// 	// log("PlayerPlane X: %f Y: %f", this->getPositionX(), this->getPositionY());
// 	
// }