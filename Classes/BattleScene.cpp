#include "BattleScene.h"
#include "cocostudio/CocoStudio.h"
#include "ConfigUtil.h"
#include "Controller.h"

USING_NS_CC;

BattleScene* BattleScene::battleScene = nullptr;
UILayer* BattleScene::uiLayer = nullptr;
CameraNode* BattleScene::cameraNode = nullptr;

BattleScene::BattleScene()
{
	battleScene = this;
}

BattleScene::~BattleScene()
{
	uiLayer = nullptr;
	cameraNode = nullptr;
	battleScene = nullptr;
}

bool BattleScene::init()
{
	if (!Scene::init())
	{
		return false;
	}

	// ��ʼ����������
	if (!this->initWithPhysics())
	{
		return false;
	}

	// Set Physics Debug Mode
	this->getPhysicsWorld()->setDebugDrawMask(PhysicsWorld::DEBUGDRAW_ALL);

	// ��Ϸ�������ڵ�
	auto controller = Controller::create();
	// ��Ϸ���ڵ�
	cameraNode = CameraNode::create();
	cameraNode->setPosition(Vec2(ConfigUtil::visibleWidth / 2, ConfigUtil::visibleHeight / 2));
	cameraNode->setParent(this);
	
	// UI��
	uiLayer = UILayer::create();
	uiLayer->setParent(this);

	this->addChild(controller);
	this->addChild(cameraNode);
	this->addChild(uiLayer);

	// auto lable = Label::createWithTTF("Label", "fonts/Marker Felt.ttf", 32);
	// lable->setPosition(200, 200);
	// this->addChild(lable, 2);

	return true;
}

UILayer* BattleScene::getUILayer()
{
	return this->uiLayer;
}

CameraNode* BattleScene::getCameraLayer()
{
	return this->cameraNode;
}