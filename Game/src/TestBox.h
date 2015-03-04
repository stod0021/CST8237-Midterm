#pragma once 

#include <GameObject.h>
#include "MathUtils.h"
#include <SDL.h>

struct SDL_Renderer;
struct SDL_Texture;

class TestBox: public GameObject
{
public:
	~TestBox();

  void Initialize(SDL_Renderer *renderer);

  void Update(float dt);
  void Draw(SDL_Renderer *renderer, float dt);

  void SetRotationSpeed(float rotationSpeed);

protected:

  float _rotationSpeed = 1.0f;
  SDL_Texture *_testTexture;
  SDL_Rect _testTextureBounds;
  SDL_Point _testTextureRotationCenter;
};