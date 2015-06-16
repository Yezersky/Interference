#ifndef CONFIGUTIL_H_
#define CONFIGUTIL_H_

#include "cocos2d.h"

#define PROGRAM_NAME "Interference"
#define kMainTexture "texture/main_texture.plist"
// Particles Config
#define kBirthParticle "particle/Birth"
#define kDeathParticle "particle/Death"
#define kBoomParticle "particle/Boom"
#define kCloudParticle "particle/Cloud"
#define kBirthTexture "particle/Birth.png"
#define kDeathTexture "particle/Death.png"
#define kBoomTexture "particle/Boom.png"
#define kCloudTexture "particle/Cloud.png"
// Font
#define kMarkerFeltFont "font/Marker Felt.ttf"
// Audio
#define kAttackAudio "audio/Shoot.mp3"
#define kAttackVolume 0.3f
#define kBackgroundMusic "audio/Demo.mp3"
#define kBackgroundMusicVolume 0.3f
#define kDeathAudio "audio/Death.mp3"
#define kDeathVolume 1.5f
#define kImpactAudio "audio/Impact.mp3"
#define kImpactVolume 1.5f
// Sprite Frame
#define kPlayerSpriteFrame "texture/player.png"
#define kEnemySpriteFrame "texture/enemy.png"
#define kEdgeSpriteFrame "texture/edge.png"
#define kBlockSpriteFrame "texture/square.png"
#define kBulletSpriteFrame "texture/bullet.png"
#define kShootBoxSpriteFrame "texture/shoot_box.png"
#define kShootLineSpriteFrame "texture/shoot_line.png"
// Texture
#define kBackgroundTexture "texture/img_bg_test.jpg"
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
#define kScoreEvent "ScoreEvent"

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