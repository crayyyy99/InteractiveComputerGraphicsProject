#ifndef _DRAWSCENE_H  
#define _DRAWSCENE_H  

#include "Main.h"

class DrawScene
{
public:

    void SingleTexture(GLuint textureSet[6], const char* file_name, int w, int h);
    void FreeCreatedTextures1();
    void FreeCreatedTextures2();
    void FreeCreatedTextures3();

    void DisplayTexturedScene_MainEntrance();
    void DisplayTexturedScene_MainEntranceSideCorridor();
    void DisplayTexturedScene_Stair();
    void DisplayTexturedScene_Stair2();
    void DisplayTexturedScene_LecOffice();

    void DisplayTexturedScene_LeftWingFront();
    void DisplayTexturedScene_LeftWingBack();
    void DisplayTexturedScene_LeftWingMekdi();

    void DisplayTexturedScene_RightWingFront();
    void DisplayTexturedScene_RightWingBack();
    void DisplayTexturedScene_RightWingWalkway();

    void DisplayTexturedScene_Ground();

    void DisplayTexturedScene_Parking();
    void DisplayTexturedScene_Tree();
    void DisplayTexturedScene_Tree2();
    void DisplayTexturedScene_Tree3();

    void Car();
    void Bench();
    void TrashCan();
    void StreetLight();
    void Bus();
    void glassBox();
    void waterDispenser();
};


#endif  