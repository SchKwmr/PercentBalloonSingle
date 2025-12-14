#include "ofMain.h"
#include "ofApp.h"
#include "ofAppGLFWWindow.h"
//========================================================================
int main( ){
	ofGLFWWindowSettings windowSettings;

	windowSettings.setSize(1280, 720);
	windowSettings.resizable = true;
	shared_ptr<ofAppBaseWindow> mainWindow = ofCreateWindow(windowSettings);

	windowSettings.setSize(300, 300);
	windowSettings.resizable = true;

	shared_ptr<ofAppBaseWindow> operationWindow = ofCreateWindow(windowSettings);

	shared_ptr<ofApp> mainApp(new ofApp);
	mainApp->setupGUI();
	ofAddListener(operationWindow->events().draw, mainApp.get(), &ofApp::drawGUI);

	ofRunApp(mainWindow, mainApp);
	ofRunMainLoop();

}
