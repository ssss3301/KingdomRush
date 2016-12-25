#pragma once

#include "cocos2d.h"

class LoadingScene : public cocos2d::Layer
{
public:
	static cocos2d::Scene* createScene();
	CREATE_FUNC(LoadingScene);
	virtual bool init();
	virtual void onEnter();

	void loadResource();

private:
	bool		m_resLoadCompelete;
};
