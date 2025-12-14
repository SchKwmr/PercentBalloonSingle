#pragma once

#include "ofMain.h"
#include "ofxGui.h"

#define MAX_LIFE 100
#define MAX_INTERVAL 0.5
#define MIN_INTERVAL 0.25
#define INT_VELOCITY 0.05

class ofApp : public ofBaseApp{

	public:
		void setup();
		void setupGUI();
		void update();
		void draw();
		void drawGUI(ofEventArgs& args);

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		void drawTruePercentBar(float pos_y, float width, float height, int percent_true);
		void drawAnsweredPercentBar(float pos_y, float width, float height, int percent_answered);
		void drawBalloon(float pos_root_y, float radius, float theta, ofColor balloonColor);
		void drawCabin(float pos_cavin_y, float width_cavin, float height_cavin);
		void drawAllComponent(float pos_x, float pos_y, float scale);

		void initGame();
		void updateGame();

		ofxPanel gui;
		ofParameter<int> channel;
		ofParameter<int> percent_true;
		ofParameter<int> percent_answered;

		int percent_life;
		int percent_life_visual;
		float timef_balloon_destroy_interval = MAX_INTERVAL;
		float timef_balloon_last_destory = 0;

		array<ofVec2f, 100> balloonVisualInfo;
		array<ofColor, 100> balloonColors;

		ofSoundPlayer sound;
		bool showAll = false;
};
