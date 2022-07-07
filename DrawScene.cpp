#include "DrawScene.h"
#include "LoadTexture.h"  
#include "DrawPrimitives.h"

GLuint cementFloor_texture[6];
GLuint tileFloor_texture[6];
GLuint entranceMiddleLG_texture[6];
GLuint entranceMiddleL12_texture[6];
GLuint entranceMiddleL3_texture[6];
GLuint entranceRoof_texture[6];
GLuint FTMKLabel_texture[6];
GLuint FTMKLabelRoof_texture[6];
GLuint entranceMiddleBack_texture[6];
GLuint yellowPillar_texture[6];
GLuint whitePillar_texture[6];
GLuint entranceRightL1_texture[6];
GLuint entranceRightL2_texture[6];
GLuint entranceRightL3_texture[6];
GLuint entranceCorridor_texture[6];
GLuint entranceLeftLG_texture[6];
GLuint entranceRightLG_texture[6];

GLuint corridorWall_texture[6];
GLuint corridorRoof_texture[6];

GLuint stairBuilding_texture[6];
GLuint stairBuilding2_texture[6];
GLuint buildingRoof_texture[6];

GLuint lecOfficeSmall_texture[6];
GLuint lecOffice_texture[6];
GLuint lecOfficeSide_texture[6];

GLuint leftWingStair_texture[6];
GLuint leftWingFront_texture[6];
GLuint leftWingFront2_texture[6];
GLuint leftWingFront3_texture[6];
GLuint leftWingFront4_texture[6];

GLuint leftWingBack1_texture[6];
GLuint leftWingBack2_texture[6];
GLuint leftWingBack3_texture[6];
GLuint leftWingLobby_texture[6];

GLuint mekdi_texture[6];
GLuint walkway_texture[6];

GLuint grass_texture[6];

GLuint tar_texture[6];
GLuint bush_texture[6];
GLuint tarPark_texture[6];
GLuint tree_texture[6];
GLuint leaf_texture[6];
GLuint leaf2_texture[6];
GLuint centre_texture[6];
GLuint leaf3_texture[6];
GLuint leaf4_texture[6];

GLuint streetLight_texture[6];
GLuint streetLightTop_texture[6];
GLuint trashCan1_texture[6];
GLuint trashCan2_texture[6];
GLuint trashCan3_texture[6];
GLuint carbelow_texture[6];
GLuint carAbove_texture[6];
GLuint bus_texture[6];
GLuint wood_texture[6];

GLuint Box_texture[6];
GLuint dispenser_texture[6];
GLuint tap_texture[6];

DrawPrimitives dp;

void DrawScene::SingleTexture(GLuint textureSet[6], const char* file_name, int w, int h)
{
    textureSet[5] = LoadTexture::LoadTextureImageFile(file_name, w, h);
    textureSet[0] = textureSet[1] = textureSet[2] = textureSet[3] = textureSet[4] = textureSet[5];
};

void DrawScene::FreeCreatedTextures1()
{
    for (int i = 0; i < 6; i++)
    {
        glDeleteTextures(1, &cementFloor_texture[i]);
        glDeleteTextures(1, &tileFloor_texture[i]);
        glDeleteTextures(1, &entranceMiddleLG_texture[i]);
        glDeleteTextures(1, &entranceMiddleL12_texture[i]);
        glDeleteTextures(1, &entranceMiddleL3_texture[i]);
        glDeleteTextures(1, &entranceRoof_texture[i]);
        glDeleteTextures(1, &FTMKLabel_texture[i]);
        glDeleteTextures(1, &FTMKLabelRoof_texture[i]);
        glDeleteTextures(1, &entranceMiddleBack_texture[i]);
        glDeleteTextures(1, &yellowPillar_texture[i]);
        glDeleteTextures(1, &whitePillar_texture[i]);
        glDeleteTextures(1, &entranceRightL1_texture[i]);
        glDeleteTextures(1, &entranceRightL2_texture[i]);
        glDeleteTextures(1, &entranceRightL3_texture[i]);
        glDeleteTextures(1, &entranceCorridor_texture[i]);
        glDeleteTextures(1, &entranceLeftLG_texture[i]);
        glDeleteTextures(1, &entranceRightLG_texture[i]);

        glDeleteTextures(1, &corridorWall_texture[i]);
        glDeleteTextures(1, &corridorRoof_texture[i]);

        glDeleteTextures(1, &stairBuilding_texture[i]);
        glDeleteTextures(1, &stairBuilding2_texture[i]);
        glDeleteTextures(1, &buildingRoof_texture[i]);       
    }
}

void DrawScene::FreeCreatedTextures2()
{
    for (int i = 0; i < 6; i++)
    {
        glDeleteTextures(1, &buildingRoof_texture[i]);
        glDeleteTextures(1, &lecOfficeSmall_texture[i]);
        glDeleteTextures(1, &lecOffice_texture[i]);
        glDeleteTextures(1, &lecOfficeSide_texture[i]);

        glDeleteTextures(1, &leftWingStair_texture[i]);
        glDeleteTextures(1, &leftWingFront_texture[i]);
        glDeleteTextures(1, &leftWingFront2_texture[i]); 
        glDeleteTextures(1, &leftWingFront3_texture[i]);
        glDeleteTextures(1, &leftWingFront4_texture[i]);

        glDeleteTextures(1, &leftWingBack1_texture[i]);
        glDeleteTextures(1, &leftWingBack2_texture[i]);
        glDeleteTextures(1, &leftWingBack3_texture[i]);
        glDeleteTextures(1, &leftWingLobby_texture[i]);
        glDeleteTextures(1, &FTMKLabelRoof_texture[i]);
        
        glDeleteTextures(1, &mekdi_texture[i]);
        glDeleteTextures(1, &walkway_texture[i]);      
    }
}

void DrawScene::FreeCreatedTextures3()
{
    for (int i = 0; i < 6; i++)
    {
        glDeleteTextures(1, &grass_texture[i]);
        glDeleteTextures(1, &tar_texture[i]);
        glDeleteTextures(1, &bush_texture[i]);
        glDeleteTextures(1, &tarPark_texture[i]);
        glDeleteTextures(1, &tree_texture[i]);
        glDeleteTextures(1, &leaf_texture[i]);
        glDeleteTextures(1, &leaf2_texture[i]);
        glDeleteTextures(1, &leaf3_texture[i]);
        glDeleteTextures(1, &leaf4_texture[i]);
        glDeleteTextures(1, &centre_texture[i]);
        glDeleteTextures(1, &wood_texture[i]);
        glDeleteTextures(1, &carbelow_texture[i]);
        glDeleteTextures(1, &carAbove_texture[i]);
        glDeleteTextures(1, &trashCan1_texture[i]);
        glDeleteTextures(1, &trashCan2_texture[i]);
        glDeleteTextures(1, &trashCan3_texture[i]);
        glDeleteTextures(1, &streetLight_texture[i]);
        glDeleteTextures(1, &streetLightTop_texture[i]);
        glDeleteTextures(1, &bus_texture[i]);
        glDeleteTextures(1, &Box_texture[i]);
        glDeleteTextures(1, &dispenser_texture[i]);
        glDeleteTextures(1, &tap_texture[i]);
    }

}
//w h l dx dy dz

//textures[] -> 0-Back 1-front 2-bottom 3-right 4-top 5-left

/*These scenes created by Chin Zhen Yuan*/
void DrawScene::DisplayTexturedScene_MainEntrance()
{
    glColor3f(1.0, 1.0, 1.0);
        //Front Middle
    SingleTexture(cementFloor_texture, "textures/Cement.bmp", 512, 512); 
    dp.DrawCuboidWithTexture(2.1, 0.05, 3.75, 0.0, -0.04, 0.0, cementFloor_texture); //floor
        
   //Building - Front Middle   
    entranceMiddleLG_texture[1] = entranceMiddleLG_texture[0] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/MiddleBuilding/BackG.bmp", 512, 512);
    entranceMiddleLG_texture[4] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/MiddleBuilding/Bottom.bmp", 512, 512);
    entranceMiddleLG_texture[2] = LoadTexture::LoadTextureImageFile("textures/BeigeTile.bmp", 512, 512);
    entranceMiddleLG_texture[3] = entranceMiddleLG_texture[5] = LoadTexture::LoadTextureImageFile("textures/FTMKYellow.bmp", 256, 256);
    dp.DrawCuboidWithTexture(2.1, 0.9, 3.9, 0.0, 0.1, -2.95, entranceMiddleLG_texture); //LG
    
    entranceMiddleL12_texture[1] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/MiddleBuilding/Front.bmp", 512, 512);
    entranceMiddleL12_texture[2] = entranceMiddleL12_texture[4] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/MiddleBuilding/Bottom.bmp", 512, 512);
    entranceMiddleL12_texture[0] = entranceMiddleL12_texture[3] = entranceMiddleL12_texture[5] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/SideBuilding/Side.bmp", 512, 512);
   
    dp.DrawCuboidWithTexture(2.1, 0.9, 3.5, 0.0, 1.9, -0.21, entranceMiddleL12_texture); //L1
    dp.DrawCuboidWithTexture(2.1, 0.9, 3.5, 0.0, 3.7, -0.21, entranceMiddleL12_texture); //L2

    SingleTexture(entranceMiddleL3_texture, "textures/MainEntrance/SideBuilding/Side.bmp", 512, 512);
    dp.DrawCuboidWithTexture(2.1, 1.25 + 0.15, 3.75, 0.0, 5.5, 0.04, entranceMiddleL3_texture); //L3

    entranceRoof_texture[1] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/MainEntranceRoof/Front.bmp", 256, 256);
    entranceRoof_texture[2] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/MainEntranceRoof/Bottom.bmp", 256, 256);
    entranceRoof_texture[4] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/MainEntranceRoof/Top.bmp", 512, 512);
    entranceRoof_texture[0] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/MainEntranceRoof/Back.bmp", 256, 256);
    entranceRoof_texture[3] = entranceRoof_texture[5] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/MainEntranceRoof/Side.bmp", 256, 256);
    dp.DrawCuboidWithTexture(2.1, 0.55, 5.7, 0.0, 8.1 + 0.13, -1.2, entranceRoof_texture); //L3 roof

    FTMKLabel_texture[1] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/FTMKLabel/Front.bmp", 512, 512);
    FTMKLabel_texture[2] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/FTMKLabel/Bottom.bmp", 256, 256);
    FTMKLabel_texture[4] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/FTMKLabel/Top.bmp", 256, 256);
    FTMKLabel_texture[0] = LoadTexture::LoadTextureImageFile("textures/FTMKYellow.bmp", 256, 256);
    FTMKLabel_texture[3] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/FTMKLabel/Right.bmp", 256, 256); 
    FTMKLabel_texture[5] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/FTMKLabel/Left.bmp", 256, 256);
    dp.DrawCuboidWithTexture(2.1, 0.9, 0.25, 0.0, 5.5, 4.025, FTMKLabel_texture); //L3 FTMK label

    FTMKLabelRoof_texture[1] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/FTMKLabelRoof/Front.bmp", 256, 256);
    FTMKLabelRoof_texture[2] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/FTMKLabelRoof/Bottom.bmp", 512, 512);
    FTMKLabelRoof_texture[4] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/FTMKLabelRoof/Top.bmp", 256, 256);
    FTMKLabelRoof_texture[3] = FTMKLabelRoof_texture[5] = FTMKLabelRoof_texture[0] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/FTMKLabelRoof/Side.bmp", 256, 256);
    dp.DrawCuboidWithTexture(2.4, 0.11, 0.5, 0.0, 5.5 + 1.8, 4.29, FTMKLabelRoof_texture); // L3 FTMK roof
   
    //LG Pillar - Front Middle
    SingleTexture(yellowPillar_texture, "textures/FTMKYellow.bmp", 256, 256); 
    dp.DrawCuboidWithTexture(0.28, 1.0, 0.15, 2.4, 0.1, 3.6, yellowPillar_texture);
    dp.DrawCuboidWithTexture(0.2, 1.0, 0.15, -2.3, 0.1, 3.6, yellowPillar_texture);
    

    //------------------------------------------------------------------------------------------------------
        //Back Middle
    SingleTexture(tileFloor_texture, "textures/BeigeTile.bmp", 512, 512);
    dp.DrawCuboidWithTexture(2.1, 0.05, 2.25, 0.0, -0.04, -6.0, tileFloor_texture); //Floor

    //Building - Back Middle
    SingleTexture(entranceMiddleBack_texture, "textures/MainEntrance/FTMKLabelRoof/Bottom.bmp", 256, 256);
    entranceMiddleBack_texture[0] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/MiddleBuilding/Back.bmp", 512, 512);
    dp.DrawCuboidWithTexture(2.1, 3.2, 1.2, 0.0, 1.9, -4.9, entranceMiddleBack_texture); //L1

    //Semicircle Roof
    glColor3ub(225, 228, 219);
    dp.DrawCylinder(4.0, 0.1, 20, 0.0, 2.3, -5.0, 0);

    //LG Pillar - Back Middle
    SingleTexture(whitePillar_texture, "textures/MainEntrance/SideBuilding/Side.bmp", 512, 512);
    dp.DrawCuboidWithTexture(0.15, 1.1, 0.15, 2.5, 0.1, -7.5, whitePillar_texture);
    dp.DrawCuboidWithTexture(0.15, 1.1, 0.15, -2.5, 0.1, -7.5, whitePillar_texture);

    //------------------------------------------------------------------------------------------------------
    //textures[] -> 0-Back 1-front 2-bottom 3-right 4-top 5-left
        
        //Right
    glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glRotatef(5.0, 0.0, 1.0, 0.0);

    dp.DrawCuboidWithTexture(2.2, 0.05, 3.75, 3.95, -0.04, 0.18, cementFloor_texture); //Floor - Front
    dp.DrawCuboidWithTexture(2.1, 0.05, 2.25, 3.95, 0.0, -6.0 + 0.18, tileFloor_texture); //Floor - Back

    //Building - Right
    entranceRightLG_texture[1] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/SideBuilding/SURAU.bmp", 512, 512);
    entranceRightLG_texture[0] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/SideBuilding/BackL.bmp", 512, 512);
    entranceRightLG_texture[4] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/MiddleBuilding/Bottom.bmp", 512, 512);
    entranceRightLG_texture[2] = LoadTexture::LoadTextureImageFile("textures/BeigeTile.bmp", 512, 512);
    entranceRightLG_texture[3] = entranceRightLG_texture[5] = LoadTexture::LoadTextureImageFile("textures/FTMKYellow.bmp", 256, 256);
    dp.DrawCuboidWithTexture(2.1, 0.9, 2.3, 4.0, 0.1, -1.4 + 0.18, entranceRightLG_texture); //LG

    entranceRightL1_texture[1] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/SideBuilding/Front - L1.bmp", 512, 512);
    entranceRightL1_texture[2] = entranceRightL1_texture[4] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/MiddleBuilding/Bottom.bmp", 512, 512);
    entranceRightL1_texture[0] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/SideBuilding/BackL.bmp", 512, 512);
    entranceRightL1_texture[3] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/SideBuilding/SideL1 RR.bmp", 512, 512);
    entranceRightL1_texture[5] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/SideBuilding/SideL1 RL.bmp", 512, 512);
    dp.DrawCuboidWithTexture(2.1, 0.9, 3.75, 4.0, 1.9, 0.04 + 0.18, entranceRightL1_texture); //L1

    entranceRightL2_texture[1] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/SideBuilding/Front - L2.bmp", 512, 512);
    entranceRightL2_texture[2] = entranceRightL2_texture[4] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/MiddleBuilding/Bottom.bmp", 512, 512);
    entranceRightL2_texture[0] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/SideBuilding/BackL.bmp", 512, 512);
    entranceRightL2_texture[3] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/SideBuilding/SideL2 RR.bmp", 512, 512);
    entranceRightL2_texture[5] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/SideBuilding/SideL2 RL.bmp", 512, 512);
    dp.DrawCuboidWithTexture(2.1, 0.9, 3.75, 4.0, 3.7, 0.04 + 0.18, entranceRightL2_texture); //L2

    entranceRightL3_texture[1] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/SideBuilding/Front - L3.bmp", 512, 512);
    entranceRightL3_texture[2] = entranceRightL3_texture[4] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/SideBuilding/Side2.bmp", 512, 512);
    entranceRightL3_texture[0] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/SideBuilding/BackL - L3.bmp", 512, 512);
    entranceRightL3_texture[3] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/SideBuilding/SideL3 RR.bmp", 512, 512);
    entranceRightL3_texture[5] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/SideBuilding/SideL3 RL.bmp", 512, 512);
    dp.DrawCuboidWithTexture(2.6, 1.25 + 0.15, 3.75, 4.35, 5.5, 0.04 + 0.18, entranceRightL3_texture); //L3

    dp.DrawCuboidWithTexture(2.75, 0.5, 5.7, 4.4, 8.1 + 0.15, -1.2, entranceRoof_texture); //L3 roof

    //LG Pillar - Right
    dp.DrawCuboidWithTexture(0.2, 1.0, 0.15, 5.9, 0.1, 3.8, yellowPillar_texture);

    //Corridor Floor - Back R
    dp.DrawCuboidWithTexture(2.1, 0.01, 1.2, 4.7, 1.95, -4.9 + 0.18, cementFloor_texture); //L1
    dp.DrawCuboidWithTexture(2.1, 0.01, 1.2, 4.7, 3.7, -4.9 + 0.18, cementFloor_texture); //L2
    dp.DrawCuboidWithTexture(2.1, 0.01, 1.2, 4.7, 1.9 * 3 - 0.2, -4.9 + 0.18, cementFloor_texture); //L3

    //Corridor Wall - Back R
    entranceCorridor_texture[1] = entranceCorridor_texture[0] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/Corridor/Back.bmp", 512, 512);
    entranceCorridor_texture[2] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/Corridor/Bottom.bmp", 512, 512);
    entranceCorridor_texture[4] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/Corridor/Top.bmp", 512, 512);
    entranceCorridor_texture[3] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/Corridor/Right.bmp", 512, 512);
    entranceCorridor_texture[5] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/Corridor/Left.bmp", 512, 512);
    dp.DrawCuboidWithTexture(2.1, 0.45, 0.10, 4.7, 1.9, -5.9 + 0.1, entranceCorridor_texture); //L1
    dp.DrawCuboidWithTexture(2.1, 0.45, 0.10, 4.7, 3.7, -5.9 + 0.1, entranceCorridor_texture); //L2
    dp.DrawCuboidWithTexture(2.1, 0.45, 0.10, 4.7, 1.9 * 3 - 0.2, -5.9 + 0.1, entranceCorridor_texture); //L3

    entranceCorridor_texture[1] = entranceCorridor_texture[0] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/Corridor/FB.bmp", 512, 512);
    entranceCorridor_texture[4] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/Corridor/Side.bmp", 512, 512);
    dp.DrawCuboidWithTexture(0.10, 0.45, 1.1, 6.7, 1.9, -4.6, entranceCorridor_texture); //L1
    dp.DrawCuboidWithTexture(0.10, 0.45, 1.1, 6.7, 3.7, -4.6, entranceCorridor_texture); //L2
    dp.DrawCuboidWithTexture(0.10, 0.45, 1.1, 6.7, 1.9 * 3 - 0.2, -4.6, entranceCorridor_texture); //L3

    dp.DrawCuboidWithTexture(0.3, 0.45, 0.1, 6.4, 1.9, -3.65, entranceCorridor_texture); //L1
    dp.DrawCuboidWithTexture(0.3, 0.45, 0.1, 6.4, 3.7, -3.65, entranceCorridor_texture); //L2

    glPopMatrix();

    //-----------------------------------------------------------------------------------------------------------
        //Left
    glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glRotatef(-5.0, 0.0, 1.0, 0.0);

    dp.DrawCuboidWithTexture(2.2, 0.05, 3.75, -3.95, 0.0, 0.18, cementFloor_texture); //Floor - Front
    dp.DrawCuboidWithTexture(2.1, 0.05, 2.25, -3.95, 0.0, -6.0 + 0.18, tileFloor_texture); //Floor - Back

    //Building - Left
    entranceRightLG_texture[1] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/SideBuilding/FICTS.bmp", 512, 512);
    entranceRightLG_texture[0] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/SideBuilding/BackR - LG.bmp", 512, 512);
    dp.DrawCuboidWithTexture(2.1, 0.9, 2.3, -4.0, 0.1, -1.4 + 0.18, entranceRightLG_texture); //LG

    entranceRightL1_texture[1] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/SideBuilding/Front - L1 - Copy.bmp", 512, 512);
    entranceRightL1_texture[0] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/SideBuilding/BackR.bmp", 512, 512);
    entranceRightL1_texture[5] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/SideBuilding/SideL1 LL.bmp", 512, 512);
    entranceRightL1_texture[3] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/SideBuilding/SideL1 LR.bmp", 512, 512);
    dp.DrawCuboidWithTexture(2.1, 0.9, 3.75, -4.0, 1.9, 0.04 + 0.18, entranceRightL1_texture); //L1

    entranceRightL2_texture[1] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/SideBuilding/Front - L2 - Copy.bmp", 512, 512);
    entranceRightL2_texture[0] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/SideBuilding/BackR.bmp", 512, 512);
    entranceRightL2_texture[5] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/SideBuilding/SideL2 LL.bmp", 512, 512);
    entranceRightL2_texture[3] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/SideBuilding/SideL2 LR.bmp", 512, 512);
    dp.DrawCuboidWithTexture(2.1, 0.9, 3.75, -4.0, 3.7, 0.04 + 0.18, entranceRightL2_texture); //L2

    entranceRightL3_texture[1] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/SideBuilding/Front - L3 - Copy.bmp", 512, 512);
    entranceRightL3_texture[0] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/SideBuilding/BackR - L3.bmp", 512, 512);
    entranceRightL3_texture[5] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/SideBuilding/SideL3 LL.bmp", 512, 512);
    entranceRightL3_texture[3] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/SideBuilding/SideL3 LR.bmp", 512, 512);
    dp.DrawCuboidWithTexture(2.6, 1.25 + 0.15, 3.75, -4.35, 5.5, 0.04 + 0.18, entranceRightL3_texture); //L3

    dp.DrawCuboidWithTexture(2.75, 0.5, 5.7, -4.4, 8.1 + 0.15, -1.2, entranceRoof_texture); //L3 roof

    //LG Pillar - Left
    dp.DrawCuboidWithTexture(0.2, 1.0, 0.15, -5.9, 0.1, 3.8, yellowPillar_texture);

    //Corridor Floor - Back L
    dp.DrawCuboidWithTexture(2.1, 0.01, 1.2, -4.7, 1.95, -4.9 + 0.18, cementFloor_texture); //L1
    dp.DrawCuboidWithTexture(2.1, 0.01, 1.2, -4.7, 3.7, -4.9 + 0.18, cementFloor_texture); //L2
    dp.DrawCuboidWithTexture(2.1, 0.01, 1.2, -4.7, 1.9 * 3 - 0.2, -4.9 + 0.18, cementFloor_texture); //L3

    //Coriddor Wall - Back L
    entranceCorridor_texture[1] = entranceCorridor_texture[0] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/Corridor/Back.bmp", 512, 512);
    entranceCorridor_texture[4] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/Corridor/Top.bmp", 512, 512);
    dp.DrawCuboidWithTexture(2.1, 0.45, 0.10, -4.7, 1.9, -5.9 + 0.1, entranceCorridor_texture); //L1
    dp.DrawCuboidWithTexture(2.1, 0.45, 0.10, -4.7, 3.7, -5.9 + 0.1, entranceCorridor_texture); //L2
    dp.DrawCuboidWithTexture(2.1, 0.45, 0.10, -4.7, 1.9 * 3 - 0.2, -5.9 + 0.1, entranceCorridor_texture); //L3

    entranceCorridor_texture[1] = entranceCorridor_texture[0] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/Corridor/FB.bmp", 512, 512);
    entranceCorridor_texture[4] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/Corridor/Side.bmp", 512, 512);
    dp.DrawCuboidWithTexture(0.10, 0.45, 1.1, -6.7, 1.9, -4.6, entranceCorridor_texture); //L1
    dp.DrawCuboidWithTexture(0.10, 0.45, 1.1, -6.7, 3.7, -4.6, entranceCorridor_texture); //L2
    dp.DrawCuboidWithTexture(0.10, 0.45, 1.1, -6.7, 1.9 * 3 - 0.2, -4.6, entranceCorridor_texture); //L3

    dp.DrawCuboidWithTexture(0.3, 0.45, 0.1, -6.4, 1.9, -3.65, entranceCorridor_texture); //L1
    dp.DrawCuboidWithTexture(0.3, 0.45, 0.1, -6.4, 3.7, -3.65, entranceCorridor_texture); //L2

    glPopMatrix();
   
   FreeCreatedTextures1();
}

void DrawScene::DisplayTexturedScene_MainEntranceSideCorridor()
{
    //Right
    glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glRotatef(25.0, 0.0, 1.0, 0.0);

    //Corridor Wall 
    corridorWall_texture[1] = corridorWall_texture[0] = LoadTexture::LoadTextureImageFile("textures/SideCorridor/Corridor/Back.bmp", 512, 512);
    corridorWall_texture[2] = LoadTexture::LoadTextureImageFile("textures/SideCorridor/Corridor/Bottom.bmp", 512, 512);
    corridorWall_texture[4] = LoadTexture::LoadTextureImageFile("textures/SideCorridor/Corridor/Top.bmp", 512, 512);
    corridorWall_texture[3] = LoadTexture::LoadTextureImageFile("textures/SideCorridor/Corridor/Right.bmp", 512, 512);
    corridorWall_texture[5] = LoadTexture::LoadTextureImageFile("textures/SideCorridor/Corridor/Left.bmp", 512, 512);
    dp.DrawCuboidWithTexture(3.3, 0.45, 0.10, 8, 1.9, 3.5 + 0.85, corridorWall_texture); //L1
    dp.DrawCuboidWithTexture(3.3, 0.45, 0.10, 8, 1.9, 2.2 + 0.85, corridorWall_texture); //L1
    dp.DrawCuboidWithTexture(3.3, 0.45, 0.10, 8, 3.7, 3.5 + 0.85, corridorWall_texture); //L2
    dp.DrawCuboidWithTexture(3.3, 0.45, 0.10, 8, 3.7, 2.2 + 0.85, corridorWall_texture); //L2
    dp.DrawCuboidWithTexture(3.3, 0.45, 0.10, 8, 1.9 * 3 - 0.2, 3.5 + 0.85, corridorWall_texture); //L3
    dp.DrawCuboidWithTexture(3.3, 0.45, 0.10, 8, 1.9 * 3 - 0.2, 2.2 + 0.85, corridorWall_texture); //L3

    corridorRoof_texture[1] = corridorRoof_texture[0] = LoadTexture::LoadTextureImageFile("textures/SideCorridor/Roof/Back.bmp", 512, 512);
    corridorRoof_texture[2] = LoadTexture::LoadTextureImageFile("textures/SideCorridor/Roof/Bottom.bmp", 512, 512);
    corridorRoof_texture[4] = LoadTexture::LoadTextureImageFile("textures/SideCorridor/Roof/Top.bmp", 512, 512);
    corridorRoof_texture[3] = LoadTexture::LoadTextureImageFile("textures/SideCorridor/Roof/Right.bmp", 512, 512);
    corridorRoof_texture[5] = LoadTexture::LoadTextureImageFile("textures/SideCorridor/Roof/Left.bmp", 512, 512);
    dp.DrawCuboidWithTexture(3.3, 0.2, 1.0, 8, 1.9 * 4 - 0.3, 2.85 + 0.85, corridorRoof_texture); //roof

    //Corridor Floor 
    SingleTexture(cementFloor_texture, "textures/Cement.bmp", 512, 512);
    dp.DrawCuboidWithTexture(3.3, 0.01, 1.0, 8, 0, 3.8, cementFloor_texture); //LG
    dp.DrawCuboidWithTexture(3.3, 0.01, 0.7, 8, 1.9, 3.7, cementFloor_texture); //L1
    dp.DrawCuboidWithTexture(3.3, 0.01, 0.7, 8, 1.9*2 - 0.1, 3.7, cementFloor_texture); //L2
    dp.DrawCuboidWithTexture(3.3, 0.01, 0.7, 8, 1.9*3 - 0.2, 3.7, cementFloor_texture); //L3

    //Pillar
    SingleTexture(whitePillar_texture, "textures/MainEntrance/SideBuilding/Side.bmp", 512, 512);
    dp.DrawCuboidWithTexture(0.15, 0.94, 0.1, 10.8, 0.03, 3.05, whitePillar_texture); //LG
    dp.DrawCuboidWithTexture(0.15, 0.94, 0.1, 6.0, 0.03, 3.05, whitePillar_texture); //LG
    dp.DrawCuboidWithTexture(0.15, 0.5, 0.1, 10.8, 0.03 + 2.67, 3.05, whitePillar_texture); //L1
    dp.DrawCuboidWithTexture(0.15, 0.5, 0.1, 6.0, 0.03 + 2.67, 3.05, whitePillar_texture); //L1
    dp.DrawCuboidWithTexture(0.15, 0.5, 0.1, 10.8, 0.03 + 4.47, 3.05, whitePillar_texture); //L2
    dp.DrawCuboidWithTexture(0.15, 0.5, 0.1, 6.0, 0.03 + 4.47, 3.05, whitePillar_texture); //L2
    dp.DrawCuboidWithTexture(0.15, 0.5, 0.1, 10.8, 0.03 + 2.67 + 1.8*2, 3.05, whitePillar_texture); //L3
    dp.DrawCuboidWithTexture(0.15, 0.5, 0.1, 6.0, 0.03 + 2.67 + 1.8 * 2, 3.05, whitePillar_texture); //L3
    
    glPopMatrix();

    //-----------------------------------------------------------------------------------------------------------
      //Left
    glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glRotatef(-25.0, 0.0, 1.0, 0.0);

    //Corridor Wall 
    corridorWall_texture[1] = corridorWall_texture[0] = LoadTexture::LoadTextureImageFile("textures/SideCorridor/Corridor/Back2.bmp", 512, 512);
    corridorWall_texture[4] = LoadTexture::LoadTextureImageFile("textures/SideCorridor/Corridor/Top2.bmp", 512, 512);
    dp.DrawCuboidWithTexture(3.3, 0.45, 0.10, -8, 1.9, 3.5 + 0.85, corridorWall_texture); //L1
    dp.DrawCuboidWithTexture(3.3, 0.45, 0.10, -8, 1.9, 2.2 + 0.85, corridorWall_texture); //L1
    dp.DrawCuboidWithTexture(3.3, 0.45, 0.10, -8, 3.7, 3.5 + 0.85, corridorWall_texture); //L2
    dp.DrawCuboidWithTexture(3.3, 0.45, 0.10, -8, 3.7, 2.2 + 0.85, corridorWall_texture); //L2
    dp.DrawCuboidWithTexture(3.3, 0.45, 0.10, -8, 1.9 * 3 - 0.2, 3.5 + 0.85, corridorWall_texture); //L3
    dp.DrawCuboidWithTexture(3.3, 0.45, 0.10, -8, 1.9 * 3 - 0.2, 2.2 + 0.85, corridorWall_texture); //L3

    dp.DrawCuboidWithTexture(3.3, 0.2, 1.0, -8, 1.9 * 4 - 0.3, 2.85 + 0.85, corridorRoof_texture); //roof

    //Corridor Floor 
    dp.DrawCuboidWithTexture(3.3, 0.01, 1.0, -8, 0, 3.8, cementFloor_texture); //LG
    dp.DrawCuboidWithTexture(3.3, 0.01, 0.7, -8, 1.9, 3.7, cementFloor_texture); //L1
    dp.DrawCuboidWithTexture(3.3, 0.01, 0.7, -8, 1.9 * 2 - 0.1, 3.7, cementFloor_texture); //L2
    dp.DrawCuboidWithTexture(3.3, 0.01, 0.7, -8, 1.9 * 3 - 0.2, 3.7, cementFloor_texture); //L3

    //Pillar
    dp.DrawCuboidWithTexture(0.15, 0.94, 0.1, -10.8, 0.03, 3.05, whitePillar_texture); //LG
    dp.DrawCuboidWithTexture(0.15, 0.94, 0.1, -6.0, 0.03, 3.05, whitePillar_texture); //LG
    dp.DrawCuboidWithTexture(0.15, 0.5, 0.1, -10.8, 0.03 + 2.67, 3.05, whitePillar_texture); //L1
    dp.DrawCuboidWithTexture(0.15, 0.5, 0.1, -6.0, 0.03 + 2.67, 3.05, whitePillar_texture); //L1
    dp.DrawCuboidWithTexture(0.15, 0.5, 0.1, -10.8, 0.03 + 4.47, 3.05, whitePillar_texture); //L2
    dp.DrawCuboidWithTexture(0.15, 0.5, 0.1, -6.0, 0.03 + 4.47, 3.05, whitePillar_texture); //L2
    dp.DrawCuboidWithTexture(0.15, 0.5, 0.1, -10.8, 0.03 + 2.67 + 1.8 * 2, 3.05, whitePillar_texture); //L3
    dp.DrawCuboidWithTexture(0.15, 0.5, 0.1, -6.0, 0.03 + 2.67 + 1.8 * 2, 3.05, whitePillar_texture); //L3

    glPopMatrix();

    FreeCreatedTextures1();
}

void DrawScene::DisplayTexturedScene_Stair()
{
    //Right
    glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glRotatef(30.0, 0.0, 1.0, 0.0);

    //Building
    stairBuilding_texture[1] = stairBuilding_texture[0] = LoadTexture::LoadTextureImageFile("textures/Stair/Building/Front.bmp", 256, 256);
    stairBuilding_texture[2] = LoadTexture::LoadTextureImageFile("textures/Cement.bmp", 512, 512);
    stairBuilding_texture[4] = LoadTexture::LoadTextureImageFile("textures/FTMKYellow.bmp", 256, 256);
    stairBuilding_texture[3] = LoadTexture::LoadTextureImageFile("textures/Stair/Building/Right.bmp", 256, 256);
    stairBuilding_texture[5] = LoadTexture::LoadTextureImageFile("textures/Stair/Building/Left.bmp", 512, 512);
    dp.DrawCuboidWithTexture(1.6, 3.85, 1.3, 12.6, 0, 4.8, stairBuilding_texture); 

    //Roof
    buildingRoof_texture[1] = buildingRoof_texture[0] = LoadTexture::LoadTextureImageFile("textures/Stair/Roof/Front.bmp", 256, 256);
    buildingRoof_texture[4] = LoadTexture::LoadTextureImageFile("textures/Stair/Roof/Bottom.bmp", 512, 512);
    buildingRoof_texture[3] = buildingRoof_texture[5] = buildingRoof_texture[2] = LoadTexture::LoadTextureImageFile("textures/Stair/Roof/Side.bmp", 256, 256);
    dp.DrawCuboidWithTexture(1.65, 0.1, 1.9, 12.6, 7.65, 4.9, buildingRoof_texture); 

    glPopMatrix();

    //----------------------------------------------------------------------------------------------
    //Left
    glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glRotatef(-30.0, 0.0, 1.0, 0.0);

    //Building
    stairBuilding_texture[3] = LoadTexture::LoadTextureImageFile("textures/Stair/Building/Left2.bmp", 512, 512);
    stairBuilding_texture[5] = LoadTexture::LoadTextureImageFile("textures/Stair/Building/Right2.bmp", 256, 256);
    dp.DrawCuboidWithTexture(1.6, 3.85, 1.3, -12.6, 0, 4.8, stairBuilding_texture);

    //Roof
    dp.DrawCuboidWithTexture(1.65, 0.1, 1.9, -12.6, 7.65, 4.9, buildingRoof_texture);

    glPopMatrix();

    FreeCreatedTextures1();
}

void DrawScene::DisplayTexturedScene_Stair2()
{
    //Right
    glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glRotatef(38.0, 0.0, 1.0, 0.0);

    //Building
    stairBuilding2_texture[1] = stairBuilding2_texture[0] = LoadTexture::LoadTextureImageFile("textures/Stair/StairBack/Front.bmp", 512, 512);
    stairBuilding2_texture[2] = LoadTexture::LoadTextureImageFile("textures/Cement.bmp", 512, 512);
    stairBuilding2_texture[4] = LoadTexture::LoadTextureImageFile("textures/FTMKYellow.bmp", 256, 256);
    stairBuilding2_texture[3] = LoadTexture::LoadTextureImageFile("textures/Stair/StairBack/Right.bmp", 512, 512);
    stairBuilding2_texture[5] = LoadTexture::LoadTextureImageFile("textures/Stair/StairBack/Left.bmp", 512, 512);
    dp.DrawCuboidWithTexture(1.4, 3.85, 1.3, 10.8, 0, -2.1, stairBuilding2_texture);

    //Roof
    SingleTexture(corridorRoof_texture, "textures/FTMKYellow.bmp", 256, 256);
    corridorRoof_texture[4] = LoadTexture::LoadTextureImageFile("textures/SideCorridor/Roof/Top.bmp", 512, 512);
    dp.DrawCuboidWithTexture(1.4, 0.1, 1.4, 10.8, 7.7, -2.1, corridorRoof_texture);

    //lecOffice
    // Building
    lecOffice_texture[1] = lecOffice_texture[0] = LoadTexture::LoadTextureImageFile("textures/LecOffice/LecOffice/Front.bmp", 512, 512);
    lecOffice_texture[2] = LoadTexture::LoadTextureImageFile("textures/Cement.bmp", 512, 512);
    lecOffice_texture[4] = LoadTexture::LoadTextureImageFile("textures/FTMKYellow.bmp", 256, 256);
    lecOffice_texture[3] = LoadTexture::LoadTextureImageFile("textures/LecOffice/LecOffice/Right.bmp", 512, 512);
    lecOffice_texture[5] = LoadTexture::LoadTextureImageFile("textures/LecOffice/LecOffice/Left.bmp", 512, 512);
    dp.DrawCuboidWithTexture(4.7, 3.85, 2.6, 20.5, 0, 6.4, lecOffice_texture);

    // Roof
    buildingRoof_texture[1] = buildingRoof_texture[0] = LoadTexture::LoadTextureImageFile("textures/Stair/Roof/Front.bmp", 256, 256);
    buildingRoof_texture[4] = LoadTexture::LoadTextureImageFile("textures/Stair/Roof/Bottom.bmp", 512, 512);
    buildingRoof_texture[3] = buildingRoof_texture[5] = buildingRoof_texture[2] = LoadTexture::LoadTextureImageFile("textures/Stair/Roof/Side.bmp", 256, 256);
    dp.DrawCuboidWithTexture(1.3, 0.1, 2.0, 14.5, 7.65, 5.4, buildingRoof_texture);
    dp.DrawCuboidWithTexture(4.7, 0.1, 3.1, 20.5, 7.65, 6.5, buildingRoof_texture);

    // BuildingSide
    lecOfficeSide_texture[1] = lecOfficeSide_texture[0] = LoadTexture::LoadTextureImageFile("textures/LecOffice/LecOfficeSide/Front.bmp", 512, 512);
    lecOfficeSide_texture[2] = LoadTexture::LoadTextureImageFile("textures/Cement.bmp", 512, 512);
    lecOfficeSide_texture[4] = LoadTexture::LoadTextureImageFile("textures/FTMKYellow.bmp", 256, 256);
    lecOfficeSide_texture[3] = LoadTexture::LoadTextureImageFile("textures/Stair/Building/Right.bmp", 512, 512);
    lecOfficeSide_texture[5] = LoadTexture::LoadTextureImageFile("textures/Stair/Building/Left.bmp", 512, 512);
    dp.DrawCuboidWithTexture(1.2, 4.0, 2.6, 26.4, 0, 6.4, lecOfficeSide_texture); //building

    buildingRoof_texture[4] = LoadTexture::LoadTextureImageFile("textures/LeftWing/Roof2.bmp", 512, 512);
    dp.DrawCuboidWithTexture(1.2, 0.15, 3.1, 26.4, 8.0, 6.5, buildingRoof_texture); //roof

    glPopMatrix();

    //----------------------------------------------------------------------------------------------
    //Left
    glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glRotatef(-38.0, 0.0, 1.0, 0.0);

    //Stair2
    dp.DrawCuboidWithTexture(1.4, 3.85, 1.3, -10.8, 0, -2.1, stairBuilding2_texture); //building
    dp.DrawCuboidWithTexture(1.4, 0.1, 1.4, -10.8, 7.7, -2.1, corridorRoof_texture); //roof

    //lecOffice
     //Building
    lecOffice_texture[1] = lecOffice_texture[0] = LoadTexture::LoadTextureImageFile("textures/LecOffice/LecOffice/Front - Copy.bmp", 512, 512);
    dp.DrawCuboidWithTexture(4.7, 3.85, 2.6, -20.5, 0, 6.4, lecOffice_texture);

    //Roof
    buildingRoof_texture[4] = LoadTexture::LoadTextureImageFile("textures/Stair/Roof/Bottom.bmp", 512, 512);
    dp.DrawCuboidWithTexture(1.3, 0.1, 2.0, -14.5, 7.65, 5.4, buildingRoof_texture);
    dp.DrawCuboidWithTexture(4.7, 0.1, 3.1, -20.5, 7.65, 6.5, buildingRoof_texture);

    //BuildingSide
    lecOfficeSide_texture[3] = LoadTexture::LoadTextureImageFile("textures/LecOffice/LecOfficeSide/Right.bmp", 512, 512);
    lecOfficeSide_texture[5] = LoadTexture::LoadTextureImageFile("textures/LecOffice/LecOfficeSide/Left.bmp", 512, 512);
    dp.DrawCuboidWithTexture(1.2, 4.0, 2.6, -26.4, 0, 6.4, lecOfficeSide_texture); //building
    buildingRoof_texture[4] = LoadTexture::LoadTextureImageFile("textures/LeftWing/Roof2.bmp", 512, 512);
    dp.DrawCuboidWithTexture(1.2, 0.15, 3.1, -26.4, 8.0, 6.5, buildingRoof_texture); //roof

    glPopMatrix();

    FreeCreatedTextures1();
    FreeCreatedTextures2();
}

void DrawScene::DisplayTexturedScene_LecOffice() 
{
    //Right
    glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glRotatef(35.0, 0.0, 1.0, 0.0);

    //Building
    lecOfficeSmall_texture[1] = lecOfficeSmall_texture[0] = LoadTexture::LoadTextureImageFile("textures/LecOffice/LecOfficeSmall/Front.bmp", 512, 512);
    lecOfficeSmall_texture[2] = LoadTexture::LoadTextureImageFile("textures/Cement.bmp", 512, 512);
    lecOfficeSmall_texture[4] = LoadTexture::LoadTextureImageFile("textures/FTMKYellow.bmp", 256, 256);
    lecOfficeSmall_texture[3] = LoadTexture::LoadTextureImageFile("textures/LecOffice/LecOfficeSmall/Right.bmp", 512, 512);
    lecOfficeSmall_texture[5] = LoadTexture::LoadTextureImageFile("textures/LecOffice/LecOfficeSmall/Left.bmp", 512, 512);
    dp.DrawCuboidWithTexture(1.3, 1.925, 1.3, 15.0, 0, 6.8, lecOfficeSmall_texture);

   // Roof
    buildingRoof_texture[1] = buildingRoof_texture[0] = LoadTexture::LoadTextureImageFile("textures/Stair/Roof/Front.bmp", 256, 256);
    buildingRoof_texture[4] = LoadTexture::LoadTextureImageFile("textures/Stair/Roof/Bottom.bmp", 512, 512);
    buildingRoof_texture[3] = buildingRoof_texture[5] = buildingRoof_texture[2] = LoadTexture::LoadTextureImageFile("textures/Stair/Roof/Side.bmp", 256, 256);
    dp.DrawCuboidWithTexture(1.3, 0.1, 1.9, 15.0, 3.8, 6.9, buildingRoof_texture);
    glPopMatrix();

    //--------------------------------------------------------------------------------------------------------
    //Left
    glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glRotatef(-35.0, 0.0, 1.0, 0.0);

    dp.DrawCuboidWithTexture(1.3, 1.925, 1.3, -15.0, 0, 6.8, lecOfficeSmall_texture); //Building
    dp.DrawCuboidWithTexture(1.3, 0.1, 1.9, -15.0, 3.8, 6.9, buildingRoof_texture);  //Roof
    glPopMatrix();

    FreeCreatedTextures2();
}

//textures[] -> 0-Back 1-front 2-bottom 3-right 4-top 5-left

void DrawScene::DisplayTexturedScene_LeftWingFront()
{
    glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glRotatef(43.0, 0.0, 1.0, 0.0);

    //Stair
    leftWingStair_texture[1] = leftWingStair_texture[0] = LoadTexture::LoadTextureImageFile("textures/LeftWing/Stair/Front.bmp", 512, 512);
    leftWingStair_texture[2] = LoadTexture::LoadTextureImageFile("textures/Cement.bmp", 512, 512);
    leftWingStair_texture[4] = LoadTexture::LoadTextureImageFile("textures/FTMKYellow.bmp", 256, 256);
    leftWingStair_texture[3] = LoadTexture::LoadTextureImageFile("textures/LeftWing/Stair/Right.bmp", 512, 512);
    leftWingStair_texture[5] = LoadTexture::LoadTextureImageFile("textures/LeftWing/Stair/Left.bmp", 512, 512);
    dp.DrawCuboidWithTexture(1.3, 3.85, 2.4, 28.2, 0, 11.0, leftWingStair_texture);

    //Stair Roof
    buildingRoof_texture[1] = buildingRoof_texture[0] = LoadTexture::LoadTextureImageFile("textures/Stair/Roof/Front.bmp", 256, 256);
    buildingRoof_texture[4] = LoadTexture::LoadTextureImageFile("textures/Stair/Roof/Bottom.bmp", 512, 512);
    buildingRoof_texture[3] = buildingRoof_texture[5] = buildingRoof_texture[2] = LoadTexture::LoadTextureImageFile("textures/Stair/Roof/Side.bmp", 256, 256);
    dp.DrawCuboidWithTexture(1.3, 0.1, 2.4 + 0.6, 28.2, 7.65, 11.1, buildingRoof_texture);


    //Left Wing Front Building
    leftWingFront_texture[1] = leftWingFront_texture[0] = LoadTexture::LoadTextureImageFile("textures/LeftWing/FrontBuilding/Front.bmp", 512, 512);
    leftWingFront_texture[2] = LoadTexture::LoadTextureImageFile("textures/Cement.bmp", 512, 512);
    leftWingFront_texture[4] = LoadTexture::LoadTextureImageFile("textures/FTMKYellow.bmp", 256, 256);
    leftWingFront_texture[3] = LoadTexture::LoadTextureImageFile("textures/LeftWing/FrontBuilding/Right.bmp", 512, 512);
    leftWingFront_texture[5] = LoadTexture::LoadTextureImageFile("textures/LeftWing/FrontBuilding/Left.bmp", 512, 512);
    dp.DrawCuboidWithTexture(10.0, 3.85, 3.0 + 1.5, 39.5, 0, 13.1, leftWingFront_texture);

    //Left Wing Roof
    dp.DrawCuboidWithTexture(10.0, 0.1, 4.5 + 0.6, 39.5, 7.65, 13.2, buildingRoof_texture);
    
    glPopMatrix();
    FreeCreatedTextures2();
}

void DrawScene::DisplayTexturedScene_LeftWingBack()
{
    glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glRotatef(43.0, 0.0, 1.0, 0.0);

    //Small building
    lecOfficeSmall_texture[1] = lecOfficeSmall_texture[0] = LoadTexture::LoadTextureImageFile("textures/LecOffice/LecOfficeSmall/Front.bmp", 512, 512);
    lecOfficeSmall_texture[2] = LoadTexture::LoadTextureImageFile("textures/Cement.bmp", 512, 512);
    lecOfficeSmall_texture[4] = LoadTexture::LoadTextureImageFile("textures/FTMKYellow.bmp", 256, 256);
    lecOfficeSmall_texture[3] = LoadTexture::LoadTextureImageFile("textures/LecOffice/LecOfficeSmall/Right.bmp", 512, 512);
    lecOfficeSmall_texture[5] = LoadTexture::LoadTextureImageFile("textures/LecOffice/LecOfficeSmall/Left.bmp", 512, 512);
    dp.DrawCuboidWithTexture(1.3, 1.925, 1.3, 13.8, 0, -3.3, lecOfficeSmall_texture);

    //Roof
    buildingRoof_texture[1] = buildingRoof_texture[0] = LoadTexture::LoadTextureImageFile("textures/Stair/Roof/Front.bmp", 256, 256);
    buildingRoof_texture[4] = LoadTexture::LoadTextureImageFile("textures/Stair/Roof/Bottom.bmp", 512, 512);
    buildingRoof_texture[3] = buildingRoof_texture[5] = buildingRoof_texture[2] = LoadTexture::LoadTextureImageFile("textures/Stair/Roof/Side.bmp", 256, 256);
    dp.DrawCuboidWithTexture(1.3, 0.1, 1.3+0.6, 13.8, 3.8, -3.4, buildingRoof_texture);

    //Left Wing Back Building1 A
    lecOffice_texture[1] = lecOffice_texture[0] = LoadTexture::LoadTextureImageFile("textures/LeftWing/BackBuilding/Front.bmp", 512, 512);
    lecOffice_texture[2] = LoadTexture::LoadTextureImageFile("textures/Cement.bmp", 512, 512);
    lecOffice_texture[4] = LoadTexture::LoadTextureImageFile("textures/FTMKYellow.bmp", 256, 256);
    lecOffice_texture[3] = LoadTexture::LoadTextureImageFile("textures/LeftWing/BackBuilding/Right.bmp", 512, 512);
    lecOffice_texture[5] = LoadTexture::LoadTextureImageFile("textures/LeftWing/BackBuilding/Left.bmp", 512, 512);

    dp.DrawCuboidWithTexture(8.4, 2.9, 2.6, 23.5, 0, -2.0, lecOffice_texture); //Building
    dp.DrawCuboidWithTexture(8.5, 0.1, 2.6 + 0.6, 23.5, 5.8, -2.1, buildingRoof_texture); //Roof
    dp.DrawCuboidWithTexture(1.3, 0.1, 1.7, 13.8, 5.8, -0.6, buildingRoof_texture); //Small Roof

    //Left Wing Back Building2 A
    leftWingBack1_texture[1] = leftWingBack1_texture[0] = LoadTexture::LoadTextureImageFile("textures/LeftWing/BackBuilding2/Front.bmp", 512, 512);
    leftWingBack1_texture[2] = LoadTexture::LoadTextureImageFile("textures/Cement.bmp", 512, 512);
    leftWingBack1_texture[4] = LoadTexture::LoadTextureImageFile("textures/FTMKYellow.bmp", 256, 256);
    leftWingBack1_texture[3] = LoadTexture::LoadTextureImageFile("textures/LeftWing/BackBuilding2/Right.bmp", 512, 512);
    leftWingBack1_texture[5] = LoadTexture::LoadTextureImageFile("textures/LeftWing/BackBuilding2/Left.bmp", 512, 512);
    dp.DrawCuboidWithTexture(5.2, 2.9, 3.6, 37.5 , 0, -1.6, leftWingBack1_texture); //Building
    dp.DrawCuboidWithTexture(5.2, 0.1, 3.6 + 0.6, 37.5, 5.8, -1.7, buildingRoof_texture); //Roof

    //Left Wing Back Building2 B
    leftWingBack1_texture[1] = leftWingBack1_texture[0] = LoadTexture::LoadTextureImageFile("textures/LeftWing/BackBuilding2/Front2.bmp", 512, 512);
    dp.DrawCuboidWithTexture(2.6, 2.9, 3.0, 45.4, 0, -1.0, leftWingBack1_texture); //Building
    dp.DrawCuboidWithTexture(2.6, 0.1, 3.0 + 0.6, 45.4, 5.8, -1.1, buildingRoof_texture); //Roof
   
    //Left Wing Back Building2 C (Small LG)
    leftWingBack2_texture[1] = leftWingBack2_texture[0] = LoadTexture::LoadTextureImageFile("textures/LeftWing/BackBuilding2/Small Front.bmp", 512, 512);
    leftWingBack2_texture[2] = LoadTexture::LoadTextureImageFile("textures/Cement.bmp", 512, 512);
    leftWingBack2_texture[4] = LoadTexture::LoadTextureImageFile("textures/FTMKYellow.bmp", 256, 256);
    leftWingBack2_texture[3] = LoadTexture::LoadTextureImageFile("textures/LeftWing/BackBuilding2/Small Right.bmp", 512, 512);
    leftWingBack2_texture[5] = LoadTexture::LoadTextureImageFile("textures/LeftWing/BackBuilding2//Small Left.bmp", 512, 512);
    dp.DrawCuboidWithTexture(2.6, 0.96, 0.6, 45.4, 0, -4.7, leftWingBack2_texture); //Building
   
    FTMKLabelRoof_texture[1] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/FTMKLabelRoof/Front.bmp", 256, 256);
    FTMKLabelRoof_texture[2] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/FTMKLabelRoof/Bottom.bmp", 512, 512);
    FTMKLabelRoof_texture[4] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/FTMKLabelRoof/Top.bmp", 256, 256);
    FTMKLabelRoof_texture[3] = FTMKLabelRoof_texture[5] = FTMKLabelRoof_texture[0] = LoadTexture::LoadTextureImageFile("textures/MainEntrance/FTMKLabelRoof/Side.bmp", 256, 256);
    dp.DrawCuboidWithTexture(2.6, 0.11, 0.6 + 0.6, 45.4, 1.9, -4.8, FTMKLabelRoof_texture); //roof

     //Left Wing Back Building3 A
    leftWingBack3_texture[0] = LoadTexture::LoadTextureImageFile("textures/LeftWing/BackBuilding3/Front.bmp", 256, 256);
    leftWingBack3_texture[1] = LoadTexture::LoadTextureImageFile("textures/LeftWing/BackBuilding3/Back.bmp", 256, 256);
    leftWingBack3_texture[2] = LoadTexture::LoadTextureImageFile("textures/Cement.bmp", 512, 512);
    leftWingBack3_texture[4] = LoadTexture::LoadTextureImageFile("textures/FTMKYellow.bmp", 256, 256);
    leftWingBack3_texture[3] = LoadTexture::LoadTextureImageFile("textures/LeftWing/BackBuilding3/Right.bmp", 256, 256);
    leftWingBack3_texture[5] = LoadTexture::LoadTextureImageFile("textures/LeftWing/BackBuilding3/Left.bmp", 256, 256);
    dp.DrawCuboidWithTexture(1.7, 2.9, 1.9, 49.7, 0, 0.1, leftWingBack3_texture); //Building

    buildingRoof_texture[4] = LoadTexture::LoadTextureImageFile("textures/LeftWing/roof1.bmp", 512, 512);
    dp.DrawCuboidWithTexture(1.7, 0.1, 1.9 + 0.6, 49.7, 5.8, 0, buildingRoof_texture); //Roof

    //Left Wing Back Building3 Lobby Small
    leftWingLobby_texture[1] = leftWingLobby_texture[0] = LoadTexture::LoadTextureImageFile("textures/LeftWing/SmallLobby/Front.bmp", 512, 512);
    leftWingLobby_texture[2] = LoadTexture::LoadTextureImageFile("textures/Cement.bmp", 512, 512);
    leftWingLobby_texture[4] = LoadTexture::LoadTextureImageFile("textures/FTMKYellow.bmp", 256, 256);
    leftWingLobby_texture[3] = LoadTexture::LoadTextureImageFile("textures/LeftWing/SmallLobby/Right.bmp", 512, 512);
    leftWingLobby_texture[5] = LoadTexture::LoadTextureImageFile("textures/LeftWing/SmallLobby/Left.bmp", 512, 512);
    dp.DrawCuboidWithTexture(1.1, 1.2, 1.1, 50.4, 0, -2.9, leftWingLobby_texture); //Building

    buildingRoof_texture[4] = LoadTexture::LoadTextureImageFile("textures/Stair/Roof/Bottom.bmp", 512, 512);
    dp.DrawCuboidWithTexture(1.1 + 0.1, 0.1, 1.1 + 0.1, 50.4, 2.4, -3.0, buildingRoof_texture); //Roof

    glPopMatrix();
    FreeCreatedTextures2();
}

void DrawScene::DisplayTexturedScene_LeftWingMekdi()
{
    glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glRotatef(43.0, 0.0, 1.0, 0.0);
  
    //mekdi 
    mekdi_texture[1] = mekdi_texture[0] = LoadTexture::LoadTextureImageFile("textures/LeftWing/Mekdi/Front.bmp", 512, 512);
    mekdi_texture[2] = LoadTexture::LoadTextureImageFile("textures/Cement.bmp", 512, 512);
    mekdi_texture[4] = LoadTexture::LoadTextureImageFile("textures/FTMKYellow.bmp", 256, 256);
    mekdi_texture[3] = LoadTexture::LoadTextureImageFile("textures/LeftWing/Mekdi/Right.bmp", 512, 512);
    mekdi_texture[5] = LoadTexture::LoadTextureImageFile("textures/LeftWing/Mekdi/Left.bmp", 512, 512);
    dp.DrawCuboidWithTexture(2.2, 1.5, 3.3, 52.5, 0, 7.0, mekdi_texture); //Building
   
    //Roof
    buildingRoof_texture[1] = buildingRoof_texture[0] = LoadTexture::LoadTextureImageFile("textures/Stair/Roof/Front.bmp", 256, 256);
    buildingRoof_texture[4] = LoadTexture::LoadTextureImageFile("textures/Stair/Roof/Bottom.bmp", 512, 512);
    buildingRoof_texture[3] = buildingRoof_texture[5] = buildingRoof_texture[2] = LoadTexture::LoadTextureImageFile("textures/Stair/Roof/Side.bmp", 256, 256);
    dp.DrawCuboidWithTexture(2.2 + 0.6, 0.1, 3.3 + 0.6, 52.5, 3.0, 7.0, buildingRoof_texture); //Roof
   
    //Walkway near Mekdi
    walkway_texture[1] = walkway_texture[0] = LoadTexture::LoadTextureImageFile("textures/LeftWing/Walkway/Front.bmp", 512, 512);
    walkway_texture[2] = LoadTexture::LoadTextureImageFile("textures/Cement.bmp", 512, 512);
    walkway_texture[4] = LoadTexture::LoadTextureImageFile("textures/FTMKYellow.bmp", 256, 256);
    walkway_texture[3] = LoadTexture::LoadTextureImageFile("textures/LeftWing/Walkway/Right.bmp", 512, 512);
    walkway_texture[5] = LoadTexture::LoadTextureImageFile("textures/LeftWing/Walkway/Left.bmp", 512, 512);
    dp.DrawCuboidWithTexture(1.1, 2.7, 3.3, 48.5, 0, 5.4, walkway_texture); //Building 
    dp.DrawCuboidWithTexture(1.1, 0.1, 3.4, 48.5, 5.4, 5.4, buildingRoof_texture); //Roof

    //Walkway middle
    dp.DrawCuboidWithTexture(1.1, 2.7, 3.3, 35.5, 0, 5.4, walkway_texture); //Building 
    dp.DrawCuboidWithTexture(1.1, 0.1, 3.4, 35.5, 5.4, 5.4, buildingRoof_texture); //Roof

    glPopMatrix();
    FreeCreatedTextures2();
}

void DrawScene::DisplayTexturedScene_RightWingFront()
{
    glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glRotatef(-43.0, 0.0, 1.0, 0.0);
   
    //Right Wing Stair
    leftWingStair_texture[1] = leftWingStair_texture[0] = LoadTexture::LoadTextureImageFile("textures/RightWing/Stair/Front.bmp", 512, 512);
    leftWingStair_texture[2] = LoadTexture::LoadTextureImageFile("textures/Cement.bmp", 512, 512);
    leftWingStair_texture[4] = LoadTexture::LoadTextureImageFile("textures/FTMKYellow.bmp", 256, 256);
    leftWingStair_texture[5] = LoadTexture::LoadTextureImageFile("textures/RightWing/Stair/Left.bmp", 512, 512);
    leftWingStair_texture[3] = LoadTexture::LoadTextureImageFile("textures/RightWing/Stair/Right.bmp", 512, 512);
    dp.DrawCuboidWithTexture(0.9, 4.0, 0.9, -27.8, 0, 10.8, leftWingStair_texture);

    //Right Wing Stair Roof
    buildingRoof_texture[1] = buildingRoof_texture[0] = LoadTexture::LoadTextureImageFile("textures/Stair/Roof/Front.bmp", 256, 256);
    buildingRoof_texture[4] = LoadTexture::LoadTextureImageFile("textures/Stair/Roof/Bottom.bmp", 512, 512);
    buildingRoof_texture[3] = buildingRoof_texture[5] = buildingRoof_texture[2] = LoadTexture::LoadTextureImageFile("textures/Stair/Roof/Side.bmp", 256, 256);
    dp.DrawCuboidWithTexture(0.9, 0.1, 0.9, -27.8, 8.0, 10.8, buildingRoof_texture);

    //Right Wing Front Building1
    leftWingFront_texture[1] = leftWingFront_texture[0] = LoadTexture::LoadTextureImageFile("textures/RightWing/FrontBuilding1/Front.bmp", 512, 512);
    leftWingFront_texture[2] = LoadTexture::LoadTextureImageFile("textures/Cement.bmp", 512, 512);
    leftWingFront_texture[4] = LoadTexture::LoadTextureImageFile("textures/FTMKYellow.bmp", 256, 256);
    leftWingFront_texture[3] = LoadTexture::LoadTextureImageFile("textures/RightWing/FrontBuilding1/Right.bmp", 512, 512);
    leftWingFront_texture[5] = LoadTexture::LoadTextureImageFile("textures/RightWing/FrontBuilding1/Left.bmp", 512, 512);
    dp.DrawCuboidWithTexture(6.7, 4.0, 4.3, -35.4, 0, 13.5, leftWingFront_texture); //building
    dp.DrawCuboidWithTexture(6.7+0.2, 0.1, 4.3 + 0.6, -35.4, 8.0, 13.6, buildingRoof_texture); //roof

    //Small Stair
    leftWingStair_texture[1] = leftWingStair_texture[0] = LoadTexture::LoadTextureImageFile("textures/RightWing/FrontBuilding1/StairFront.bmp", 512, 512);
    dp.DrawCuboidWithTexture(0.5, 4.0, 2.87, -42.6, 0, 12.1, leftWingStair_texture); //Stair Small
    dp.DrawCuboidWithTexture(0.5, 0.1, 2.87 + 0.6, -42.6, 8.0, 12.1, buildingRoof_texture); //Roof

    //Right Wing Front Building1 B
    leftWingFront_texture[1] = leftWingFront_texture[0] = LoadTexture::LoadTextureImageFile("textures/RightWing/FrontBuilding2/Front.bmp", 512, 512);
    leftWingFront_texture[3] = LoadTexture::LoadTextureImageFile("textures/RightWing/FrontBuilding2/Right.bmp", 512, 512);
    leftWingFront_texture[5] = LoadTexture::LoadTextureImageFile("textures/RightWing/FrontBuilding2/Left.bmp", 512, 512);
    dp.DrawCuboidWithTexture(1.6, 4.0, 2.87, -44.7, 0, 12.1, leftWingFront_texture); //building

    buildingRoof_texture[4] = LoadTexture::LoadTextureImageFile("textures/RightWing/FrontBuilding2/roof2.bmp", 512, 512);
    dp.DrawCuboidWithTexture(1.6, 0.1, 2.87 + 0.6, -44.7, 8.0, 12.1, buildingRoof_texture); //roof

    //Right Wing Front Building2 A
    leftWingFront2_texture[1] = leftWingFront2_texture[0] = LoadTexture::LoadTextureImageFile("textures/RightWing/FrontBuilding3/Front.bmp", 512, 512);
    leftWingFront2_texture[2] = LoadTexture::LoadTextureImageFile("textures/Cement.bmp", 512, 512);
    leftWingFront2_texture[4] = LoadTexture::LoadTextureImageFile("textures/FTMKYellow.bmp", 256, 256);
    leftWingFront2_texture[3] = LoadTexture::LoadTextureImageFile("textures/RightWing/FrontBuilding3/Right.bmp", 512, 512);
    leftWingFront2_texture[5] = LoadTexture::LoadTextureImageFile("textures/RightWing/FrontBuilding3/Left.bmp", 512, 512);
    dp.DrawCuboidWithTexture(2.9, 3.4, 4.3, -49.2, 0, 13.5, leftWingFront2_texture); //building
    
    buildingRoof_texture[4] = LoadTexture::LoadTextureImageFile("textures/Stair/Roof/Bottom.bmp", 512, 512);
    dp.DrawCuboidWithTexture(2.9, 0.1, 4.3 + 0.6, -49.2, 6.8, 13.6, buildingRoof_texture); //roof

    //Right Wing Front Building2 B
    dp.DrawCuboidWithTexture(2.9, 3.4, 2.15, -55.0, 0, 11.4, leftWingFront2_texture); //building
    dp.DrawCuboidWithTexture(2.9, 0.1, 2.15 + 0.6, -55.0, 6.8, 11.4, buildingRoof_texture); //roof

    //Right Wing Front Building2 B Small
    leftWingFront3_texture[1] = leftWingFront2_texture[0] = LoadTexture::LoadTextureImageFile("textures/RightWing/FrontBuilding3/Small/Front.bmp", 512, 512);
    leftWingFront3_texture[2] = LoadTexture::LoadTextureImageFile("textures/Cement.bmp", 512, 512);
    leftWingFront3_texture[4] = LoadTexture::LoadTextureImageFile("textures/FTMKYellow.bmp", 256, 256);
    leftWingFront3_texture[3] = LoadTexture::LoadTextureImageFile("textures/RightWing/FrontBuilding3/Small/Right.bmp", 512, 512);
    leftWingFront3_texture[5] = LoadTexture::LoadTextureImageFile("textures/RightWing/FrontBuilding3/Small/Left.bmp", 512, 512);
    dp.DrawCuboidWithTexture(2.9, 1.1, 1.075, -55.0, 0, 14.6, leftWingFront3_texture); //building
    dp.DrawCuboidWithTexture(2.9, 0.1, 1.075 + 0.6, -55.0, 2.2, 14.7, buildingRoof_texture); //roof

    //Right Wing Front Building2 C
    leftWingFront4_texture[1] = leftWingFront4_texture[0] = LoadTexture::LoadTextureImageFile("textures/RightWing/FrontBuilding4/Front.bmp", 512, 512);
    leftWingFront4_texture[2] = LoadTexture::LoadTextureImageFile("textures/Cement.bmp", 512, 512);
    leftWingFront4_texture[4] = LoadTexture::LoadTextureImageFile("textures/FTMKYellow.bmp", 256, 256);
    leftWingFront4_texture[3] = LoadTexture::LoadTextureImageFile("textures/RightWing/FrontBuilding4/Right.bmp", 512, 512);
    leftWingFront4_texture[5] = LoadTexture::LoadTextureImageFile("textures/RightWing/FrontBuilding4/Left.bmp", 512, 512);
    dp.DrawCuboidWithTexture(0.5, 3.4, 2.15, -58.4, 0, 11.4, leftWingFront4_texture); //building
    dp.DrawCuboidWithTexture(0.6, 0.1, 2.15 + 0.6, -58.4, 6.8, 11.4, buildingRoof_texture); //roof

    //Right Wing Lobby
    leftWingLobby_texture[1] = leftWingLobby_texture[0] = LoadTexture::LoadTextureImageFile("textures/RightWing/Lobby/Front.bmp", 512, 512);
    leftWingLobby_texture[2] = LoadTexture::LoadTextureImageFile("textures/Cement.bmp", 512, 512);
    leftWingLobby_texture[4] = LoadTexture::LoadTextureImageFile("textures/FTMKYellow.bmp", 256, 256);
    leftWingLobby_texture[3] = LoadTexture::LoadTextureImageFile("textures/RightWing/Lobby/Right.bmp", 512, 512);
    leftWingLobby_texture[5] = LoadTexture::LoadTextureImageFile("textures/RightWing/Lobby/Left.bmp", 512, 512);
    dp.DrawCuboidWithTexture(1.5, 1.1, 3.225, -60.4, 0, 12.5, leftWingLobby_texture); //building
    dp.DrawCuboidWithTexture(1.5, 0.1, 3.225 + 0.6, -60.4, 2.2, 12.5, buildingRoof_texture); //roof

    glPopMatrix();
    FreeCreatedTextures2();
}

void DrawScene::DisplayTexturedScene_RightWingBack()
{
    glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glRotatef(-43.0, 0.0, 1.0, 0.0);

    //Small building
    lecOfficeSmall_texture[1] = lecOfficeSmall_texture[0] = LoadTexture::LoadTextureImageFile("textures/LecOffice/LecOfficeSmall/Front.bmp", 512, 512);
    lecOfficeSmall_texture[2] = LoadTexture::LoadTextureImageFile("textures/Cement.bmp", 512, 512);
    lecOfficeSmall_texture[4] = LoadTexture::LoadTextureImageFile("textures/FTMKYellow.bmp", 256, 256);
    lecOfficeSmall_texture[3] = LoadTexture::LoadTextureImageFile("textures/LecOffice/LecOfficeSmall/Right.bmp", 512, 512);
    lecOfficeSmall_texture[5] = LoadTexture::LoadTextureImageFile("textures/LecOffice/LecOfficeSmall/Left.bmp", 512, 512);
    dp.DrawCuboidWithTexture(1.3, 1.925, 1.3, -13.8, 0, -3.3, lecOfficeSmall_texture);

    //Roof
    buildingRoof_texture[1] = buildingRoof_texture[0] = LoadTexture::LoadTextureImageFile("textures/Stair/Roof/Front.bmp", 256, 256);
    buildingRoof_texture[4] = LoadTexture::LoadTextureImageFile("textures/Stair/Roof/Bottom.bmp", 512, 512);
    buildingRoof_texture[3] = buildingRoof_texture[5] = buildingRoof_texture[2] = LoadTexture::LoadTextureImageFile("textures/Stair/Roof/Side.bmp", 256, 256);
    dp.DrawCuboidWithTexture(1.3, 0.1, 1.3 + 0.6, -13.8, 3.8, -3.4, buildingRoof_texture);

    //Right Wing Back Building1 A
    lecOffice_texture[1] = lecOffice_texture[0] = LoadTexture::LoadTextureImageFile("textures/LeftWing/BackBuilding/Front.bmp", 512, 512);
    lecOffice_texture[2] = LoadTexture::LoadTextureImageFile("textures/Cement.bmp", 512, 512);
    lecOffice_texture[4] = LoadTexture::LoadTextureImageFile("textures/FTMKYellow.bmp", 256, 256);
    lecOffice_texture[3] = LoadTexture::LoadTextureImageFile("textures/LeftWing/BackBuilding/Right.bmp", 512, 512);
    lecOffice_texture[5] = LoadTexture::LoadTextureImageFile("textures/LeftWing/BackBuilding/Left.bmp", 512, 512);

    dp.DrawCuboidWithTexture(8.4, 2.9, 2.6, -23.5, 0, -2.0, lecOffice_texture); //Building
    dp.DrawCuboidWithTexture(8.5, 0.1, 2.6 + 0.6, -23.5, 5.8, -2.1, buildingRoof_texture); //Roof
    dp.DrawCuboidWithTexture(1.3, 0.1, 1.7, -13.8, 5.8, -0.6, buildingRoof_texture); //Small Roof

    //Walkway roof
    dp.DrawCuboidWithTexture(1.3, 0.1, 2.6, -33.0, 1.7, -2.0, buildingRoof_texture); //Small Roof

    //Right Wing Back Building2 A
    leftWingBack1_texture[1] = leftWingBack1_texture[0] = LoadTexture::LoadTextureImageFile("textures/RightWing/BackBuilding1/Front.bmp", 512, 512);
    leftWingBack1_texture[2] = LoadTexture::LoadTextureImageFile("textures/Cement.bmp", 512, 512);
    leftWingBack1_texture[4] = LoadTexture::LoadTextureImageFile("textures/FTMKYellow.bmp", 256, 256);
    leftWingBack1_texture[3] = LoadTexture::LoadTextureImageFile("textures/RightWing/BackBuilding1/Right.bmp", 512, 512);
    leftWingBack1_texture[5] = LoadTexture::LoadTextureImageFile("textures/RightWing/BackBuilding1/Left.bmp", 512, 512);
    dp.DrawCuboidWithTexture(2.1, 5.1, 4.3, -36.4, 0, -2.0, leftWingBack1_texture); //Building
    dp.DrawCuboidWithTexture(2.1, 0.1, 4.3 + 0.6, -36.4, 10.2, -2.1, buildingRoof_texture); //Roof
 
    //Right Wing Back Building2 B
    leftWingBack1_texture[0] = LoadTexture::LoadTextureImageFile("textures/RightWing/BackBuilding1/Front2.bmp", 512, 512);
    dp.DrawCuboidWithTexture(1.9, 5.1, 4.3/2, -40.4, 0, 0.1, leftWingBack1_texture); //Building
    
    buildingRoof_texture[4] = LoadTexture::LoadTextureImageFile("textures/RightWing/roof1.bmp", 512, 512);
    dp.DrawCuboidWithTexture(1.9, 0.1, 4.3/2 + 0.6, -40.4, 10.2, 0.1, buildingRoof_texture); //Roof

    //Right Wing Back Building2 C
    leftWingBack1_texture[1] = leftWingBack1_texture[0] = LoadTexture::LoadTextureImageFile("textures/RightWing/BackBuilding1/Front3.bmp", 512, 512); 
    dp.DrawCuboidWithTexture(2.1, 5.1, 4.3, -44.4, 0, -2.0, leftWingBack1_texture); //Building
   
    buildingRoof_texture[4] = LoadTexture::LoadTextureImageFile("textures/Stair/Roof/Bottom.bmp", 512, 512);
    dp.DrawCuboidWithTexture(2.1, 0.1, 4.3 + 0.6, -44.4, 10.2, -2.1, buildingRoof_texture); //Roof

    //Left Wing Back Building3 A
    leftWingBack2_texture[1] = leftWingBack2_texture[0] = LoadTexture::LoadTextureImageFile("textures/RightWing/BackBuilding2/Front.bmp", 512, 512);
    leftWingBack2_texture[2] = LoadTexture::LoadTextureImageFile("textures/Cement.bmp", 512, 512);
    leftWingBack2_texture[4] = LoadTexture::LoadTextureImageFile("textures/FTMKYellow.bmp", 256, 256);
    leftWingBack2_texture[3] = LoadTexture::LoadTextureImageFile("textures/RightWing/BackBuilding2/Right.bmp", 512, 512);
    leftWingBack2_texture[5] = LoadTexture::LoadTextureImageFile("textures/RightWing/BackBuilding2/Left.bmp", 512, 512);
    dp.DrawCuboidWithTexture(2.1, 3.8, 4.3, -48.6, 0, -2.0, leftWingBack2_texture); //Building
    dp.DrawCuboidWithTexture(2.1, 0.1, 4.3 + 0.6, -48.6, 7.6, -2.1, buildingRoof_texture); //roof

    //Left Wing Back Building3 B
    leftWingBack2_texture[1] = leftWingBack2_texture[0] = LoadTexture::LoadTextureImageFile("textures/RightWing/BackBuilding2/Front2.bmp", 512, 512);
    dp.DrawCuboidWithTexture(4.2, 3.8, 3.15, -54.9, 0, -0.8, leftWingBack2_texture); //Building
    dp.DrawCuboidWithTexture(4.2, 0.1, 3.15 + 0.6, -54.9, 7.6, -0.8, buildingRoof_texture); //roof

    //Left Wing Back Building3 C
    leftWingBack2_texture[1] = leftWingBack2_texture[0] = LoadTexture::LoadTextureImageFile("textures/RightWing/BackBuilding2/Front3.bmp", 512, 512);
    leftWingBack2_texture[5] = LoadTexture::LoadTextureImageFile("textures/RightWing/BackBuilding2/Left2.bmp", 512, 512);
    dp.DrawCuboidWithTexture(2.1, 3.8, 1.2, -61.2, 0, 1.2, leftWingBack2_texture); //Building
    dp.DrawCuboidWithTexture(2.1, 0.1, 1.2 + 0.6, -61.2, 7.6, 1.2, buildingRoof_texture); //roof

    //Left Wing Back Building3 D
    leftWingBack3_texture[1] = leftWingBack3_texture[4] = LoadTexture::LoadTextureImageFile("textures/FTMKYellow.bmp", 256, 256);
    leftWingBack3_texture[2] = LoadTexture::LoadTextureImageFile("textures/Cement.bmp", 512, 512);
    leftWingBack3_texture[0] = LoadTexture::LoadTextureImageFile("textures/RightWing/BackBuilding3//Front.bmp", 512, 512);
    leftWingBack3_texture[5] = LoadTexture::LoadTextureImageFile("textures/RightWing/BackBuilding3//Left.bmp", 512, 512);
    dp.DrawCuboidWithTexture(1.4, 3.8, 1.2, -60.5, 0, -1.2, leftWingBack3_texture); //Building

    buildingRoof_texture[4] = LoadTexture::LoadTextureImageFile("textures/RightWing/roof2.bmp", 512, 512);
    dp.DrawCuboidWithTexture(1.4, 0.4, 1.4, -60.5, 7.6, -1.2, buildingRoof_texture); //roof

    //Left Wing Back Building3 Small
    leftWingLobby_texture[1] = leftWingLobby_texture[4] = LoadTexture::LoadTextureImageFile("textures/FTMKYellow.bmp", 256, 256);
    leftWingLobby_texture[2] = LoadTexture::LoadTextureImageFile("textures/Cement.bmp", 512, 512);
    leftWingLobby_texture[0] = LoadTexture::LoadTextureImageFile("textures/RightWing/BackBuilding3//Front2.bmp", 512, 512);
    leftWingLobby_texture[5] = LoadTexture::LoadTextureImageFile("textures/RightWing/BackBuilding3//Left2.bmp", 256, 256);
    dp.DrawCuboidWithTexture(0.9, 1.3, 0.75, -60.0, 0, -3.1, leftWingLobby_texture); //Building

    buildingRoof_texture[4] = LoadTexture::LoadTextureImageFile("textures/Stair/Roof/Bottom.bmp", 512, 512);
    dp.DrawCuboidWithTexture(1.0, 0.1, 0.75 + 0.2, -60.0, 2.7, -3.2, buildingRoof_texture); //roof
    
    glPopMatrix();
    FreeCreatedTextures2();
}

void DrawScene::DisplayTexturedScene_RightWingWalkway()
{
    glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glRotatef(-43.0, 0.0, 1.0, 0.0);

    //Walkway tail
    walkway_texture[1] = walkway_texture[0] = LoadTexture::LoadTextureImageFile("textures/RightWing/Walkway/Front.bmp", 512, 512);
    walkway_texture[2] = LoadTexture::LoadTextureImageFile("textures/Cement.bmp", 512, 512);
    walkway_texture[4] = LoadTexture::LoadTextureImageFile("textures/FTMKYellow.bmp", 256, 256);
    walkway_texture[3] = LoadTexture::LoadTextureImageFile("textures/RightWing/Walkway/Right.bmp", 512, 512);
    walkway_texture[5] = LoadTexture::LoadTextureImageFile("textures/RightWing/Walkway/Left.bmp", 512, 512);
    dp.DrawCuboidWithTexture(1.1, 2.7, 3.3, -58.0, 0, 5.4, walkway_texture); //Building 

    buildingRoof_texture[1] = buildingRoof_texture[0] = LoadTexture::LoadTextureImageFile("textures/Stair/Roof/Front.bmp", 256, 256);
    buildingRoof_texture[4] = LoadTexture::LoadTextureImageFile("textures/Stair/Roof/Bottom.bmp", 512, 512);
    buildingRoof_texture[3] = buildingRoof_texture[5] = buildingRoof_texture[2] = LoadTexture::LoadTextureImageFile("textures/Stair/Roof/Side.bmp", 256, 256);
    dp.DrawCuboidWithTexture(1.1, 0.1, 3.4, -58.0, 5.4, 5.4, buildingRoof_texture); //Roof

    //Walkway middle
    dp.DrawCuboidWithTexture(1.1, 2.7, 3.3, -32.0, 0, 5.8, walkway_texture); //Building 
    dp.DrawCuboidWithTexture(1.1, 0.1, 3.4, -32.0, 5.4, 5.8, buildingRoof_texture); //Roof

    glPopMatrix();
    FreeCreatedTextures2();
}

void DrawScene::DisplayTexturedScene_Ground()
{
    glColor3f(1.0, 1.0, 0.8);
    SingleTexture(grass_texture, "textures/Grass.bmp", 512, 512);
   
    glPushMatrix();
    glRotatef(43.0, 0.0, 1.0, 0.0);
    glTranslatef(60.0, 0.0, 15.0);
    for (double iii = -87; iii < -1; iii += 6)
        for (double jjj = -16.7; jjj < 11.7; jjj += 0.6)
            dp.DrawCuboidWithTexture(3, 0.1, 3, iii, -1.198, jjj, grass_texture);
    glPopMatrix();

    glPushMatrix();
    glRotatef(-43.0, 0.0, 1.0, 0.0);
    glTranslatef(60.0, 0.0, 15.0);
    for (double iii = -138; iii < -34; iii += 6)
        for (double jjj = -17.7; jjj < 12.3; jjj += 0.6)
            dp.DrawCuboidWithTexture(3, 0.1, 3, iii, -1.199, jjj, grass_texture);
    glPopMatrix();

    FreeCreatedTextures3();
}

/*These scenes created by Wong Ji Yong*/
void DrawScene::DisplayTexturedScene_Parking()
{
    //road
    {
        glColor3f(1.0, 1.0, 1.0);
        SingleTexture(tar_texture, "textures/Tart2.bmp", 512, 512);
        glTranslatef(0.0, -1.2, 0.0);

        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        for (int iii = -72; iii < 30; iii += 4)
            for (int jjj = -52; jjj < -6; jjj += 4)
                dp.DrawCuboidWithTexture(2, 0.1, 2, iii, -0.211, jjj, tar_texture);
        glPopMatrix();
    }

    //lines
    {
        double yyy = 0.4;
        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        dp.DrawCuboid(14.5, 0.2, 0.04, -11.5, -yyy, -26.6);
        glPopMatrix();

        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        dp.DrawCuboid(15.4, 0.2, 0.04, -12.4, -yyy, -32.45);
        glPopMatrix();

        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        dp.DrawCuboid(15, 0.2, 0.04, -12, -yyy, -34.15);
        glPopMatrix();

        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        dp.DrawCuboid(17, 0.2, 0.04, -14, -yyy, -40.1);
        glPopMatrix();

        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        dp.DrawCuboid(19.8, 0.2, 0.04, -16.6, -yyy, -41.7);
        glPopMatrix();

        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        dp.DrawCuboid(13, 0.2, 0.04, 1.5, -yyy, -47);
        glPopMatrix();

        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        dp.DrawCuboid(12.25, 0.2, 0.04, -28, -yyy, -47);
        glPopMatrix();

        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        for (double jjj = -25.8; jjj < 3.3; jjj += 0.6)
            dp.DrawCuboid(0.04, 0.2, 0.65, jjj, -yyy, -27.5);
        glPopMatrix();

        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        for (double jjj = -27.8; jjj < 3.3; jjj += 0.6)
            dp.DrawCuboid(0.04, 0.2, 0.65, jjj, -yyy, -31.6);
        glPopMatrix();

        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        for (double jjj = -27; jjj < 4; jjj += 1.35)
            dp.DrawCuboid(0.04, 0.2, 0.75, jjj, -yyy, -35.05);
        glPopMatrix();

        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        for (double jjj = -31; jjj < 4; jjj += 1.35)
            dp.DrawCuboid(0.04, 0.2, 0.75, jjj, -yyy, -39.15);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(0.3, 0.0, 0.0);
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        for (double nnn = -36.45; nnn < 4; nnn += 1.35)
            dp.DrawCuboid(0.04, 0.2, 0.75, nnn, -yyy, -42.6);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-0.3, 0.0, 0.0);
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        for (double nnn = -11; nnn < 15; nnn += 1.35)
            dp.DrawCuboid(0.04, 0.2, 0.75, nnn, -yyy, -46.3);
        for (double nnn = -39.8; nnn < -15; nnn += 1.35)
            dp.DrawCuboid(0.04, 0.2, 0.75, nnn, -yyy, -46.3);
        glPopMatrix();
    }

    //bush
    {
        glColor3f(1.0, 1.0, 1.0);
        SingleTexture(bush_texture, "textures/Road.bmp", 512, 512);
        glTranslatef(0.0, -0.8, 0.0);

        glPushMatrix();
        glRotatef(-47.0, 0.0, 1.0, 0.0);
        for (int jjj = -50; jjj < -27; jjj += 1)
            dp.DrawCuboidWithTexture(0.55, 0.55, 0.55, -9.5, -0.2, jjj, bush_texture);
        glPopMatrix();

        glPushMatrix();
        glRotatef(-68.5, 0.0, 1.0, 0.0);
        glTranslatef(6, 0.0, -7.0);
        for (int jjj = -15; jjj < -10; jjj += 1)
            dp.DrawCuboidWithTexture(0.55, 0.55, 0.55, -25, -0.2, jjj, bush_texture);
        glPopMatrix();

        glPushMatrix();
        glRotatef(47.0, 0.0, 1.0, 0.0);
        for (int jjj = -82; jjj < -35; jjj += 1)
            dp.DrawCuboidWithTexture(0.55, 0.55, 0.55, 10.5, -0.2, jjj, bush_texture);
        glPopMatrix();

        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        glTranslatef(-0.2, 0.0, 0.0);
        for (int jjj = -26.9; jjj < 4; jjj += 1)
            dp.DrawCuboidWithTexture(0.55, 0.55, 0.55, jjj, -0.2, -25.8, bush_texture);
        glPopMatrix();

        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        glTranslatef(-0.2, 0.0, 0.0);
        for (int jjj = -40; jjj < 4; jjj += 1)
            dp.DrawCuboidWithTexture(0.55, 0.55, 0.55, jjj, -0.2, -33.3, bush_texture);
        glPopMatrix();

        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        glTranslatef(-0.2, 0.0, 0.0);
        for (int jjj = -36.9; jjj < 4; jjj += 1)
            dp.DrawCuboidWithTexture(0.55, 0.55, 0.55, jjj, -0.2, -40.8, bush_texture);
        glPopMatrix();

        glPushMatrix();
        glRotatef(-68.5, 0.0, 1.0, 0.0);
        glTranslatef(6, 0.0, -7.0);
        for (int jjj = -15; jjj < -10; jjj += 1)
            dp.DrawCuboidWithTexture(0.55, 0.55, 0.55, -25, -0.2, jjj, bush_texture);
        glPopMatrix();

        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        glTranslatef(-0.2, 0.0, 0.0);
        for (int jjj = -11; jjj < 19.5; jjj += 1)
            dp.DrawCuboidWithTexture(0.55, 0.55, 0.55, jjj, -0.2, -47.8, bush_texture);
        glPopMatrix();

        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        glTranslatef(-0.2, 0.0, 0.0);
        for (int jjj = -67; jjj < -15; jjj += 1)
            dp.DrawCuboidWithTexture(0.55, 0.55, 0.55, jjj, -0.2, -47.8, bush_texture);
        glPopMatrix();

        glPushMatrix();
        glRotatef(-67.0, 0.0, 1.0, 0.0);
        glTranslatef(-63, 0.0, 60.0);
        for (double jjj = -56.4; jjj < -43.4; jjj += 1)
            dp.DrawCuboidWithTexture(0.55, 0.55, 0.55, 0, -0.2, jjj, bush_texture);
        glPopMatrix();
    }

    //solidForBush
    {
        glColor3f(0.85, 0.85, 0.85);
        glTranslatef(0.0, -0.01, 0.0);

        glPushMatrix();
        glRotatef(-47.0, 0.0, 1.0, 0.0);
        for (int jjj = -50; jjj < -27; jjj += 1)
            dp.DrawCuboid(0.63, 0.55, 0.63, -9.5, -0.2, jjj);
        glPopMatrix();

        glPushMatrix();
        glRotatef(-68.5, 0.0, 1.0, 0.0);
        glTranslatef(6, 0.0, -7.0);
        for (int jjj = -15; jjj < -10; jjj += 1)
            dp.DrawCuboid(0.63, 0.55, 0.63, -25, -0.2, jjj);
        glPopMatrix();

        glPushMatrix();
        glRotatef(47.0, 0.0, 1.0, 0.0);
        for (int jjj = -82; jjj < -35; jjj += 1)
            dp.DrawCuboid(0.63, 0.55, 0.63, 10.5, -0.2, jjj);
        glPopMatrix();

        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        glTranslatef(-0.2, 0.0, 0.0);
        for (int jjj = -26.9; jjj < 4; jjj += 1)
            dp.DrawCuboid(0.63, 0.55, 0.63, jjj, -0.2, -25.8);
        glPopMatrix();

        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        glTranslatef(-0.2, 0.0, 0.0);
        for (int jjj = -40; jjj < 4; jjj += 1)
            dp.DrawCuboid(0.63, 0.55, 0.63, jjj, -0.2, -33.3);
        glPopMatrix();

        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        glTranslatef(-0.2, 0.0, 0.0);
        for (int jjj = -36.9; jjj < 4; jjj += 1)
            dp.DrawCuboid(0.63, 0.55, 0.63, jjj, -0.2, -40.8);
        glPopMatrix();

        glPushMatrix();
        glRotatef(-68.5, 0.0, 1.0, 0.0);
        glTranslatef(6, 0.0, -7.0);
        for (int jjj = -15; jjj < -10; jjj += 1)
            dp.DrawCuboid(0.63, 0.55, 0.63, -25, -0.2, jjj);
        glPopMatrix();

        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        glTranslatef(-0.2, 0.0, 0.0);
        for (int jjj = -11; jjj < 19.5; jjj += 1)
            dp.DrawCuboid(0.63, 0.55, 0.63, jjj, -0.2, -47.8);
        glPopMatrix();

        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        glTranslatef(-0.2, 0.0, 0.0);
        for (int jjj = -67; jjj < -15; jjj += 1)
            dp.DrawCuboid(0.63, 0.55, 0.63, jjj, -0.2, -47.8);
        glPopMatrix();

        glPushMatrix();
        glRotatef(-67.0, 0.0, 1.0, 0.0);
        glTranslatef(-63, 0.0, 60.0);
        for (int jjj = -57; jjj < -43; jjj += 1)
            dp.DrawCuboid(0.63, 0.55, 0.63, 0, -0.2, jjj);
        glPopMatrix();
    }

    FreeCreatedTextures3();
}

void DrawScene::DisplayTexturedScene_Tree()
{
    glColor3f(1.0, 1.0, 1.0);
    SingleTexture(tree_texture, "textures/Tree.bmp", 512, 512);
    SingleTexture(leaf_texture, "textures/Bush2.bmp", 512, 512);
    SingleTexture(grass_texture, "textures/Grass.bmp", 512, 512);
    SingleTexture(leaf2_texture, "textures/Leaf.bmp", 512, 512);
    SingleTexture(leaf4_texture, "textures/Leaf4.bmp", 512, 512);

    for (int iii = -10.5; iii < 14.5; iii += 6)
    {
        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        glTranslatef(iii, 0.75, -47.9);
        dp.DrawCuboidWithTexture(0.1, 1.5, 0.1, 0, 0, 0, tree_texture);
        dp.DrawCuboidWithTexture(0.3, 0.3, 0.3, 0, 1, 0, leaf_texture);
        dp.DrawCuboidWithTexture(0.4, 0.6, 0.4, 0, 2, 0, leaf_texture);
        dp.DrawCuboidWithTexture(0.5, 0.6, 0.5, 0, 1.3, 0, leaf_texture);
        dp.DrawCuboidWithTexture(0.55, 0.2, 0.55, 0, 1.3, 0, leaf_texture);
        dp.DrawCuboidWithTexture(0.3, 0.3, 0.3, 0, 3, 0, leaf_texture);
        dp.DrawCuboidWithTexture(0.18, 0.3, 0.18, 0, 3.3, 0, leaf_texture);
        glPopMatrix();
    }

    for (int iii = -65; iii < -14.5; iii += 6)
    {
        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        glTranslatef(iii, 0.75, -47.9);
        dp.DrawCuboidWithTexture(0.1, 1.5, 0.1, 0, 0, 0, tree_texture);
        dp.DrawCuboidWithTexture(0.3, 0.3, 0.3, 0, 1, 0, leaf_texture);
        dp.DrawCuboidWithTexture(0.4, 0.6, 0.4, 0, 2, 0, leaf_texture);
        dp.DrawCuboidWithTexture(0.5, 0.6, 0.5, 0, 1.3, 0, leaf_texture);
        dp.DrawCuboidWithTexture(0.55, 0.2, 0.55, 0, 1.3, 0, leaf_texture);
        dp.DrawCuboidWithTexture(0.3, 0.3, 0.3, 0, 3, 0, leaf_texture);
        dp.DrawCuboidWithTexture(0.18, 0.3, 0.18, 0, 3.3, 0, leaf_texture);
        glPopMatrix();
    }

    glPushMatrix();
    glRotatef(-15.0, 0.0, 1.0, 0.0);
    glTranslatef(-0.2, 0.0, 0.0);
    dp.DrawCuboidWithTexture(0.15, 2, 0.15, 1, -0.2, -33.3, tree_texture);
    dp.DrawCuboidWithTexture(0.85, 1, 0.85, 1, 2.3, -33.3, leaf2_texture);
    dp.DrawCuboidWithTexture(0.50, 0.6, 0.50, 1, 3.8, -33.3, leaf2_texture);
    dp.DrawCuboidWithTexture(0.50, 0.6, 0.50, 1.9, 2.5, -33.3, leaf2_texture);
    dp.DrawCuboidWithTexture(0.50, 0.6, 0.50, 0.1, 2.5, -33.3, leaf2_texture);
    dp.DrawCuboidWithTexture(0.50, 0.6, 0.50, 1, 2.5, -34.2, leaf2_texture);
    dp.DrawCuboidWithTexture(0.50, 0.6, 0.50, 1, 2.5, -32.4, leaf2_texture);
    glPopMatrix();

    glPushMatrix();
    glRotatef(-15.0, 0.0, 1.0, 0.0);
    glTranslatef(-10.2, 0.0, 0.0);
    dp.DrawCuboidWithTexture(0.15, 2, 0.15, 1, -0.2, -33.3, tree_texture);
    dp.DrawCuboidWithTexture(0.85, 1, 0.85, 1, 2.3, -33.3, leaf2_texture);
    dp.DrawCuboidWithTexture(0.50, 0.6, 0.50, 1, 3.8, -33.3, leaf2_texture);
    dp.DrawCuboidWithTexture(0.50, 0.6, 0.50, 1.9, 2.5, -33.3, leaf2_texture);
    dp.DrawCuboidWithTexture(0.50, 0.6, 0.50, 0.1, 2.5, -33.3, leaf2_texture);
    dp.DrawCuboidWithTexture(0.50, 0.6, 0.50, 1, 2.5, -34.2, leaf2_texture);
    dp.DrawCuboidWithTexture(0.50, 0.6, 0.50, 1, 2.5, -32.4, leaf2_texture);
    glPopMatrix();

    glPushMatrix();
    glRotatef(-15.0, 0.0, 1.0, 0.0);
    glTranslatef(-30.2, 0.0, 0.0);
    dp.DrawCuboidWithTexture(0.15, 2, 0.15, 1, -0.2, -33.3, tree_texture);
    dp.DrawCuboidWithTexture(0.85, 1, 0.85, 1, 2.3, -33.3, leaf2_texture);
    dp.DrawCuboidWithTexture(0.50, 0.6, 0.50, 1, 3.8, -33.3, leaf2_texture);
    dp.DrawCuboidWithTexture(0.50, 0.6, 0.50, 1.9, 2.5, -33.3, leaf2_texture);
    dp.DrawCuboidWithTexture(0.50, 0.6, 0.50, 0.1, 2.5, -33.3, leaf2_texture);
    dp.DrawCuboidWithTexture(0.50, 0.6, 0.50, 1, 2.5, -34.2, leaf2_texture);
    dp.DrawCuboidWithTexture(0.50, 0.6, 0.50, 1, 2.5, -32.4, leaf2_texture);
    glPopMatrix();

    //grass space
    {
        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        glTranslatef(-44, -0.2, -46.6);
        dp.DrawCuboidWithTexture(1, 0.545, 1, 0, 0, 0, grass_texture);
        glPopMatrix();

        for (double nnn = -46.6; nnn < -46.6 + 2; nnn += 1)
        {
            glPushMatrix();
            glRotatef(-15.0, 0.0, 1.0, 0.0);
            glTranslatef(-46, -0.2, nnn);
            dp.DrawCuboidWithTexture(1, 0.545, 1, 0, 0, 0, grass_texture);
            glPopMatrix();
        }
        for (double nnn = -46.6; nnn < -46.6 + 3; nnn += 1)
        {
            glPushMatrix();
            glRotatef(-15.0, 0.0, 1.0, 0.0);
            glTranslatef(-47, -0.2, nnn);
            dp.DrawCuboidWithTexture(1, 0.545, 1, 0, 0, 0, grass_texture);
            glPopMatrix();
        }
        for (double nnn = -46.6; nnn < -46.6 + 4; nnn += 1)
        {
            glPushMatrix();
            glRotatef(-15.0, 0.0, 1.0, 0.0);
            glTranslatef(-48, -0.2, nnn);
            dp.DrawCuboidWithTexture(1, 0.545, 1, 0, 0, 0, grass_texture);
            glPopMatrix();
        }
        for (double nnn = -46.6; nnn < -46.6 + 5; nnn += 1)
        {
            glPushMatrix();
            glRotatef(-15.0, 0.0, 1.0, 0.0);
            glTranslatef(-49, -0.2, nnn);
            dp.DrawCuboidWithTexture(1, 0.545, 1, 0, 0, 0, grass_texture);
            glPopMatrix();
        }
        for (double nnn = -46.6; nnn < -46.6 + 5; nnn += 1)
        {
            glPushMatrix();
            glRotatef(-15.0, 0.0, 1.0, 0.0);
            glTranslatef(-50, -0.2, nnn);
            dp.DrawCuboidWithTexture(1, 0.545, 1, 0, 0, 0, grass_texture);
            glPopMatrix();
        }
        for (double nnn = -46.6; nnn < -46.6 + 6; nnn += 1)
        {
            glPushMatrix();
            glRotatef(-15.0, 0.0, 1.0, 0.0);
            glTranslatef(-51, -0.2, nnn);
            dp.DrawCuboidWithTexture(1, 0.545, 1, 0, 0, 0, grass_texture);
            glPopMatrix();
        }
        for (double nnn = -46.6; nnn < -46.6 + 7; nnn += 1)
        {
            glPushMatrix();
            glRotatef(-15.0, 0.0, 1.0, 0.0);
            glTranslatef(-52, -0.2, nnn);
            dp.DrawCuboidWithTexture(1, 0.545, 1, 0, 0, 0, grass_texture);
            glPopMatrix();
        }
        for (double nnn = -46.6; nnn < -46.6 + 6; nnn += 1)
        {
            glPushMatrix();
            glRotatef(-15.0, 0.0, 1.0, 0.0);
            glTranslatef(-54, -0.2, nnn);
            dp.DrawCuboidWithTexture(1, 0.545, 1, 0, 0, 0, grass_texture);
            glPopMatrix();
        }
        for (double nnn = -46.6; nnn < -46.6 + 5; nnn += 1)
        {
            glPushMatrix();
            glRotatef(-15.0, 0.0, 1.0, 0.0);
            glTranslatef(-55, -0.2, nnn);
            dp.DrawCuboidWithTexture(1, 0.545, 1, 0, 0, 0, grass_texture);
            glPopMatrix();
        }
        for (double nnn = -46.6; nnn < -46.6 + 4; nnn += 1)
        {
            glPushMatrix();
            glRotatef(-15.0, 0.0, 1.0, 0.0);
            glTranslatef(-57, -0.2, nnn);
            dp.DrawCuboidWithTexture(1, 0.545, 1, 0, 0, 0, grass_texture);
            glPopMatrix();
        }
        for (double nnn = -46.6; nnn < -46.6 + 3; nnn += 1)
        {
            glPushMatrix();
            glRotatef(-15.0, 0.0, 1.0, 0.0);
            glTranslatef(-58, -0.2, nnn);
            dp.DrawCuboidWithTexture(1, 0.545, 1, 0, 0, 0, grass_texture);
            glPopMatrix();
        }
        for (double nnn = -46.6; nnn < -46.6 + 3; nnn += 1)
        {
            glPushMatrix();
            glRotatef(-15.0, 0.0, 1.0, 0.0);
            glTranslatef(-59, -0.2, nnn);
            dp.DrawCuboidWithTexture(1, 0.545, 1, 0, 0, 0, grass_texture);
            glPopMatrix();
        }
        for (double nnn = -46.6; nnn < -46.6 + 2; nnn += 1)
        {
            glPushMatrix();
            glRotatef(-15.0, 0.0, 1.0, 0.0);
            glTranslatef(-61, -0.2, nnn);
            dp.DrawCuboidWithTexture(1, 0.545, 1, 0, 0, 0, grass_texture);
            glPopMatrix();
        }
        for (double nnn = -46.6; nnn < -46.6 + 2; nnn += 1)
        {
            glPushMatrix();
            glRotatef(-15.0, 0.0, 1.0, 0.0);
            glTranslatef(-62, -0.2, nnn);
            dp.DrawCuboidWithTexture(1, 0.545, 1, 0, 0, 0, grass_texture);
            glPopMatrix();
        }
        for (double nnn = -46.6; nnn < -46.6 + 1; nnn += 1)
        {
            glPushMatrix();
            glRotatef(-15.0, 0.0, 1.0, 0.0);
            glTranslatef(-63, -0.2, nnn);
            dp.DrawCuboidWithTexture(1, 0.545, 1, 0, 0, 0, grass_texture);
            glPopMatrix();
        }

        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        glTranslatef(-64, -0.2, -46.6);
        dp.DrawCuboidWithTexture(1, 0.545, 1, 0, 0, 0, grass_texture);
        glPopMatrix();
    }

    //centre grass
    {
        SingleTexture(centre_texture, "textures/Centre.bmp", 512, 512);

        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        dp.DrawCuboidWithTexture(2.8, 1.3, 2.8, -4, -1.75, -16.6, centre_texture);
        glPopMatrix();

        glPushMatrix();
        glColor3f(0.75, 1.0, 0.75);

        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        dp.DrawCuboidWithTexture(2.9, 0.9, 0.9, -4, -0.4, -16.6, leaf_texture);
        glPopMatrix();

        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        dp.DrawCuboidWithTexture(2.7, 0.9, 1.1, -4, -0.4, -16.6, leaf_texture);
        glPopMatrix();

        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        dp.DrawCuboidWithTexture(2.5, 0.9, 1.3, -4, -0.4, -16.6, leaf_texture);
        glPopMatrix();

        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        dp.DrawCuboidWithTexture(2.1, 0.9, 1.5, -4, -0.4, -16.6, leaf_texture);
        glPopMatrix();

        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        dp.DrawCuboidWithTexture(1.9, 0.9, 1.9, -4, -0.4, -16.6, leaf_texture);
        glPopMatrix();

        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        dp.DrawCuboidWithTexture(1.5, 0.9, 2.1, -4, -0.4, -16.6, leaf_texture);
        glPopMatrix();

        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        dp.DrawCuboidWithTexture(0.3, 0.9, 2.5, -4, -0.4, -16.6, leaf_texture);
        glPopMatrix();

        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        dp.DrawCuboidWithTexture(1.1, 0.9, 2.7, -4, -0.4, -16.6, leaf_texture);
        glPopMatrix();

        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        dp.DrawCuboidWithTexture(0.9, 0.9, 2.9, -4, -0.4, -16.6, leaf_texture);
        glPopMatrix();

        glPopMatrix();
    }

    FreeCreatedTextures3();
}

void DrawScene::DisplayTexturedScene_Tree2()
{
    glColor3f(1.0, 1.0, 1.0);

    //centre stepping
    {
        glColor3f(1.0, 1.0, 1.0);
        SingleTexture(bush_texture, "textures/Road.bmp", 512, 512);

        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        dp.DrawCuboid(2.8, 1.3, 2.8, -4, -1.75, -16.6);
        glPopMatrix();

        double xxx = 0.2;

        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        dp.DrawCuboidWithTexture(2.9 + xxx, 0.9, 0.9 + xxx, -4, -0.55, -16.6, bush_texture);
        glPopMatrix();

        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        dp.DrawCuboidWithTexture(2.7 + xxx, 0.9, 1.1 + xxx, -4, -0.55, -16.6, bush_texture);
        glPopMatrix();

        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        dp.DrawCuboidWithTexture(2.5 + xxx, 0.9, 1.3 + xxx, -4, -0.55, -16.6, bush_texture);
        glPopMatrix();

        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        dp.DrawCuboidWithTexture(2.1 + xxx, 0.9, 1.5 + xxx, -4, -0.55, -16.6, bush_texture);
        glPopMatrix();

        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        dp.DrawCuboidWithTexture(1.9 + xxx, 0.9, 1.9 + xxx, -4, -0.55, -16.6, bush_texture);
        glPopMatrix();

        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        dp.DrawCuboidWithTexture(1.5 + xxx, 0.9, 2.1 + xxx, -4, -0.55, -16.6, bush_texture);
        glPopMatrix();

        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        dp.DrawCuboidWithTexture(0.3 + xxx, 0.9, 2.5 + xxx, -4, -0.55, -16.6, bush_texture);
        glPopMatrix();

        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        dp.DrawCuboidWithTexture(1.1 + xxx, 0.9, 2.7 + xxx, -4, -0.55, -16.6, bush_texture);
        glPopMatrix();

        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        dp.DrawCuboidWithTexture(0.9 + xxx, 0.9, 2.9 + xxx, -4, -0.55, -16.6, bush_texture);
        glPopMatrix();
    }

    SingleTexture(tree_texture, "textures/Tree.bmp", 512, 512);
    SingleTexture(leaf_texture, "textures/Bush2.bmp", 512, 512);
    SingleTexture(grass_texture, "textures/Grass.bmp", 512, 512);
    SingleTexture(leaf2_texture, "textures/Leaf.bmp", 512, 512);
    SingleTexture(leaf4_texture, "textures/Leaf4.bmp", 512, 512);

    //centre tree
    {
        glColor3f(1.0, 1.0, 1.0);
        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        dp.DrawCuboidWithTexture(0.12, 2, 0.12, -3.8, 0.5, -17.1, tree_texture);
        glPopMatrix();

        glColor3f(1.0, 1.0, 0.8);
        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        dp.DrawCuboidWithTexture(0.12, 2, 0.12, -4.5, 0.08, -16.4, tree_texture);
        glPopMatrix();

        glColor3f(0.8, 1.0, 1.0);
        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        dp.DrawCuboidWithTexture(0.12, 2, 0.12, -3.9, -0.18, -17.7, tree_texture);
        glPopMatrix();

        glColor3f(1.0, 0.8, 1.0);
        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        for (double iii = -4.3; iii < -1.7; iii += 0.15)
            for (double jjj = -19.3; jjj < -16.7; jjj += 0.15)
                dp.DrawCuboidWithTexture(0.038, 0.138, 0.038, iii, 2.5, jjj, leaf2_texture);
        glPopMatrix();

        glColor3f(0.8, 1.0, 0.8);
        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        for (double iii = -5.5; iii < -0.9; iii += 0.15)
            for (double jjj = -18.5; jjj < -16.7; jjj += 0.15)
                dp.DrawCuboidWithTexture(0.038, 0.138, 0.038, iii, 2.7, jjj, leaf2_texture);
        glPopMatrix();

        glColor3f(1.0, 0.8, 1.0);
        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        for (double iii = -4; iii < -1.8; iii += 0.15)
            for (double jjj = -19.7; jjj < -15.9; jjj += 0.15)
                dp.DrawCuboidWithTexture(0.038, 0.138, 0.038, iii, 2.95, jjj, leaf2_texture);
        glPopMatrix();

        glColor3f(1.0, 0.8, 1.0);
        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        for (double iii = -4.5; iii < -2.9; iii += 0.15)
            for (double jjj = -18.3; jjj < -16.7; jjj += 0.15)
                dp.DrawCuboidWithTexture(0.038, 0.138, 0.038, iii, 2.95, jjj, leaf2_texture);
        glPopMatrix();

        glColor3f(1.0, 1.0, 0.8);
        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        for (double iii = -6.4; iii < -2.6; iii += 0.15)
            for (double jjj = -18.1; jjj < -13.9; jjj += 0.15)
                dp.DrawCuboidWithTexture(0.038, 0.138, 0.038, iii, 3.25, jjj, leaf2_texture);
        glPopMatrix();

        glColor3f(1.0, 1.0, 1.0);
        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        for (double iii = -5.8; iii < -3.2; iii += 0.15)
            for (double jjj = -17.4; jjj < -14.6; jjj += 0.15)
                dp.DrawCuboidWithTexture(0.038, 0.138, 0.038, iii, 3.25, jjj, leaf2_texture);
        glPopMatrix();

        glColor3f(0.8, 1.0, 0.8);
        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        for (double iii = -5.1; iii < -2.9; iii += 0.15)
            for (double jjj = -17.7; jjj < -15.5; jjj += 0.15)
                dp.DrawCuboidWithTexture(0.038, 0.138, 0.038, iii, 3.65, jjj, leaf2_texture);
        glPopMatrix();

        glColor3f(0.8, 1.0, 0.8);
        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        for (double iii = -5.7; iii < -3.5; iii += 0.15)
            for (double jjj = -18.7; jjj < -16.5; jjj += 0.15)
                dp.DrawCuboidWithTexture(0.038, 0.138, 0.038, iii, 3.65, jjj, leaf2_texture);
        glPopMatrix();

        glColor3f(0.8, 1.0, 0.8);
        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        for (double iii = -4.8; iii < -3.2; iii += 0.15)
            for (double jjj = -17.3; jjj < -15.9; jjj += 0.15)
                dp.DrawCuboidWithTexture(0.038, 0.138, 0.038, iii, 4.05, jjj, leaf2_texture);
        glPopMatrix();

        glColor3f(0.8, 1.0, 0.8);
        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        for (double iii = -4.3; iii < -2.7; iii += 0.15)
            for (double jjj = -16.7; jjj < -15.3; jjj += 0.15)
                dp.DrawCuboidWithTexture(0.038, 0.138, 0.038, iii, 4.05, jjj, leaf2_texture);
        glPopMatrix();

        glColor3f(0.8, 0.8, 0.8);
        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        for (double iii = -4.38; iii < -3.62; iii += 0.15)
            for (double jjj = -17.35; jjj < -16.65; jjj += 0.15)
                dp.DrawCuboidWithTexture(0.038, 0.138, 0.038, iii, 4.35, jjj, leaf2_texture);
        glPopMatrix();

        glColor3f(0.9, 0.9, 0.95);
        glPushMatrix();
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        for (double iii = -4.38; iii < -3.62; iii += 0.15)
            for (double jjj = -17.35; jjj < -16.65; jjj += 0.15)
                dp.DrawCuboidWithTexture(0.038, 0.138, 0.038, iii, 4.55, jjj, leaf2_texture);
        glPopMatrix();
    }

    //front tree 1
    {
        {
            glPushMatrix();
            glTranslatef(20, 0, 20);

            glColor3f(0.8, 1.0, 1.0);
            glPushMatrix();
            glRotatef(-15.0, 0.0, 1.0, 0.0);
            dp.DrawCuboidWithTexture(0.12, 2, 0.12, -3.9, -0.18, -17.7, tree_texture);
            glPopMatrix();

            glColor3f(1.0, 0.8, 1.0);
            glPushMatrix();
            glRotatef(-15.0, 0.0, 1.0, 0.0);
            for (double iii = -4.3; iii < -1.7; iii += 0.15)
                for (double jjj = -19.3; jjj < -16.7; jjj += 0.15)
                    dp.DrawCuboidWithTexture(0.038, 0.138, 0.038, iii, 2.5, jjj, leaf2_texture);
            glPopMatrix();

            glColor3f(0.8, 1.0, 0.8);
            glPushMatrix();
            glRotatef(-15.0, 0.0, 1.0, 0.0);
            for (double iii = -5.5; iii < -0.9; iii += 0.15)
                for (double jjj = -18.5; jjj < -16.7; jjj += 0.15)
                    dp.DrawCuboidWithTexture(0.038, 0.138, 0.038, iii, 2.7, jjj, leaf2_texture);
            glPopMatrix();

            glColor3f(1.0, 0.8, 1.0);
            glPushMatrix();
            glRotatef(-15.0, 0.0, 1.0, 0.0);
            for (double iii = -4; iii < -1.8; iii += 0.15)
                for (double jjj = -19.7; jjj < -15.9; jjj += 0.15)
                    dp.DrawCuboidWithTexture(0.038, 0.138, 0.038, iii, 2.95, jjj, leaf2_texture);
            glPopMatrix();

            glColor3f(1.0, 0.8, 1.0);
            glPushMatrix();
            glRotatef(-15.0, 0.0, 1.0, 0.0);
            for (double iii = -4.5; iii < -2.9; iii += 0.15)
                for (double jjj = -18.3; jjj < -16.7; jjj += 0.15)
                    dp.DrawCuboidWithTexture(0.038, 0.138, 0.038, iii, 2.95, jjj, leaf2_texture);
            glPopMatrix();

            glColor3f(1.0, 1.0, 0.8);
            glPushMatrix();
            glRotatef(-15.0, 0.0, 1.0, 0.0);
            for (double iii = -6.4; iii < -2.6; iii += 0.15)
                for (double jjj = -18.1; jjj < -13.9; jjj += 0.15)
                    dp.DrawCuboidWithTexture(0.038, 0.138, 0.038, iii, 3.25, jjj, leaf2_texture);
            glPopMatrix();

            glColor3f(1.0, 1.0, 1.0);
            glPushMatrix();
            glRotatef(-15.0, 0.0, 1.0, 0.0);
            for (double iii = -5.8; iii < -3.2; iii += 0.15)
                for (double jjj = -17.4; jjj < -14.6; jjj += 0.15)
                    dp.DrawCuboidWithTexture(0.038, 0.138, 0.038, iii, 3.25, jjj, leaf2_texture);
            glPopMatrix();

            glColor3f(0.8, 1.0, 0.8);
            glPushMatrix();
            glRotatef(-15.0, 0.0, 1.0, 0.0);
            for (double iii = -5.1; iii < -2.9; iii += 0.15)
                for (double jjj = -17.7; jjj < -15.5; jjj += 0.15)
                    dp.DrawCuboidWithTexture(0.038, 0.138, 0.038, iii, 3.65, jjj, leaf2_texture);
            glPopMatrix();

            glColor3f(0.8, 1.0, 0.8);
            glPushMatrix();
            glRotatef(-15.0, 0.0, 1.0, 0.0);
            for (double iii = -5.7; iii < -3.5; iii += 0.15)
                for (double jjj = -18.7; jjj < -16.5; jjj += 0.15)
                    dp.DrawCuboidWithTexture(0.038, 0.138, 0.038, iii, 3.65, jjj, leaf2_texture);
            glPopMatrix();

            glColor3f(0.8, 1.0, 0.8);
            glPushMatrix();
            glRotatef(-15.0, 0.0, 1.0, 0.0);
            for (double iii = -4.8; iii < -3.2; iii += 0.15)
                for (double jjj = -17.3; jjj < -15.9; jjj += 0.15)
                    dp.DrawCuboidWithTexture(0.038, 0.138, 0.038, iii, 4.05, jjj, leaf2_texture);
            glPopMatrix();

            glColor3f(0.8, 1.0, 0.8);
            glPushMatrix();
            glRotatef(-15.0, 0.0, 1.0, 0.0);
            for (double iii = -4.3; iii < -2.7; iii += 0.15)
                for (double jjj = -16.7; jjj < -15.3; jjj += 0.15)
                    dp.DrawCuboidWithTexture(0.038, 0.138, 0.038, iii, 4.05, jjj, leaf2_texture);
            glPopMatrix();

            glColor3f(0.8, 0.8, 0.8);
            glPushMatrix();
            glRotatef(-15.0, 0.0, 1.0, 0.0);
            for (double iii = -4.38; iii < -3.62; iii += 0.15)
                for (double jjj = -17.35; jjj < -16.65; jjj += 0.15)
                    dp.DrawCuboidWithTexture(0.038, 0.138, 0.038, iii, 4.35, jjj, leaf2_texture);
            glPopMatrix();

            glColor3f(0.9, 0.9, 0.95);
            glPushMatrix();
            glRotatef(-15.0, 0.0, 1.0, 0.0);
            for (double iii = -4.38; iii < -3.62; iii += 0.15)
                for (double jjj = -17.35; jjj < -16.65; jjj += 0.15)
                    dp.DrawCuboidWithTexture(0.038, 0.138, 0.038, iii, 4.55, jjj, leaf2_texture);
            glPopMatrix();
            glPopMatrix();
        }
    }

    //front tree 2
    {
        {
            glPushMatrix();
            glTranslatef(-20, 0, 20);

            glColor3f(0.8, 1.0, 1.0);
            glPushMatrix();
            glRotatef(-15.0, 0.0, 1.0, 0.0);
            dp.DrawCuboidWithTexture(0.12, 2, 0.12, -3.9, -0.18, -17.7, tree_texture);
            glPopMatrix();

            glColor3f(1.0, 0.8, 1.0);
            glPushMatrix();
            glRotatef(-15.0, 0.0, 1.0, 0.0);
            for (double iii = -4.3; iii < -1.7; iii += 0.15)
                for (double jjj = -19.3; jjj < -16.7; jjj += 0.15)
                    dp.DrawCuboidWithTexture(0.038, 0.138, 0.038, iii, 2.5, jjj, leaf2_texture);
            glPopMatrix();

            glColor3f(0.8, 1.0, 0.8);
            glPushMatrix();
            glRotatef(-15.0, 0.0, 1.0, 0.0);
            for (double iii = -5.5; iii < -0.9; iii += 0.15)
                for (double jjj = -18.5; jjj < -16.7; jjj += 0.15)
                    dp.DrawCuboidWithTexture(0.038, 0.138, 0.038, iii, 2.7, jjj, leaf2_texture);
            glPopMatrix();

            glColor3f(1.0, 0.8, 1.0);
            glPushMatrix();
            glRotatef(-15.0, 0.0, 1.0, 0.0);
            for (double iii = -4; iii < -1.8; iii += 0.15)
                for (double jjj = -19.7; jjj < -15.9; jjj += 0.15)
                    dp.DrawCuboidWithTexture(0.038, 0.138, 0.038, iii, 2.95, jjj, leaf2_texture);
            glPopMatrix();

            glColor3f(1.0, 0.8, 1.0);
            glPushMatrix();
            glRotatef(-15.0, 0.0, 1.0, 0.0);
            for (double iii = -4.5; iii < -2.9; iii += 0.15)
                for (double jjj = -18.3; jjj < -16.7; jjj += 0.15)
                    dp.DrawCuboidWithTexture(0.038, 0.138, 0.038, iii, 2.95, jjj, leaf2_texture);
            glPopMatrix();

            glColor3f(1.0, 1.0, 0.8);
            glPushMatrix();
            glRotatef(-15.0, 0.0, 1.0, 0.0);
            for (double iii = -6.4; iii < -2.6; iii += 0.15)
                for (double jjj = -18.1; jjj < -13.9; jjj += 0.15)
                    dp.DrawCuboidWithTexture(0.038, 0.138, 0.038, iii, 3.25, jjj, leaf2_texture);
            glPopMatrix();

            glColor3f(1.0, 1.0, 1.0);
            glPushMatrix();
            glRotatef(-15.0, 0.0, 1.0, 0.0);
            for (double iii = -5.8; iii < -3.2; iii += 0.15)
                for (double jjj = -17.4; jjj < -14.6; jjj += 0.15)
                    dp.DrawCuboidWithTexture(0.038, 0.138, 0.038, iii, 3.25, jjj, leaf2_texture);
            glPopMatrix();

            glColor3f(0.8, 1.0, 0.8);
            glPushMatrix();
            glRotatef(-15.0, 0.0, 1.0, 0.0);
            for (double iii = -5.1; iii < -2.9; iii += 0.15)
                for (double jjj = -17.7; jjj < -15.5; jjj += 0.15)
                    dp.DrawCuboidWithTexture(0.038, 0.138, 0.038, iii, 3.65, jjj, leaf2_texture);
            glPopMatrix();

            glColor3f(0.8, 1.0, 0.8);
            glPushMatrix();
            glRotatef(-15.0, 0.0, 1.0, 0.0);
            for (double iii = -5.7; iii < -3.5; iii += 0.15)
                for (double jjj = -18.7; jjj < -16.5; jjj += 0.15)
                    dp.DrawCuboidWithTexture(0.038, 0.138, 0.038, iii, 3.65, jjj, leaf2_texture);
            glPopMatrix();

            glColor3f(0.8, 1.0, 0.8);
            glPushMatrix();
            glRotatef(-15.0, 0.0, 1.0, 0.0);
            for (double iii = -4.8; iii < -3.2; iii += 0.15)
                for (double jjj = -17.3; jjj < -15.9; jjj += 0.15)
                    dp.DrawCuboidWithTexture(0.038, 0.138, 0.038, iii, 4.05, jjj, leaf2_texture);
            glPopMatrix();

            glColor3f(0.8, 1.0, 0.8);
            glPushMatrix();
            glRotatef(-15.0, 0.0, 1.0, 0.0);
            for (double iii = -4.3; iii < -2.7; iii += 0.15)
                for (double jjj = -16.7; jjj < -15.3; jjj += 0.15)
                    dp.DrawCuboidWithTexture(0.038, 0.138, 0.038, iii, 4.05, jjj, leaf2_texture);
            glPopMatrix();

            glColor3f(0.8, 0.8, 0.8);
            glPushMatrix();
            glRotatef(-15.0, 0.0, 1.0, 0.0);
            for (double iii = -4.38; iii < -3.62; iii += 0.15)
                for (double jjj = -17.35; jjj < -16.65; jjj += 0.15)
                    dp.DrawCuboidWithTexture(0.038, 0.138, 0.038, iii, 4.35, jjj, leaf2_texture);
            glPopMatrix();

            glColor3f(0.9, 0.9, 0.95);
            glPushMatrix();
            glRotatef(-15.0, 0.0, 1.0, 0.0);
            for (double iii = -4.38; iii < -3.62; iii += 0.15)
                for (double jjj = -17.35; jjj < -16.65; jjj += 0.15)
                    dp.DrawCuboidWithTexture(0.038, 0.138, 0.038, iii, 4.55, jjj, leaf2_texture);
            glPopMatrix();
            glPopMatrix();
        }
    }

    FreeCreatedTextures3();
}

void DrawScene::DisplayTexturedScene_Tree3()
{
    glColor3f(1.0, 1.0, 1.0);
    SingleTexture(tree_texture, "textures/Tree.bmp", 512, 512);
    SingleTexture(leaf_texture, "textures/Bush2.bmp", 512, 512);
    SingleTexture(grass_texture, "textures/Grass.bmp", 512, 512);
    SingleTexture(leaf2_texture, "textures/Leaf.bmp", 512, 512);
    SingleTexture(leaf4_texture, "textures/Leaf4.bmp", 512, 512);

    //front tree 3
    {
        {
            SingleTexture(leaf3_texture, "textures/LeaveSpecial.bmp", 512, 512);
            glPushMatrix();
            glTranslatef(-13, 0, 25);
            glRotatef(-32.0, 0.0, 1.0, 0.0);

            glColor3f(0.8, 1.0, 1.0);
            glPushMatrix();
            dp.DrawCuboidWithTexture(0.12, 2, 0.12, -3.9, -0.18, -17.7, tree_texture);
            glPopMatrix();

            glColor3f(1.0, 0.8, 1.0);
            glPushMatrix();
            for (double iii = -4.3; iii < -1.7; iii += 0.15)
                for (double jjj = -19.3; jjj < -16.7; jjj += 0.15)
                    dp.DrawCuboidWithTexture(0.038, 0.138, 0.038, iii, 2.5, jjj, leaf3_texture);
            glPopMatrix();

            glColor3f(0.8, 1.0, 0.8);
            glPushMatrix();
            for (double iii = -5.5; iii < -0.9; iii += 0.15)
                for (double jjj = -18.5; jjj < -16.7; jjj += 0.15)
                    dp.DrawCuboidWithTexture(0.038, 0.138, 0.038, iii, 2.7, jjj, leaf3_texture);
            glPopMatrix();

            glColor3f(1.0, 0.8, 1.0);
            glPushMatrix();
            for (double iii = -4; iii < -1.8; iii += 0.15)
                for (double jjj = -19.7; jjj < -15.9; jjj += 0.15)
                    dp.DrawCuboidWithTexture(0.038, 0.138, 0.038, iii, 2.95, jjj, leaf3_texture);
            glPopMatrix();

            glColor3f(1.0, 0.8, 1.0);
            glPushMatrix();
            for (double iii = -4.5; iii < -2.9; iii += 0.15)
                for (double jjj = -18.3; jjj < -16.7; jjj += 0.15)
                    dp.DrawCuboidWithTexture(0.038, 0.138, 0.038, iii, 2.95, jjj, leaf3_texture);
            glPopMatrix();

            glColor3f(1.0, 1.0, 0.8);
            glPushMatrix();
            for (double iii = -6.4; iii < -2.6; iii += 0.15)
                for (double jjj = -18.1; jjj < -13.9; jjj += 0.15)
                    dp.DrawCuboidWithTexture(0.038, 0.138, 0.038, iii, 3.25, jjj, leaf3_texture);
            glPopMatrix();

            glColor3f(1.0, 1.0, 1.0);
            glPushMatrix();
            for (double iii = -5.8; iii < -3.2; iii += 0.15)
                for (double jjj = -17.4; jjj < -14.6; jjj += 0.15)
                    dp.DrawCuboidWithTexture(0.038, 0.138, 0.038, iii, 3.25, jjj, leaf3_texture);
            glPopMatrix();

            glColor3f(0.8, 1.0, 0.8);
            glPushMatrix();
            for (double iii = -5.1; iii < -2.9; iii += 0.15)
                for (double jjj = -17.7; jjj < -15.5; jjj += 0.15)
                    dp.DrawCuboidWithTexture(0.038, 0.138, 0.038, iii, 3.65, jjj, leaf3_texture);
            glPopMatrix();

            glColor3f(0.8, 1.0, 0.8);
            glPushMatrix();
            for (double iii = -5.7; iii < -3.5; iii += 0.15)
                for (double jjj = -18.7; jjj < -16.5; jjj += 0.15)
                    dp.DrawCuboidWithTexture(0.038, 0.138, 0.038, iii, 3.65, jjj, leaf3_texture);
            glPopMatrix();

            glColor3f(0.8, 1.0, 0.8);
            glPushMatrix();
            for (double iii = -4.8; iii < -3.2; iii += 0.15)
                for (double jjj = -17.3; jjj < -15.9; jjj += 0.15)
                    dp.DrawCuboidWithTexture(0.038, 0.138, 0.038, iii, 4.05, jjj, leaf3_texture);
            glPopMatrix();

            glColor3f(0.8, 1.0, 0.8);
            glPushMatrix();
            for (double iii = -4.3; iii < -2.7; iii += 0.15)
                for (double jjj = -16.7; jjj < -15.3; jjj += 0.15)
                    dp.DrawCuboidWithTexture(0.038, 0.138, 0.038, iii, 4.05, jjj, leaf3_texture);
            glPopMatrix();

            glColor3f(0.8, 0.8, 0.8);
            glPushMatrix();
            for (double iii = -4.38; iii < -3.62; iii += 0.15)
                for (double jjj = -17.35; jjj < -16.65; jjj += 0.15)
                    dp.DrawCuboidWithTexture(0.038, 0.138, 0.038, iii, 4.35, jjj, leaf3_texture);
            glPopMatrix();

            glColor3f(0.9, 0.9, 0.95);
            glPushMatrix();
            for (double iii = -4.38; iii < -3.62; iii += 0.15)
                for (double jjj = -17.35; jjj < -16.65; jjj += 0.15)
                    dp.DrawCuboidWithTexture(0.038, 0.138, 0.038, iii, 4.55, jjj, leaf3_texture);
            glPopMatrix();
            glPopMatrix();
        }
    }

    //front Tree More
    glPushMatrix();
    glRotatef(-15.0, 0.0, 1.0, 0.0);
    glTranslatef(12, 0.75, 10);
    glScalef(1.85, 1.85, 1.85);
    dp.DrawCuboidWithTexture(0.1, 1.5, 0.1, 0, 0, 0, tree_texture);
    dp.DrawCuboidWithTexture(0.3, 0.3, 0.3, 0, 1, 0, leaf_texture);
    dp.DrawCuboidWithTexture(0.4, 0.6, 0.4, 0, 2, 0, leaf_texture);
    dp.DrawCuboidWithTexture(0.5, 0.6, 0.5, 0, 1.3, 0, leaf_texture);
    dp.DrawCuboidWithTexture(0.55, 0.2, 0.55, 0, 1.3, 0, leaf_texture);
    dp.DrawCuboidWithTexture(0.3, 0.3, 0.3, 0, 3, 0, leaf_texture);
    dp.DrawCuboidWithTexture(0.18, 0.3, 0.18, 0, 3.3, 0, leaf_texture);
    glPopMatrix();

    glPushMatrix();
    glRotatef(-15.0, 0.0, 1.0, 0.0);
    glTranslatef(9.5, 0.75, 7.5);
    glScalef(1.85, 1.85, 1.85);
    dp.DrawCuboidWithTexture(0.1, 1.5, 0.1, 0, 0, 0, tree_texture);
    dp.DrawCuboidWithTexture(0.3, 0.3, 0.3, 0, 1, 0, leaf4_texture);
    dp.DrawCuboidWithTexture(0.4, 0.6, 0.4, 0, 2, 0, leaf4_texture);
    dp.DrawCuboidWithTexture(0.5, 0.6, 0.5, 0, 1.3, 0, leaf4_texture);
    dp.DrawCuboidWithTexture(0.55, 0.2, 0.55, 0, 1.3, 0, leaf4_texture);
    dp.DrawCuboidWithTexture(0.3, 0.3, 0.3, 0, 3, 0, leaf4_texture);
    dp.DrawCuboidWithTexture(0.18, 0.3, 0.18, 0, 3.3, 0, leaf4_texture);
    glPopMatrix();

    glPushMatrix();
    glRotatef(-15.0, 0.0, 1.0, 0.0);
    glTranslatef(-36.5, 0.75, 5.5);
    glScalef(1.85, 1.85, 1.85);
    dp.DrawCuboidWithTexture(0.1, 1.5, 0.1, 0, 0, 0, tree_texture);
    dp.DrawCuboidWithTexture(0.3, 0.3, 0.3, 0, 1, 0, leaf4_texture);
    dp.DrawCuboidWithTexture(0.4, 0.6, 0.4, 0, 2, 0, leaf4_texture);
    dp.DrawCuboidWithTexture(0.5, 0.6, 0.5, 0, 1.3, 0, leaf4_texture);
    dp.DrawCuboidWithTexture(0.55, 0.2, 0.55, 0, 1.3, 0, leaf4_texture);
    dp.DrawCuboidWithTexture(0.3, 0.3, 0.3, 0, 3, 0, leaf4_texture);
    dp.DrawCuboidWithTexture(0.18, 0.3, 0.18, 0, 3.3, 0, leaf4_texture);
    glPopMatrix();

    glPushMatrix();
    glRotatef(-15.0, 0.0, 1.0, 0.0);
    glTranslatef(-10.5, 0.75, 14.5);
    glScalef(2.0, 2.0, 2.0);
    dp.DrawCuboidWithTexture(0.1, 1.5, 0.1, 0, 0, 0, tree_texture);
    dp.DrawCuboidWithTexture(0.3, 0.3, 0.3, 0, 1, 0, leaf4_texture);
    dp.DrawCuboidWithTexture(0.4, 0.6, 0.4, 0, 2, 0, leaf4_texture);
    dp.DrawCuboidWithTexture(0.5, 0.6, 0.5, 0, 1.3, 0, leaf4_texture);
    dp.DrawCuboidWithTexture(0.55, 0.2, 0.55, 0, 1.3, 0, leaf4_texture);
    dp.DrawCuboidWithTexture(0.3, 0.3, 0.3, 0, 3, 0, leaf4_texture);
    dp.DrawCuboidWithTexture(0.18, 0.3, 0.18, 0, 3.3, 0, leaf4_texture);
    glPopMatrix();

    glPushMatrix();
    glRotatef(-15.0, 0.0, 1.0, 0.0);
    glTranslatef(26.5, 0.75, 0.5);
    glScalef(2.0, 2.0, 2.0);
    dp.DrawCuboidWithTexture(0.1, 1.5, 0.1, 0, 0, 0, tree_texture);
    dp.DrawCuboidWithTexture(0.3, 0.3, 0.3, 0, 1, 0, leaf3_texture);
    dp.DrawCuboidWithTexture(0.4, 0.6, 0.4, 0, 2, 0, leaf3_texture);
    dp.DrawCuboidWithTexture(0.5, 0.6, 0.5, 0, 1.3, 0, leaf3_texture);
    dp.DrawCuboidWithTexture(0.55, 0.2, 0.55, 0, 1.3, 0, leaf3_texture);
    dp.DrawCuboidWithTexture(0.3, 0.3, 0.3, 0, 3, 0, leaf3_texture);
    dp.DrawCuboidWithTexture(0.18, 0.3, 0.18, 0, 3.3, 0, leaf3_texture);
    glPopMatrix();

    glPushMatrix();
    glRotatef(-15.0, 0.0, 1.0, 0.0);
    glTranslatef(-10, 0.0, 60.0);
    dp.DrawCuboidWithTexture(0.15, 2, 0.15, 1, -0.2, -33.3, tree_texture);
    dp.DrawCuboidWithTexture(0.85, 1, 0.85, 1, 2.3, -33.3, leaf2_texture);
    dp.DrawCuboidWithTexture(0.50, 0.6, 0.50, 1, 3.8, -33.3, leaf2_texture);
    dp.DrawCuboidWithTexture(0.50, 0.6, 0.50, 1.9, 2.5, -33.3, leaf2_texture);
    dp.DrawCuboidWithTexture(0.50, 0.6, 0.50, 0.1, 2.5, -33.3, leaf2_texture);
    dp.DrawCuboidWithTexture(0.50, 0.6, 0.50, 1, 2.5, -34.2, leaf2_texture);
    dp.DrawCuboidWithTexture(0.50, 0.6, 0.50, 1, 2.5, -32.4, leaf2_texture);
    glPopMatrix();

    glPushMatrix();
    glRotatef(-15.0, 0.0, 1.0, 0.0);
    glTranslatef(-70, 0.0, 20.0);
    dp.DrawCuboidWithTexture(0.15, 2, 0.15, 1, -0.2, -33.3, tree_texture);
    dp.DrawCuboidWithTexture(0.85, 1, 0.85, 1, 2.3, -33.3, leaf2_texture);
    dp.DrawCuboidWithTexture(0.50, 0.6, 0.50, 1, 3.8, -33.3, leaf2_texture);
    dp.DrawCuboidWithTexture(0.50, 0.6, 0.50, 1.9, 2.5, -33.3, leaf2_texture);
    dp.DrawCuboidWithTexture(0.50, 0.6, 0.50, 0.1, 2.5, -33.3, leaf2_texture);
    dp.DrawCuboidWithTexture(0.50, 0.6, 0.50, 1, 2.5, -34.2, leaf2_texture);
    dp.DrawCuboidWithTexture(0.50, 0.6, 0.50, 1, 2.5, -32.4, leaf2_texture);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.8, 0.8, 1.0);
    glRotatef(-15.0, 0.0, 1.0, 0.0);
    glTranslatef(-75, 0.0, 25.0);
    dp.DrawCuboidWithTexture(0.15, 2, 0.15, 1, -0.2, -33.3, tree_texture);
    dp.DrawCuboidWithTexture(0.85, 1, 0.85, 1, 2.3, -33.3, leaf4_texture);
    dp.DrawCuboidWithTexture(0.50, 0.6, 0.50, 1, 3.8, -33.3, leaf4_texture);
    dp.DrawCuboidWithTexture(0.50, 0.6, 0.50, 1.9, 2.5, -33.3, leaf4_texture);
    dp.DrawCuboidWithTexture(0.50, 0.6, 0.50, 0.1, 2.5, -33.3, leaf4_texture);
    dp.DrawCuboidWithTexture(0.50, 0.6, 0.50, 1, 2.5, -34.2, leaf4_texture);
    dp.DrawCuboidWithTexture(0.50, 0.6, 0.50, 1, 2.5, -32.4, leaf4_texture);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.8, 0.8, 1.0);
    glRotatef(-15.0, 0.0, 1.0, 0.0);
    glTranslatef(-60, 0.0, 25.0);
    dp.DrawCuboidWithTexture(0.15, 2, 0.15, 1, -0.2, -33.3, tree_texture);
    dp.DrawCuboidWithTexture(0.85, 1, 0.85, 1, 2.3, -33.3, leaf4_texture);
    dp.DrawCuboidWithTexture(0.50, 0.6, 0.50, 1, 3.8, -33.3, leaf4_texture);
    dp.DrawCuboidWithTexture(0.50, 0.6, 0.50, 1.9, 2.5, -33.3, leaf4_texture);
    dp.DrawCuboidWithTexture(0.50, 0.6, 0.50, 0.1, 2.5, -33.3, leaf4_texture);
    dp.DrawCuboidWithTexture(0.50, 0.6, 0.50, 1, 2.5, -34.2, leaf4_texture);
    dp.DrawCuboidWithTexture(0.50, 0.6, 0.50, 1, 2.5, -32.4, leaf4_texture);
    glPopMatrix();

    glPushMatrix();
    glRotatef(-15.0, 0.0, 1.0, 0.0);
    glTranslatef(19, 0.75, 13);
    glScalef(1.85, 1.85, 1.85);
    dp.DrawCuboidWithTexture(0.1, 1.5, 0.1, 0, 0, 0, tree_texture);
    dp.DrawCuboidWithTexture(0.3, 0.3, 0.3, 0, 1, 0, leaf_texture);
    dp.DrawCuboidWithTexture(0.4, 0.6, 0.4, 0, 2, 0, leaf_texture);
    dp.DrawCuboidWithTexture(0.5, 0.6, 0.5, 0, 1.3, 0, leaf_texture);
    dp.DrawCuboidWithTexture(0.55, 0.2, 0.55, 0, 1.3, 0, leaf_texture);
    dp.DrawCuboidWithTexture(0.3, 0.3, 0.3, 0, 3, 0, leaf_texture);
    dp.DrawCuboidWithTexture(0.18, 0.3, 0.18, 0, 3.3, 0, leaf_texture);
    glPopMatrix();

    FreeCreatedTextures3();
}

void DrawScene::StreetLight()
{
    glColor3f(1, 1, 1);
    SingleTexture(streetLight_texture, "textures/StreetLight/streetlightBody.bmp", 256, 256);
    streetLightTop_texture[2] = LoadTexture::LoadTextureImageFile("textures/StreetLight/streetlightbright.bmp", 256, 256);
    streetLightTop_texture[3] = streetLightTop_texture[0] = streetLightTop_texture[1] = streetLightTop_texture[4] = streetLightTop_texture[5] = LoadTexture::LoadTextureImageFile("textures/StreetLight/streetlightBody.bmp", 256, 256);

    glPushMatrix();
    glTranslatef(7.0, 0, -24.8);
    glRotatef(-105, 0.0, 1.0, 0.0);
    glScalef(0.32, 0.47, 0.32);
    glRotatef(0.0, 0.0, 1.0, 0.0);
    for (double iii = 0; iii < 85; iii += 20)
        dp.DrawCuboidWithTexture(0.2, 7.5, 0.3, 0, 0.0, iii, streetLight_texture);
    for (double iii = 0; iii < 85; iii += 20)
        dp.DrawCuboidWithTexture(0.91, 0.3, 0.31, -0.7, 14.5, iii, streetLightTop_texture);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(7.0, 0, -24.8);
    glRotatef(-105, 0.0, 1.0, 0.0);
    glScalef(0.32, 0.47, 0.32);
    glRotatef(0.0, 0.0, 1.0, 0.0);
    for (double iii = 0; iii < 125; iii += 25)
        dp.DrawCuboidWithTexture(0.2, 7.5, 0.3, -47, 0.0, iii, streetLight_texture);
    for (double iii = 0; iii < 125; iii += 25)
        dp.DrawCuboidWithTexture(0.91, 0.3, 0.31, -46.3, 14.5, iii, streetLightTop_texture);
    glPopMatrix();

    FreeCreatedTextures3();
}

/*These scenes created by Tekson Chan*/
void DrawScene::Car()
{
    {
        glPushMatrix();
        glRotatef(25.0, 0.0, 1.0, 0.0);
        glScalef(0.2, 0.2, 0.2);
        glTranslatef(10.0, 4.2, -247);

        glPushMatrix();
        glRotatef(135.0, 0.0, 1.0, 0.0);
        carbelow_texture[3] = LoadTexture::LoadTextureImageFile("textures/Car/Front.bmp", 512, 512);
        carbelow_texture[0] = LoadTexture::LoadTextureImageFile("textures/Car/side.bmp", 512, 512);
        carbelow_texture[1] = LoadTexture::LoadTextureImageFile("textures/Car/side2.bmp", 512, 512);
        carbelow_texture[5] = LoadTexture::LoadTextureImageFile("textures/Car/back.bmp", 512, 512);
        carbelow_texture[4] = LoadTexture::LoadTextureImageFile("textures/Car/top.bmp", 512, 512);
        dp.DrawCuboidWithTexture(4.5, 0.7, 2.0, 10.5, 0.8, 64, carbelow_texture);

        //----------------------------------------------------------------------------------------

        carAbove_texture[3] = LoadTexture::LoadTextureImageFile("textures/Car/mirror.bmp", 512, 512);
        carAbove_texture[0] = LoadTexture::LoadTextureImageFile("textures/Car/sidemirror.bmp", 512, 512);
        carAbove_texture[1] = LoadTexture::LoadTextureImageFile("textures/Car/sidemirror.bmp", 512, 512);
        carAbove_texture[5] = LoadTexture::LoadTextureImageFile("textures/Car/mirror.bmp", 512, 512);
        carAbove_texture[4] = LoadTexture::LoadTextureImageFile("textures/Car/top.bmp", 512, 512);
        dp.DrawCuboidWithTexture(2.2, 0.5, 2.0, 10.0, 2.2, 64, carAbove_texture);
        glPopMatrix();

        //tyre
        glPushMatrix();
        glColor3f(0.0, 0.0, 0.0);
        glRotatef(90.0, 30.0, 1.0, 30.0);
        dp.DrawCylinder(0.5, 0.5, 20.0, -7.3, -62.7, -9.0, 0.0);
        dp.DrawCylinder(0.5, 0.5, 20.0, -7.3, -66.4, -9.0, 0.0);
        dp.DrawCylinder(0.5, 0.5, 20.0, -3.5, -66.2, -5.0, 0.0);
        dp.DrawCylinder(0.5, 0.5, 20.0, -3.5, -62.4, -5.0, 0.0);
        glPopMatrix();

        //rim1
        glColor3f(1.0, 1.0, 1.0);
        glPushMatrix();
        glRotatef(90.0, 30.0, 1.0, 30.0);
        dp.DrawCylinder(0.3, 0.0, 20.0, -7.3, -62.15, -9.0, 0.0);
        dp.DrawCylinder(0.3, 0.0, 20.0, -7.3, -66.45, -9.0, 0.0);
        dp.DrawCylinder(0.3, 0.0, 20.0, -3.5, -66.25, -5.0, 0.0);
        dp.DrawCylinder(0.3, 0.0, 20.0, -3.5, -61.85, -5.0, 0.0);
        glPopMatrix();

        glPopMatrix();
    }

    {
        glPushMatrix();
        glRotatef(120.0, 0.0, 1.0, 0.0);
        glScalef(0.2, 0.2, 0.2);
        glTranslatef(87.0, 4.2, 180);

        glPushMatrix();
        glRotatef(135.0, 0.0, 1.0, 0.0);
        dp.DrawCuboidWithTexture(4.5, 0.7, 2.0, 10.5, 0.8, 64, carbelow_texture);
        dp.DrawCuboidWithTexture(2.2, 0.5, 2.0, 10.0, 2.2, 64, carAbove_texture);
        glPopMatrix();

        //tyre
        glPushMatrix();
        glColor3f(0.0, 0.0, 0.0);
        glRotatef(90.0, 30.0, 1.0, 30.0);
        dp.DrawCylinder(0.5, 0.5, 20.0, -7.3, -62.7, -9.0, 0.0);
        dp.DrawCylinder(0.5, 0.5, 20.0, -7.3, -66.4, -9.0, 0.0);
        dp.DrawCylinder(0.5, 0.5, 20.0, -3.5, -66.2, -5.0, 0.0);
        dp.DrawCylinder(0.5, 0.5, 20.0, -3.5, -62.4, -5.0, 0.0);
        glPopMatrix();

        //rim1
        glPushMatrix();
        glRotatef(90.0, 30.0, 1.0, 30.0);
        dp.DrawCylinder(0.3, 0.0, 20.0, -7.3, -62.15, -9.0, 0.0);
        dp.DrawCylinder(0.3, 0.0, 20.0, -7.3, -66.45, -9.0, 0.0);
        dp.DrawCylinder(0.3, 0.0, 20.0, -3.5, -66.25, -5.0, 0.0);
        dp.DrawCylinder(0.3, 0.0, 20.0, -3.5, -61.85, -5.0, 0.0);
        glPopMatrix();

        glPopMatrix();
    }

    {
        glPushMatrix();

        glColor3f(1.0, 1.0, 1.0);
        glRotatef(120.0, 0.0, 1.0, 0.0);
        glScalef(0.2, 0.2, 0.2);
        glTranslatef(87.0, 4.2, 255);

        glPushMatrix();
        glRotatef(135.0, 0.0, 1.0, 0.0);
        dp.DrawCuboidWithTexture(4.5, 0.7, 2.0, 10.5, 0.8, 64, carbelow_texture);
        dp.DrawCuboidWithTexture(2.2, 0.5, 2.0, 10.0, 2.2, 64, carAbove_texture);
        glPopMatrix();

        //tyre
        glPushMatrix();
        glColor3f(0.0, 0.0, 0.0);
        glRotatef(90.0, 30.0, 1.0, 30.0);
        dp.DrawCylinder(0.5, 0.5, 20.0, -7.3, -62.7, -9.0, 0.0);
        dp.DrawCylinder(0.5, 0.5, 20.0, -7.3, -66.4, -9.0, 0.0);
        dp.DrawCylinder(0.5, 0.5, 20.0, -3.5, -66.2, -5.0, 0.0);
        dp.DrawCylinder(0.5, 0.5, 20.0, -3.5, -62.4, -5.0, 0.0);
        glPopMatrix();

        //rim1
        glPushMatrix();
        glRotatef(90.0, 30.0, 1.0, 30.0);
        dp.DrawCylinder(0.3, 0.0, 20.0, -7.3, -62.15, -9.0, 0.0);
        dp.DrawCylinder(0.3, 0.0, 20.0, -7.3, -66.45, -9.0, 0.0);
        dp.DrawCylinder(0.3, 0.0, 20.0, -3.5, -66.25, -5.0, 0.0);
        dp.DrawCylinder(0.3, 0.0, 20.0, -3.5, -61.85, -5.0, 0.0);
        glPopMatrix();

        glPopMatrix();
        FreeCreatedTextures3();
    }
}

void DrawScene::Bench()
{
    glTranslatef(0, -0.5, 0);
    {
        glPushMatrix();
        glScalef(0.8, 0.8, 0.8);
        glTranslatef(-9, 2, 3.5);
        glColor3f(1.0, 1.0, 1.0);
        SingleTexture(wood_texture, "textures/Wood.bmp", 512, 512);
        glRotatef(-15.0, 0.0, 1.0, 0.0);
        dp.DrawCuboidWithTexture(1.2, 0.05, 0.4, 4.0, 0.5, 2.5, wood_texture);
        dp.DrawCuboidWithTexture(1.2, 0.05, 0.2, 4.0, 0.25, 3.0, wood_texture);
        dp.DrawCuboidWithTexture(1.2, 0.05, 0.2, 4.0, 0.25, 2.0, wood_texture);
        dp.DrawCuboidWithTexture(0.05, 0.2, 0.05, 3.0, 0.15, 2.7, wood_texture);
        dp.DrawCuboidWithTexture(0.05, 0.2, 0.05, 3.0, 0.15, 2.3, wood_texture);
        dp.DrawCuboidWithTexture(0.05, 0.2, 0.05, 5.0, 0.15, 2.7, wood_texture);
        dp.DrawCuboidWithTexture(0.05, 0.2, 0.05, 5.0, 0.15, 2.3, wood_texture);
        dp.DrawCuboidWithTexture(0.05, 0.1, 0.05, 3.0, 0.15, 2.1, wood_texture);
        dp.DrawCuboidWithTexture(0.05, 0.1, 0.05, 3.0, 0.15, 1.9, wood_texture);
        dp.DrawCuboidWithTexture(0.05, 0.1, 0.05, 5.0, 0.15, 2.1, wood_texture);
        dp.DrawCuboidWithTexture(0.05, 0.1, 0.05, 5.0, 0.15, 1.9, wood_texture);
        dp.DrawCuboidWithTexture(0.05, 0.1, 0.05, 3.0, 0.15, 2.9, wood_texture);
        dp.DrawCuboidWithTexture(0.05, 0.1, 0.05, 3.0, 0.15, 3.1, wood_texture);
        dp.DrawCuboidWithTexture(0.05, 0.1, 0.05, 5.0, 0.15, 2.9, wood_texture);
        dp.DrawCuboidWithTexture(0.05, 0.1, 0.05, 5.0, 0.15, 3.1, wood_texture);
        glPopMatrix();
    }

    {
        FreeCreatedTextures3();
        glPushMatrix();
        glScalef(0.8, 0.8, 0.8);
        glTranslatef(-4.15, 2, 5.15);
        glColor3f(1.0, 1.0, 1.0);
        SingleTexture(wood_texture, "textures/Wood.bmp", 512, 512);
        glRotatef(0.0, 0.0, 1.0, 0.0);
        dp.DrawCuboidWithTexture(1.2, 0.05, 0.4, 4.0, 0.5, 2.5, wood_texture);
        dp.DrawCuboidWithTexture(1.2, 0.05, 0.2, 4.0, 0.25, 3.0, wood_texture);
        dp.DrawCuboidWithTexture(1.2, 0.05, 0.2, 4.0, 0.25, 2.0, wood_texture);
        dp.DrawCuboidWithTexture(0.05, 0.2, 0.05, 3.0, 0.15, 2.7, wood_texture);
        dp.DrawCuboidWithTexture(0.05, 0.2, 0.05, 3.0, 0.15, 2.3, wood_texture);
        dp.DrawCuboidWithTexture(0.05, 0.2, 0.05, 5.0, 0.15, 2.7, wood_texture);
        dp.DrawCuboidWithTexture(0.05, 0.2, 0.05, 5.0, 0.15, 2.3, wood_texture);
        dp.DrawCuboidWithTexture(0.05, 0.1, 0.05, 3.0, 0.15, 2.1, wood_texture);
        dp.DrawCuboidWithTexture(0.05, 0.1, 0.05, 3.0, 0.15, 1.9, wood_texture);
        dp.DrawCuboidWithTexture(0.05, 0.1, 0.05, 5.0, 0.15, 2.1, wood_texture);
        dp.DrawCuboidWithTexture(0.05, 0.1, 0.05, 5.0, 0.15, 1.9, wood_texture);
        dp.DrawCuboidWithTexture(0.05, 0.1, 0.05, 3.0, 0.15, 2.9, wood_texture);
        dp.DrawCuboidWithTexture(0.05, 0.1, 0.05, 3.0, 0.15, 3.1, wood_texture);
        dp.DrawCuboidWithTexture(0.05, 0.1, 0.05, 5.0, 0.15, 2.9, wood_texture);
        dp.DrawCuboidWithTexture(0.05, 0.1, 0.05, 5.0, 0.15, 3.1, wood_texture);
        glPopMatrix();
    }

    {
        FreeCreatedTextures3();
        glPushMatrix();
        glScalef(0.8, 0.8, 0.8);
        glTranslatef(1, 2, 5);
        glColor3f(1.0, 1.0, 1.0);
        SingleTexture(wood_texture, "textures/Wood.bmp", 512, 512);
        glRotatef(10.0, 0.0, 1.0, 0.0);
        dp.DrawCuboidWithTexture(1.2, 0.05, 0.4, 4.0, 0.5, 2.5, wood_texture);
        dp.DrawCuboidWithTexture(1.2, 0.05, 0.2, 4.0, 0.25, 3.0, wood_texture);
        dp.DrawCuboidWithTexture(1.2, 0.05, 0.2, 4.0, 0.25, 2.0, wood_texture);
        dp.DrawCuboidWithTexture(0.05, 0.2, 0.05, 3.0, 0.15, 2.7, wood_texture);
        dp.DrawCuboidWithTexture(0.05, 0.2, 0.05, 3.0, 0.15, 2.3, wood_texture);
        dp.DrawCuboidWithTexture(0.05, 0.2, 0.05, 5.0, 0.15, 2.7, wood_texture);
        dp.DrawCuboidWithTexture(0.05, 0.2, 0.05, 5.0, 0.15, 2.3, wood_texture);
        dp.DrawCuboidWithTexture(0.05, 0.1, 0.05, 3.0, 0.15, 2.1, wood_texture);
        dp.DrawCuboidWithTexture(0.05, 0.1, 0.05, 3.0, 0.15, 1.9, wood_texture);
        dp.DrawCuboidWithTexture(0.05, 0.1, 0.05, 5.0, 0.15, 2.1, wood_texture);
        dp.DrawCuboidWithTexture(0.05, 0.1, 0.05, 5.0, 0.15, 1.9, wood_texture);
        dp.DrawCuboidWithTexture(0.05, 0.1, 0.05, 3.0, 0.15, 2.9, wood_texture);
        dp.DrawCuboidWithTexture(0.05, 0.1, 0.05, 3.0, 0.15, 3.1, wood_texture);
        dp.DrawCuboidWithTexture(0.05, 0.1, 0.05, 5.0, 0.15, 2.9, wood_texture);
        dp.DrawCuboidWithTexture(0.05, 0.1, 0.05, 5.0, 0.15, 3.1, wood_texture);
        glPopMatrix();
    }

    FreeCreatedTextures3();
}

void DrawScene::TrashCan()
{
    glPushMatrix();
    glScalef(0.8, 0.8, 0.8);
    glTranslatef(7.2, 2, 1);
    glRotatef(-85, 0.0, 1.0, 0.0);

    trashCan1_texture[3] = LoadTexture::LoadTextureImageFile("textures/RecycleBin/blueFront.bmp", 256, 256);
    trashCan1_texture[1] = trashCan1_texture[0] = trashCan1_texture[4] = trashCan1_texture[2] = trashCan1_texture[5] = LoadTexture::LoadTextureImageFile("textures/RecycleBin/bluewhole.bmp", 256, 256);
    dp.DrawCuboidWithTexture(0.2, 0.5, 0.3, 0, 0.0, 0.0, trashCan1_texture);

    //----------------------------------------------------------------------------------------------------
    trashCan2_texture[3] = LoadTexture::LoadTextureImageFile("textures/RecycleBin/orgFront.bmp", 256, 256);
    trashCan2_texture[1] = trashCan2_texture[0] = trashCan2_texture[4] = trashCan2_texture[2] = trashCan2_texture[5] = LoadTexture::LoadTextureImageFile("textures/RecycleBin/orgwhole.bmp", 256, 256);
    dp.DrawCuboidWithTexture(0.2, 0.5, 0.3, 0, 0.0, 1.0, trashCan2_texture);

    //------------------------------------------------------------------------------------------------------
    trashCan3_texture[3] = LoadTexture::LoadTextureImageFile("textures/RecycleBin/brownFront.bmp", 256, 256);
    trashCan3_texture[1] = trashCan3_texture[0] = trashCan3_texture[4] = trashCan3_texture[2] = trashCan3_texture[5] = LoadTexture::LoadTextureImageFile("textures/RecycleBin/brownwhole.bmp", 256, 256);
    dp.DrawCuboidWithTexture(0.2, 0.5, 0.3, 0, 0.0, 2.0, trashCan3_texture);
    glPopMatrix();

    FreeCreatedTextures3();
}



void DrawScene::Bus()
{
    glPushMatrix();
    glScalef(0.33, 0.33, 0.33);
    glTranslatef(-7.2, 3.6, -145);
    glRotatef(117.0, 0.0, 1.0, 0.0);

    glPushMatrix();
    glRotatef(-43.0, 0.0, 1.0, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    bus_texture[0] = LoadTexture::LoadTextureImageFile("textures/Bus/BusFront.bmp", 512, 512);
    bus_texture[3] = LoadTexture::LoadTextureImageFile("textures/Bus/BusSide1.bmp", 512, 512);
    bus_texture[5] = LoadTexture::LoadTextureImageFile("textures/Bus/BusSide2.bmp", 512, 512);
    bus_texture[1] = LoadTexture::LoadTextureImageFile("textures/Bus/BusBack.bmp", 512, 512);
    bus_texture[4] = LoadTexture::LoadTextureImageFile("textures/Bus/BusTop.bmp", 512, 512);
    dp.DrawCuboidWithTexture(3.0, 2.5, 6.0, -70.0, 0.5, 0.0, bus_texture);
    glPopMatrix();

    glPushMatrix();
    //tyre
    glRotatef(-90.0, -30.0, 1.0, 30.0);
    glColor3f(0.0, 0.0, 0.0);
    dp.DrawCylinder(1.0, 1.5, 20.0, -0.5, -68.4, -1.2, 0.0);
    dp.DrawCylinder(1.0, 1.5, 20.0, -6.0, -68.0, 4.6, 0.0);
    dp.DrawCylinder(1.0, 1.5, 20.0, -0.5, -73.3, -1.2, 0.0);
    dp.DrawCylinder(1.0, 1.5, 20.0, -6.0, -72.8, 4.6, 0.0);
    //rim
    glColor3f(1.0, 1.0, 1.0);
    dp.DrawCylinder(0.5, 1.5, 20.0, -0.5, -68.2, -1.2, 0.0);
    dp.DrawCylinder(0.5, 1.5, 20.0, -6.0, -67.9, 4.6, 0.0);
    dp.DrawCylinder(0.5, 1.5, 20.0, -0.5, -73.5, -1.2, 0.0);
    dp.DrawCylinder(0.5, 1.5, 20.0, -6.0, -73.0, 4.6, 0.0);
    glPopMatrix();

    glPopMatrix();
    FreeCreatedTextures3();

}

void DrawScene::glassBox()
{
    glPushMatrix();
    glRotatef(0.0, 0.0, 1.0, 0.0);
    Box_texture[0] = Box_texture[1] = LoadTexture::LoadTextureImageFile("textures/GlassBox/glassboxside.bmp", 512, 512);
    Box_texture[3] = Box_texture[4] = Box_texture[5] = LoadTexture::LoadTextureImageFile("textures/GlassBox/glassboxfront.bmp", 512, 512);
    dp.DrawCuboidWithTexture(0.6, 0.5, 0.3, -3.0, 1.25, 1.25, Box_texture);

    glPopMatrix();

    FreeCreatedTextures3();
}

void DrawScene::waterDispenser()
{
    glPushMatrix();
    glTranslatef(-2, 1.25, -7.5);
    glRotatef(0.0, 0.0, 1.0, 0.0);
    dispenser_texture[0] = LoadTexture::LoadTextureImageFile("textures/WaterDispenser/dispenserside.bmp", 512, 512);
    dispenser_texture[1] = LoadTexture::LoadTextureImageFile("textures/WaterDispenser/dispenserside1.bmp", 512, 512);
    dispenser_texture[3] = LoadTexture::LoadTextureImageFile("textures/WaterDispenser/dispenserside2.bmp", 512, 512);
    dispenser_texture[5] = LoadTexture::LoadTextureImageFile("textures/WaterDispenser/dispenserside3.bmp", 512, 512);
    dispenser_texture[4] = LoadTexture::LoadTextureImageFile("textures/WaterDispenser/dispensertop.bmp", 512, 512);
    dp.DrawCuboidWithTexture(0.2, 0.5, 0.3, 0.0, 0.0, 0.0, dispenser_texture);
    SingleTexture(tap_texture, "textures/WaterDispenser/sliver.bmp", 512, 512);
    dp.DrawCuboidWithTexture(0.02, 0.05, 0.03, 0.0, 1.0, 0.0, tap_texture);
    dp.DrawCuboidWithTexture(0.02, 0.03, 0.03, 0.0, 1.0, 0.0, tap_texture);

    glPopMatrix();

    glPushMatrix();
    glTranslatef(-1.82, 1.25, 3.33);
    glRotatef(0.0, 0.0, 1.0, 0.0);
    dp.DrawCuboidWithTexture(0.2, 0.5, 0.3, 0.0, 0.0, 0.0, dispenser_texture);
    dp.DrawCuboidWithTexture(0.02, 0.05, 0.03, 0.0, 1.0, 0.0, tap_texture);
    dp.DrawCuboidWithTexture(0.02, 0.03, 0.03, 0.0, 1.0, 0.0, tap_texture);

    glPopMatrix();
    FreeCreatedTextures3();
}