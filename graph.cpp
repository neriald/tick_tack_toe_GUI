#include<SDL/SDL.h>
#include<GL/gl.h>
#include<GL/glu.h>
//#include<GL/glut.h>
#include <iostream>
#include <cmath>

using namespace std;

static int kpp1 = 0;
static int kpp2 = 0;
static int kpp3 = 0;
static int kpp4 = 0;
static int kpp5 = 0;
static int kpp6 = 0;
static int kpp7 = 0;
static int kpp8 = 0;
static int kpp9 = 0;
//bool of showing "X" on screen
static bool kp1 = false;
static bool kp2 = false;
static bool kp3 = false;
static bool kp4 = false;
static bool kp5 = false;
static bool kp6 = false;
static bool kp7 = false;
static bool kp8 = false;
static bool kp9 = false;
//bool of showing "O" on screen
static bool kpo1 = false;
static bool kpo2 = false;
static bool kpo3 = false;
static bool kpo4 = false;
static bool kpo5 = false;
static bool kpo6 = false;
static bool kpo7 = false;
static bool kpo8 = false;
static bool kpo9 = false;

static int turn=1;

void init()
{
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45,640.0/480.0,1.0,500.0);
    glMatrixMode(GL_MODELVIEW);
    glEnable(GL_DEPTH_TEST);
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    ///Mid
    glLoadIdentity();
        glColor3f(1.0,0.0,0.0);
    	glBegin(GL_QUADS);
		glVertex3f( -1.0, 1.0, -15.0);
		glVertex3f( 1.0, 1.0, -15.0);
		glVertex3f( 1.0,-1.0, -15.0);
		glVertex3f( -1.0,-1.0, -15.0);
	glEnd();
    ///mid left
    glLoadIdentity();
        glColor3f(1.0,0.0,0.0);
    	glBegin(GL_QUADS);
		glVertex3f( -4.0, 1.0, -15.0);
		glVertex3f( -2.0, 1.0, -15.0);
		glVertex3f( -2.0,-1.0, -15.0);
		glVertex3f( -4.0,-1.0, -15.0);
	glEnd();
    ///mid right
	glLoadIdentity();
        glColor3f(1.0,0.0,0.0);
    	glBegin(GL_QUADS);
		glVertex3f( 2.0, 1.0, -15.0);
		glVertex3f( 4.0, 1.0, -15.0);
		glVertex3f( 4.0,-1.0, -15.0);
		glVertex3f( 2.0,-1.0, -15.0);
	glEnd();



    ///top mid
	glLoadIdentity();
        glColor3f(1.0,0.0,0.0);
    	glBegin(GL_QUADS);
		glVertex3f( -1.0, 4.0, -15.0);
		glVertex3f( 1.0, 4.0, -15.0);
		glVertex3f( 1.0,2.0, -15.0);
		glVertex3f( -1.0,2.0, -15.0);
	glEnd();
    ///top left
    glLoadIdentity();
        glColor3f(1.0,0.0,0.0);
    	glBegin(GL_QUADS);
		glVertex3f( -4.0, 4.0, -15.0);
		glVertex3f( -2.0, 4.0, -15.0);
		glVertex3f( -2.0,2.0, -15.0);
		glVertex3f( -4.0,2.0, -15.0);
	glEnd();
    ///top right
	glLoadIdentity();
        glColor3f(1.0,0.0,0.0);
    	glBegin(GL_QUADS);
		glVertex3f( 2.0, 4.0, -15.0);
		glVertex3f( 4.0, 4.0, -15.0);
		glVertex3f( 4.0,2.0, -15.0);
		glVertex3f( 2.0,2.0, -15.0);
	glEnd();


    ///bot mid
	glLoadIdentity();
        glColor3f(1.0,0.0,0.0);
    	glBegin(GL_QUADS);
		glVertex3f( -1.0, -2.0, -15.0);
		glVertex3f( 1.0, -2.0, -15.0);
		glVertex3f( 1.0,-4.0, -15.0);
		glVertex3f( -1.0,-4.0, -15.0);
	glEnd();
    ///bot left
    glLoadIdentity();
        glColor3f(1.0,0.0,0.0);
    	glBegin(GL_QUADS);
		glVertex3f( -4.0, -2.0, -15.0);
		glVertex3f( -2.0, -2.0, -15.0);
		glVertex3f( -2.0,-4.0, -15.0);
		glVertex3f( -4.0,-4.0, -15.0);
	glEnd();
    ///bot right
	glLoadIdentity();
        glColor3f(1.0,0.0,0.0);
    	glBegin(GL_QUADS);
		glVertex3f( 2.0, -2.0, -15.0);
		glVertex3f( 4.0, -2.0, -15.0);
		glVertex3f( 4.0,-4.0, -15.0);
		glVertex3f( 2.0,-4.0, -15.0);
	glEnd();
}

void display2(float x, float y)
{

    glLoadIdentity();
    glColor3f(1.0,1.0,1.0);
        glBegin(GL_LINES);
        glVertex3f( x, y, -14.99);
        glVertex3f( x+2.0, y-2.0, -14.99);

        glBegin(GL_LINES);
        glVertex3f( x+2.0, y, -14.99);
        glVertex3f( x, y-2.0, -14.99);
	glEnd();

}


//void Draw_Circle(SDL_Surface *super, Sint16 x0, Sint16 y0, Uint16 r, Uint32 color);


void display3(float a, float b)
{
    glLoadIdentity();
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);

    for(int i =0; i <= 300; i++){
        double angle = 2 * M_PI * i / 300;
        double x = cos(angle);
        double y = sin(angle);
        glVertex3f( x+a, y+b, -14.98);
    }
    glEnd();
}

//void drawText(const char *text, int length, int x, int y)
//{
//    glMatrixMode(GL_PROJECTION);
//    double *matrix = new double[16];
//    glGetDoublev(GL_PROJECTION_MATRIX, matrix);
//    glLoadIdentity();
//    glOrtho(0, 640, 0, 480, -5, 5);
//    glMatrixMode(GL_MODELVIEW);
//    glLoadIdentity();
//    glPushMatrix();
//    glLoadIdentity();
//    glRasterPos2i(x, y);
//    for(int i=0; i<length; i++)
//    {
//        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, (int)text[i]);
//    }
//    glPopMatrix();
//    glMatrixMode(GL_PROJECTION);
//    glLoadMatrixd(matrix);
//    glMatrixMode(GL_MODELVIEW);
//}

void resetGame()
{
    kp1 = false;
    kp2 = false;
    kp3 = false;
    kp4  = false;
    kp5  = false;
    kp6  = false;
    kp7  = false;
    kp8  = false;
    kp9  = false;
    kpo1 = false;
    kpo2 = false;
    kpo3 = false;
    kpo4 = false;
    kpo5 = false;
    kpo6 = false;
    kpo7 = false;
    kpo8 = false;
    kpo9 = false;
    kpp1 = 0;
    kpp2 = 0;
    kpp3 = 0;
    kpp4 = 0;
    kpp5 = 0;
    kpp6 = 0;
    kpp7 = 0;
    kpp8 = 0;
    kpp9 = 0;

    turn = 1;
}

int main(int argc, char* args[])
{
    SDL_Init(SDL_INIT_EVERYTHING);

    SDL_SetVideoMode(640,480,32,SDL_SWSURFACE|SDL_OPENGL);


    int loop=1;
    //points of each keypad location

    //Player scores
    int player1 = 0;
    int player2 = 0;

    string p1 = "Player 1 = ";
    string p2 = "player 2 = ";

    SDL_Event myevent;
    init();
    while (loop==1)
    {
        while (SDL_PollEvent(&myevent))
        {
            switch(myevent.type)
            {
                case SDL_QUIT:
                loop=0;
                break;

                case SDL_KEYDOWN:
                if (myevent.key.keysym.sym==SDLK_KP1){if(turn%2!=0 && kpo1 != true){kp1 = true; kpp1 = 1; turn +=1;} else if(kp1 != true && kpo1 != true) {kpo1 = true; kpp1 = 4; turn +=1;}}
                if (myevent.key.keysym.sym==SDLK_KP2){if(turn%2!=0 && kpo2 != true){kp2 = true; kpp2 = 1; turn +=1;} else if(kp2 != true && kpo2 != true) {kpo2 = true; kpp2 = 4; turn +=1;}}
                if (myevent.key.keysym.sym==SDLK_KP3){if(turn%2!=0 && kpo3 != true){kp3 = true; kpp3 = 1; turn +=1;} else if(kp3 != true && kpo3 != true) {kpo3 = true; kpp3 = 4; turn +=1;}}
                if (myevent.key.keysym.sym==SDLK_KP4){if(turn%2!=0 && kpo4 != true){kp4 = true; kpp4 = 1; turn +=1;} else if(kp4 != true && kpo4 != true) {kpo4 = true; kpp4 = 4; turn +=1;}}
                if (myevent.key.keysym.sym==SDLK_KP5){if(turn%2!=0 && kpo5 != true){kp5 = true; kpp5 = 1; turn +=1;} else if(kp5 != true && kpo5 != true) {kpo5 = true; kpp5 = 4; turn +=1;}}
                if (myevent.key.keysym.sym==SDLK_KP6){if(turn%2!=0 && kpo6 != true){kp6 = true; kpp6 = 1; turn +=1;} else if(kp6 != true && kpo6 != true) {kpo6 = true; kpp6 = 4; turn +=1;}}
                if (myevent.key.keysym.sym==SDLK_KP7){if(turn%2!=0 && kpo7 != true){kp7 = true; kpp7 = 1; turn +=1;} else if(kp7 != true && kpo7 != true) {kpo7 = true; kpp7 = 4; turn +=1;}}
                if (myevent.key.keysym.sym==SDLK_KP8){if(turn%2!=0 && kpo8 != true){kp8 = true; kpp8 = 1; turn +=1;} else if(kp8 != true && kpo8 != true) {kpo8 = true; kpp8 = 4; turn +=1;}}
                if (myevent.key.keysym.sym==SDLK_KP9){if(turn%2!=0 && kpo9 != true){kp9 = true; kpp9 = 1; turn +=1;} else if(kp9 != true && kpo9 != true) {kpo9 = true; kpp9 = 4; turn +=1;}}

                if (myevent.key.keysym.sym==SDLK_SPACE)//reset the game
                {
                    resetGame();
                }

                if(kpp1+kpp2+kpp3 == 3){player1 += 1; resetGame();} else if(kpp1+kpp2+kpp3 == 12){player2 += 1; resetGame();}
                if(kpp4+kpp5+kpp6 == 3){player1 += 1; resetGame();} else if(kpp4+kpp5+kpp6 == 12){player2 += 1; resetGame();}
                if(kpp7+kpp8+kpp9 == 3){player1 += 1; resetGame();} else if(kpp7+kpp8+kpp9 == 12){player2 += 1; resetGame();}
                if(kpp1+kpp4+kpp7 == 3){player1 += 1; resetGame();} else if(kpp1+kpp4+kpp7 == 12){player2 += 1; resetGame();}
                if(kpp2+kpp5+kpp8 == 3){player1 += 1; resetGame();} else if(kpp2+kpp5+kpp8 == 12){player2 += 1; resetGame();}
                if(kpp3+kpp6+kpp9 == 3){player1 += 1; resetGame();} else if(kpp3+kpp6+kpp9 == 12){player2 += 1; resetGame();}
                if(kpp1+kpp5+kpp9 == 3){player1 += 1; resetGame();} else if(kpp1+kpp5+kpp9 == 12){player2 += 1; resetGame();}
                if(kpp3+kpp5+kpp7 == 3){player1 += 1; resetGame();} else if(kpp3+kpp5+kpp7 == 12){player2 += 1; resetGame();}

                break;
            }

        }

        //drawText(p1.data(), p1.size(), 0, 0);

        display();

        if(kp1)display2(-4.0, -2.0);
        if(kp2)display2(-1.0, -2.0);
        if(kp3)display2(2.0, -2.0);
        if(kp4)display2(-4.0, 1.0);
        if(kp5)display2(-1.0, 1.0);
        if(kp6)display2(2.0, 1.0);
        if(kp7)display2(-4.0, 4.0);
        if(kp8)display2(-1.0, 4.0);
        if(kp9)display2(2.0, 4.0);

        if(kpo1)display3(-3.0,-3.0);
        if(kpo2)display3(0,-3.0);
        if(kpo3)display3(3.0,-3.0);
        if(kpo4)display3(-3.0,0.0);
        if(kpo5)display3(0.0,0.0);
        if(kpo6)display3(3.0,0.0);
        if(kpo7)display3(-3.0,3.0);
        if(kpo8)display3(0.0,3.0);
        if(kpo9)display3(3.0,3.0);

        SDL_GL_SwapBuffers();
    }
    SDL_Quit();
    return 0;
}
