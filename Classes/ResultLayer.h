#ifndef RESULTLAYER_H_
#define RESULTLAYER_H_

#include "PopupLayer.h"

class ResultLayer : public PopupLayer
{
public:
	static ResultLayer* create(const std::string& label_text, const std::string& button_text);
	ResultLayer(const std::string& label_text, const std::string& button_text);
	virtual void buttonListener(Ref* sender, cocos2d::ui::Widget::TouchEventType type) override;
};

#endif /* RESULTLAYER_H_ */
