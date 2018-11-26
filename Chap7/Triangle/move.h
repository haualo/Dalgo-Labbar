#ifndef MOVE_H
#define MOVE_H

typedef int Position; // 0..14, dvs 15 möjliga positioner

struct Move
{

  Move() : _pos(0), _direction(0) {}
  Move( int pos, int direction ) : _pos(pos), _direction(direction) {}

  Position _pos;    // En pinne kan ha 15 olika start-positioner:   0..14
  int _direction; // pinne kan flyttas i 6 olika riktningar:   0..5
};

#endif // MOVE_H
