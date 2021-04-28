#pragma once
#include"graphic.h"
#include"PLAYER.h"
class CONTAINER
{
public:
    //âÊëú
    struct IMAGES {
        int player = 0;
    }image;
    //ÉfÅ[É^
    struct DATA {
        struct PLAYER::DATA player;
    }data;
    //Functions
    void create()
    {
        loadImages();
        loadData();
    }
    void loadImages() {
        image.player = loadImage("assets/heart.png");
    }
    void loadData()
    {
        data.player.px = width / 2;
        data.player.py = height / 2;
        data.player.vx = 5;
        data.player.angle = 0;
        data.player.angulerSpeed = 1.0f;
        data.player.r = 255;
        data.player.g = 255;
        data.player.b = 200;
        data.player.a = 255;
    }
};

