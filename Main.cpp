﻿#include "main.h"

void GameInit()
{
	double resize = 0.8;
	Scene::SetBackground(ColorF(0.1));
	Graphics::SetTargetFrameRateHz(60);
	Window::SetStyle(WindowStyle::Sizable);
	//Window::Resize(WINDOW_X * resize, WINDOW_Y * resize);
	Window::Maximize();
	Scene::Resize(WINDOW_SIZE);

	TextureAsset::Register(U"player", U"Data/moekyara.png");

	FontAsset::Register(U"title", 255);
	FontAsset::Register(U"FPS", 20);
	FontAsset::Register(U"score", 25);
}

void Main()
{
	GameInit();
	_sceneManager scene;
	while (System::Update())
	{
		if (KeyLControl.pressed())
		{
			Stopwatch t;
			t.restart();
			while(t < 1s);
		}
		ClearPrint();
		Print <<U"\n\n\n\n";
		scene.Update();
	}
}