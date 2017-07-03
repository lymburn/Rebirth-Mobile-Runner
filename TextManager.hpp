//
//  TextManager.hpp
//  Rebirth
//
//  Created by Eugene Lu on 2017-06-16.
//
//

#ifndef TextManager_hpp
#define TextManager_hpp

#include <stdio.h>
#include "cocos2d.h"
#include "TutorialScene.hpp"
#include <iostream>
USING_NS_CC;
using namespace std;

class TextManager {
public:
    void createTitle();
    void createTapToPlay();
    void printHighScore(int highScore);
    TextManager (Scene* scenePlaying);
    Label* getTapToPlay();
private:
    Label* title;
    Label* tapToPlay;
    Label* highScoreLabel;
    Scene* currentScene;

};

#endif /* TextManager_hpp */
