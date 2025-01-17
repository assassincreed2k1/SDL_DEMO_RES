#include "CommonFunc.h"

#include <iostream>

bool winner = false;
int minus = 0;
bool change_threats = false;
int map_start = 0;

bool SDLCommonFunc::CheckCollision(const SDL_Rect &object1, const SDL_Rect &object2)
{
  int left_a = object1.x;
  int right_a = object1.x + 115;
  int top_a = object1.y;
  int bottom_a = object1.y + 95;

  int left_b = object2.x;
  int right_b = object2.x + 150;
  int top_b = object2.y;
  int bottom_b = object2.y + 100;

  if (left_a > left_b && left_a < right_b)
  {
    if (top_a > top_b && top_a < bottom_b)
    {
      return true;
    }
  }

  if (left_a > left_b && left_a < right_b)
  {
    if (bottom_a > top_b && bottom_a < bottom_b)
    {
      return true;
    }
  }

  if (right_a > left_b && right_a < right_b)
  {
    if (top_a > top_b && top_a < bottom_b)
    {
      return true;
    }
  }

  if (right_a > left_b && right_a < right_b)
  {
    if (bottom_a > top_b && bottom_a < bottom_b)
    {
      return true;
    }
  }
  return false;
}

bool SDLCommonFunc::CheckFocusMouse(const int &x, const int &y,const SDL_Rect& pos)
{
  if (x > pos.x && x < pos.x + pos.w && y > pos.y && y < pos.y + pos.h)
  {
    return true;
  }
  return false;
}
