#include "olcConsoleGameEngine.h"
using namespace std;

// A struct to get a point in a 3D plane
struct vec3d {
	float x, y, z;
};

// A struct that uses three points to create a triangel
struct triangle {
	vec3d p[3];
};

// A mesh that's composed of a list of triangles
struct mesh {
	vector<triangle> tris;
};


class olcEngine3D : public olcConsoleGameEngine {
public:
	olcEngine3D(){
		m_sAppName = L"3D demo";		// The name of the app
	}

private:
	mesh meshCube;

public:
	// Has the scene
	bool OnUserCreate() override {

		meshCube.tris = {
			// South
			{0.0f, 0.0f, 0.0f,		0.0f, 1.0f, 0.0f,		1.0f, 1.0f, 0.0f},
			{0.0f, 0.0f, 0.0f,		1.0f, 1.0f, 0.0f,		1.0f, 0.0f, 0.0f},

			// East
			{1.0f, 0.0f, 0.0f,		1.0f, 1.0f, 0.0f,		1.0f, 1.0f, 1.0f},
			{1.0f, 0.0f, 0.0f,		1.0f, 1.0f, 1.0f,		1.0f, 0.0f, 1.0f},

			// North
			{1.0f, 0.0f, 1.0f,		1.0f, 1.0f, 1.0f,		0.0f, 1.0f, 1.0f},
			{1.0f, 0.0f, 1.0f,		0.0f, 1.0f, 1.0f,		0.0f, 0.0f, 1.0f},

			// West
			{0.0f, 0.0f, 1.0f,		0.0f, 1.0f, 1.0f,		0.0f, 1.0f, 0.0f},
			{0.0f, 0.0f, 1.0f,		0.0f, 1.0f, 0.0f,		0.0f, 0.0f, 0.0f},

			// Top
			{0.0f, 1.0f, 0.0f,		0.0f, 1.0f, 1.0f,		1.0f, 1.0f, 0.0f},
			{0.0f, 1.0f, 0.0f,		1.0f, 1.0f, 1.0f,		1.0f, 1.0f, 0.0f},

			// Bottom
			{0.0f, 0.0f, 1.0f,		0.0f, 1.0f, 1.0f,		0.0f, 1.0f, 0.0f},
			{0.0f, 0.0f, 1.0f,		0.0f, 1.0f, 0.0f,		0.0f, 0.0f, 0.0f},
		};

		return true;
	}

	// Updates the screen every delta time
	bool OnUserUpdate(float fElapsedTime) override {


		return true;
	}
};

int main() {
	olcEngine3D demo;
	if (demo.ConstructConsole(256, 240, 4, 4))
		demo.Start();



	return 0;
}