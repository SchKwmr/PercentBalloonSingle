#pragma once
#include "ofMain.h"

class BalloonModel
{
public:
	void initValue(int max_life, float max_interval);
	void setSound(ofSoundPlayer s);
	void updateValue(float max_interval, float min_interval, float interval_velocity);
	void calculateDifferential(int p_answered, int p_true);

	int percent_life;
	int percent_life_visual;
	float timef_balloon_destroy_interval;
	float timef_balloon_last_destory = 0;
	ofSoundPlayer sound;

};

