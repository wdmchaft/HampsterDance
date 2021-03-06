//
//  HampsterDanceScene.h
//  HampsterDance
//
//  Created by John Wilson on 11/2/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"

@class PBJTUILayer, PBJTGameLayer, PBJTPauseLayer, TrackVO;
@interface PBJTScene : CCScene {
    PBJTGameLayer *gameLayer;
    PBJTUILayer *uiLayer;
    PBJTPauseLayer *pauseLayer;
    NSInteger score;
    NSInteger combo;
    BOOL isSongStarted;
    
    BOOL isGamePaused;
    
    
    //transition To GameOverLayer
    BOOL _isSongEnded;
    float _songEndedTimer;

}


@property (nonatomic, retain) PBJTGameLayer *gameLayer;
@property (nonatomic, retain) PBJTUILayer *uiLayer;
@property (nonatomic, retain) PBJTPauseLayer *pauseLayer;
@property (nonatomic) NSInteger score;
@property (nonatomic) NSInteger combo;
@property BOOL isSongStarted, isGamePaused;



+(PBJTScene*) sharedScene;

-(id) init;
-(void)dealloc;



-(void) gameLoop:(ccTime) dt;

#pragma mark - Transitions
-(void) transitionToMainMenu;
-(void) transitionToGameOverLayer;

#pragma mark - game state functions
-(void) pauseGame;
-(void) unPauseGame;

@end
