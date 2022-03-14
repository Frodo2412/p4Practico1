//
// Created by bruno on 3/5/2022.
//

#ifndef PRACTICO_1_PUNTO_H
#define PRACTICO_1_PUNTO_H


class Punto {
private:
    float x, y;
public:
    Punto(float = 0.0, float = 0.0);
    float getX() const;
    float getY() const;
    void setX(float);
    void setY(float);
};


#endif //PRACTICO_1_PUNTO_H
