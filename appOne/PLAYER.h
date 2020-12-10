#pragma once

class PLAYER
{
public:
    void create(class CONTAINER* c);
    void reset(class CONTAINER* c);
    void move();
    void draw();
    struct DATA {
        float px = 0;
        float py = 0;
        float angle = 0;
        float angulerSpeed = 0;
        float vx = 0;
        float vy = 0;
        float forwardSpeed = 0;
        float r = 0, g = 0, b = 0, a = 0;
    };
private:
    int Img = 0;
    struct DATA D;
};

