#include"CONTAINER.h"
#include"PLAYER.h"
void PLAYER::create(class CONTAINER* c)
{
    Img = c->image.player;
    reset(c);
}
void PLAYER::reset(class CONTAINER* c)
{
    D = c->data.player;
}
void PLAYER::move()
{
    D.px += D.vx;
    D.angle += D.angulerSpeed;
}
void PLAYER::draw()
{
    rectMode(CENTER);
    angleMode(DEGREES);
    imageColor(D.r, D.g, D.b, D.a);
    image(Img, D.px, D.py, D.angle);
}
