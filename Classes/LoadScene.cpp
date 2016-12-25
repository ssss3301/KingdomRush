#include "LoadScene.h"

USING_NS_CC;

Scene* LoadingScene::createScene()
{
	auto pScene = new Scene();
	auto layer = LoadingScene::create();
	pScene->addChild(layer);

	return pScene;
}

bool LoadingScene::init()
{
	if (!Layer::init())
		return false;

	m_resLoadCompelete = false;

	return true;
}

void LoadingScene::onEnter()
{
	Layer::onEnter();

	Size win_size = Director::getInstance()->getWinSize();

	auto backGround = Sprite::create("Default@2x.png");
	if (backGround)
	{
		backGround->setPosition(Vec2(win_size.width * 0.5f, win_size.height *  0.5f));
		backGround->setRotation(-90.0f);
		this->addChild(backGround);
	}
}

void LoadingScene::loadResource()
{

}
