#ifndef GAMEBACKGROUNDLAYER_H_
#define GAMEBACKGROUNDLAYER_H_

#include "cocos2d.h"

class GameBackgroundLayer : public cocos2d::Layer
{
public:
	// Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
	virtual bool init() override;

	// implement the "static create()" method manually
	CREATE_FUNC(GameBackgroundLayer);
private:
	cocos2d::Sprite* background1;
	// cocos2d::Size visibleSize;

};

#endif /* GAMEBACKGROUNDLAYER_H_ */