#pragma once

#include <QByteArray>

class PutChar;
class Screen;

class Animation
{
public:
    Animation();

    void step(Screen *screen);

private:
    QByteArray data;
    size_t index = 2;  // Skips adress.
    PutChar *putChar;
};
