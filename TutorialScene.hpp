//
//  TutorialScene.hpp
//  Rebirth
//
//  Created by Eugene Lu on 2017-06-18.
//
//

#ifndef TutorialScene_hpp
#define TutorialScene_hpp

#include <stdio.h>
#include "ImageManager.hpp"
#include "ActionPerformer.hpp"
#include <chrono>
#include <ctime>

class TutorialScene : public cocos2d::Scene {
    
public:
    static cocos2d::Scene* createScene();
    virtual bool init();
    
    // implement the "static create()" method manually
    CREATE_FUNC(TutorialScene);
};


#endif /* TutorialScene_hpp */