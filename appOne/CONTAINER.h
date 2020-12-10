#pragma once
#include"graphic.h"
#include"PLAYER.h"
class CONTAINER
{
public:
    void create()
    {
        imgPlayer = loadImage("assets/heart.png");
        loadData();
    }
    void loadData()
    {
        data.player.px = width / 2;
        data.player.py = height / 2;
        data.player.angle = 0;
        data.player.angulerSpeed = 1.0f;
        data.player.r = 255;
        data.player.g = 255;
        data.player.b = 200;
        data.player.a = 255;
    }
    //‰æ‘œ
    int imgPlayer = 0;
    //ƒf[ƒ^
    struct DATA {
        struct PLAYER::DATA player;
    }data;
};

