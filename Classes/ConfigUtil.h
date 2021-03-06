#ifndef CONFIGUTIL_H_
#define CONFIGUTIL_H_

#include "cocos2d.h"

#define PROGRAM_NAME "Interference"
#define MAIN_TEXTURE_PLIST "texture/main_texture.plist"
#define MAIN_TEXTURE_PNG "texture/main_texture.png"
// Particles Config
#define BIRTH_PARTICLE "particle/Birth"
#define DEATH_PARTICLE "particle/Death"
#define BOOM_PARTICLE "particle/Boom"
#define CLOUD_PARTICLE "particle/Cloud"
#define BIRTH_TEXTURE "particle/Birth.png"
#define DEATH_TEXTURE "particle/Death.png"
#define BOOM_TEXTURE "particle/Boom.png"
#define CLOUD_TEXTURE "particle/Cloud.png"
// Font
#define HELVETICA_NEUE_FONT "font/Helvetica Neue.ttf"
#define NUMBER_BMFONT "font/number.fnt"
// Audio
#define ATTACK_AUDIO "audio/Shoot.mp3"
#define ATTACK_VOLUME 0.3f
#define BATTLE_MUSIC "audio/Pedesis.mp3"
#define BATTLE_MUSIC_VOLUME 1.0f
#define DEATH_AUDIO "audio/Death.mp3"
#define DEATH_VOLUME 1.5f
#define IMPACT_AUDIO "audio/Impact.mp3"
#define IMPACT_VOLUME 1.5f
#define MENU_MUSIC "audio/Title.mp3"
#define MENU_MUSIC_VOLUME 0.3f
#define START_AUDIO "audio/Start.mp3"
#define START_AUDIO_VOLUME 0.5f
#define END_AUDIO "audio/End.mp3"
#define END_AUDIO_VOLUME 0.3f
// Sprite Frame
#define PLAYER_SPRITE_FRAME "texture/player.png"
#define ENEMY_SPRITE_FRAME "texture/enemy.png"
#define EDGE_SPRITE_FRAME "texture/edge.png"
#define BLOCK_SPRITE_FRAME "texture/square.png"
#define BULLET_SPRITE_FRAME "texture/bullet.png"
#define SHOOT_BOX_SPRITE_FRAME "texture/shoot_box.png"
#define SHOOT_LINE_SPRITE_FRAME "texture/shoot_line.png"
#define ATTACK_SPRITE_FRAME "texture/attack.png"
#define ATTACK_DARK_SPRITE_FRAME "texture/attack_dark.png"
#define BLOOD_BAR_SPRITE_FRAME "texture/blood_bar.png"
#define BLOOD_BAR_BOX_SPRITE_FRAME "texture/blood_bar_box.png"
#define LOGO_SPRITE_FRAME "texture/interference.png"
#define HELP_SPRITE_FRAME "texture/help_instruction.png"
// Texture
#define ALF_LOGO_TEXTURE "texture/alf_logo.png"
#define BACKGROUND_TEXTURE "texture/background.png"
#define MENU_BACKGROUND_TEXTURE "texture/menu_background.png"
#define BUTTON_NORMAL_TEXTURE "texture/button_normal.png"
#define BUTTON_PRESS_TEXTURE "texture/button_press.png"
// Tag and Physics Mask
// Block
#define kBlockName "Block"
#define kBlockTag 10
#define kBlockCategoryMask 0xFFFFFFFF
#define kBlockContactMask 0xFF000000
#define kBlockCollisionMask 0xFFFFFFFF
// Bullet
#define kBulletName "Bullet"
// Player Bullet
#define kPlayerBulletTag -3
#define kPlayerBulletGroup -3
#define kPlayerBulletCategoryMask 0xF000F000
#define kPlayerBulletContactMask 0xF000F000
#define kPlayerBulletCollisionMask 0xF0000000
// Enemy Bullet
#define kEnemyBulletTag -3
#define kEnemyBulletGroup -3
#define kEnemyBulletCategoryMask 0xF000F000
#define kEnemyBulletContactMask 0xF000F000
#define kEnemyBulletCollisionMask 0xF0000000
// Player
#define kPlayerName "Player"
#define kPlayerTag 1
#define kPlayerGroup 1
#define kPlayerCategoryMask 0x00000F0F
#define kPlayerContactMask 0x00000F0F
#define kPlayerCollisionMask 0x0000000F
// Enemy
#define kEnemyName "Enemy"
#define kEnemyTag 2
#define kEnemyGroup 2
#define kEnemyCategoryMask 0x0000F00F
#define kEnemyContactMask 0x0000F00F
#define kEnemyCollisionMask 0x0000000F
// Physics Material
#define kPlayerMaterial cocos2d::PhysicsMaterial(10.0f, 0.0f, 0.0f)
#define kEnemyMaterial cocos2d::PhysicsMaterial(10.0f, 1.0f, 0.0f)
#define kBulletMaterial cocos2d::PhysicsMaterial(0.5f, 0.0f, 0.0f)
#define kBlockMaterial cocos2d::PhysicsMaterial(100.0f, 1.0f, 0.0f)
// Key
#define kNameKey "Name"
#define kTagKey "Tag"
#define kDamageKey "Damage"
#define kDestroyDamageKey "DestroyDamage"
#define kBulletParent "BulletParent"
// Event Name
#define SCORE_EVENT "ScoreEvent"
#define PLAYER_EVENT "PlayerEvent"
#define SKILL_EVENT "SkillEvent"
#define CAMERA_EVENT "CameraEvent"
#define BATTLE_EVENT "BattleEvent"
#define DESTROY_EVENT "DestroyEvent"
// Event Data
#define BATTLE_EVENT_WIN 1
#define BATTLE_EVENT_LOSE 2
#define DESTROY_EVENT_ALL 1
// Score
#define SCORE_STRING_DIGIT 6
#define SCORE_MAX 999999
// Dynamic Background
#define DYNAMIC_BACKGROUNd true

namespace config
{
	// Constant
	// BattleScene and Edge
	extern const cocos2d::Vec2 kBattleScene;
	extern const cocos2d::Size kEdgeSize;
	// Variable
	extern cocos2d::Size visible_size;
	extern cocos2d::Vec2 visible_origin;
	extern float visible_width;
	extern float visible_height;
}

#endif /* CONFIGUTIL_H_ */