#pragma once
struct Global_window
{
	Global_window()
	{
		int x = 1280;
		int y = 720;
		init_Screen(x, y);
	}
	void init_Screen(int x, int y);
};