#pragma once
#include"framework.h"
#include"graphic.h"
#include"input.h"
#include"CONTAINER.h"
#include"PLAYER.h"

class GAME
{
public:
    void create()
    {
        window(1000, 1000);
        Container.create();
        Player.create(&Container);
    }
    void run()
    {
        while (notQuit) {
            switch (State) {
            case STATE::TITLE: Title(); break;
            case STATE::PLAY: Play(); break;
            }
        }
    }
private:
    void Title()
    {
        clear(50);
        textSize(300);
        text("Title", (width-150*5)/2, height / 2);
        //Next state
        if (isTrigger(KEY_SPACE)) {
            Reset();
            State = STATE::PLAY;
        }
    }
    void Play()
    {
        Player.move();
        clear(0);
        Player.draw();
        //Next state
        if (isTrigger(KEY_SPACE)) {
            State = STATE::TITLE;
        }
    }
    void Reset()
    {
        Player.reset(&Container);
    }
private:
    enum class STATE { TITLE, PLAY };
    STATE State = STATE::TITLE;
    CONTAINER Container;
    PLAYER Player;
};



