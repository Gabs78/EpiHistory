/*
**  inc/Vector3f.hh
**  Bomberman
**
**  Created by Quentin PIDOUX on 01/05/12.
**  Copyright (c) 2012 EPITECH. All rights reserved.
*/

#ifndef Vector3f_h_
# define Vector3f_h_
# include "Bomberlib.hh"

class Vector3f
{
public:
  float x;
  float y;
  float z;
  Vector3f(void);
  Vector3f(float x, float y, float z);
  void setX(float x);
  void setZ(float y);
  void setY(float z);
  void addX(float x);
  void addY(float y);
  void addZ(float z);
};

#endif
