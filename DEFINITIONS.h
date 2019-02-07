#pragma once

#define SCREEN_WIDTH 480       //original 768
#define SCREEN_HEIGHT 680		//original 1024

#define	SPLASH_STATE_SHOW_TIME 3.0

#define SPLASH_SCENE_BACKGROUND_FILEPATH "D:\\projekti\\FlappyBird\\FlappyBirdClone\\FlappyBirdClone\\Resources\\res\\cpp2.png"
#define MAIN_MENU_BACKGROUND_FILEPATH "D:\\projekti\\FlappyBird\\FlappyBirdClone\\FlappyBirdClone\\Resources\\res\\sky 2.png"

#define GAME_BACKGROUND_FILEPATH "D:\\projekti\\FlappyBird\\FlappyBirdClone\\FlappyBirdClone\\Resources\\res\\sky 2.png"
#define GAME_OVER_BACKGROUND_FILEPATH "D:\\projekti\\FlappyBird\\FlappyBirdClone\\FlappyBirdClone\\Resources\\res\\sky 2.png"

#define GAME_TITLE_FILEPATH "D:\\projekti\\FlappyBird\\FlappyBirdClone\\FlappyBirdClone\\Resources\\res\\title.png"
#define PLAY_BUTTON_FILEPATH "D:\\projekti\\FlappyBird\\FlappyBirdClone\\FlappyBirdClone\\Resources\\res\\PlayButton.png"

#define PIPE_UP_FILEPATH "D:\\projekti\\FlappyBird\\FlappyBirdClone\\FlappyBirdClone\\Resources\\res\\PipeUp 2.png"
#define PIPE_DOWN_FILEPATH "D:\\projekti\\FlappyBird\\FlappyBirdClone\\FlappyBirdClone\\Resources\\res\\PipeDown 2.png"
#define SCORING_PIPE_FILEPATH "D:\\projekti\\FlappyBird\\FlappyBirdClone\\FlappyBirdClone\\Resources\\res\\InvisibleScoringPipe.png"


#define LAND_FILEPATH "D:\\projekti\\FlappyBird\\FlappyBirdClone\\FlappyBirdClone\\Resources\\res\\Land 2.png"

#define BIRD_FRAME_1_FILEPATH "D:\\projekti\\FlappyBird\\FlappyBirdClone\\FlappyBirdClone\\Resources\\res\\Bird1 2.png"
#define BIRD_FRAME_2_FILEPATH "D:\\projekti\\FlappyBird\\FlappyBirdClone\\FlappyBirdClone\\Resources\\res\\Bird2 2.png"
#define BIRD_FRAME_3_FILEPATH "D:\\projekti\\FlappyBird\\FlappyBirdClone\\FlappyBirdClone\\Resources\\res\\Bird3 2.png"
#define BIRD_FRAME_4_FILEPATH "D:\\projekti\\FlappyBird\\FlappyBirdClone\\FlappyBirdClone\\Resources\\res\\Bird4 2.png"

#define BRONZE_MEDAL_FILEPATH "D:\\projekti\\FlappyBird\\FlappyBirdClone\\FlappyBirdClone\\Resources\\res\\BronzeMedal.png"
#define SILVER_MEDAL_FILEPATH "D:\\projekti\\FlappyBird\\FlappyBirdClone\\FlappyBirdClone\\Resources\\res\\SilverMedal.png"
#define GOLD_MEDAL_FILEPATH "D:\\projekti\\FlappyBird\\FlappyBirdClone\\FlappyBirdClone\\Resources\\res\\GoldMedal.png"
#define PLATINUM_MEDAL_FILEPATH "D:\\projekti\\FlappyBird\\FlappyBirdClone\\FlappyBirdClone\\Resources\\res\\PlatinumMedal.png"

#define BRONZE_MEDAL_SCORE 0
#define SILVER_MEDAL_SCORE 15
#define GOLD_MEDAL_SCORE 25
#define PLATINUM_MEDAL_SCORE 50

#define FLAPPY_FONT_FILEPATH "D:\\projekti\\FlappyBird\\FlappyBirdClone\\FlappyBirdClone\\Resources\\res\\FlappyFont.ttf"

#define GAME_OVER_TITLE_FILEPATH "D:\\projekti\\FlappyBird\\FlappyBirdClone\\FlappyBirdClone\\Resources\\res\\GameOverTitle.png"

#define GAME_OVER_BODY_FILEPATH "D:\\projekti\\FlappyBird\\FlappyBirdClone\\FlappyBirdClone\\Resources\\res\\GameOverBody.png"

#define HIT_SOUND_FILEPATH "D:\\projekti\\FlappyBird\\FlappyBirdClone\\FlappyBirdClone\\Resources\\res\\Hit.wav"
#define POINT_SOUND_FILEPATH "D:\\projekti\\FlappyBird\\FlappyBirdClone\\FlappyBirdClone\\Resources\\res\\Point.wav"
#define WING_SOUND_FILEPATH "D:\\projekti\\FlappyBird\\FlappyBirdClone\\FlappyBirdClone\\Resources\\res\\Wing.wav"


#define PIPE_MOVEMENT_SPEED 200.0f
#define PIPE_SPAWN_FREQUENCY 2.0f

#define BIRD_ANIMATION_DURATION 0.4f

#define BIRD_STATE_STILL 1
#define BIRD_STATE_FALLING 2
#define BIRD_STATE_FLYING 3

#define GRAVITY 350.0f
#define FLYING_SPEED 350.0f

#define FLYING_DURATION 0.25f

#define ROTATION_SPEED 100.0f

enum GameStates
{
	eReady,
	ePlaying,
	eGameOver
};

#define FLASH_SPEED 1500.0f

#define TIME_BEFORE_GAME_OVER_APPEARS 1.5f