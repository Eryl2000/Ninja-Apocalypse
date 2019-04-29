/*
 * NAME: Eryl Kenner
 * EMAIL: eryl.kenner@gmail.com
 */

#ifndef INC_GAMEMGR_H_
#define INC_GAMEMGR_H_

#include "Mgr.h"
#include "Player.h"

class WeaponMgr;

class GameMgr : public Mgr{
public:
    GameMgr(Engine *eng);
    ~GameMgr();

    void Init();
    void Tick(float dt);
    void LoadLevel();
    void Stop();

    WeaponMgr * weaponMgr;
    Ogre::Plane mPlane;
    const float surfaceHeight = 0;
    Player * MainPlayer;
protected:
private:
    void LoadLevelOne();

    const float mapWidth = 5000;
    const float mapHeight = 2500;
    const float borderWallThickness = 200;
};

#endif /* INC_GAMEMGR_H_ */
