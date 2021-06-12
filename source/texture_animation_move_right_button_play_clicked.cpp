/***********************************************************************************************
 * Project Name: Sprite Viewer                                                                 *
 * Programmer: Martin De Jonge                                                                 *
 * Last Update: 12 June 2021                                                                   *
 * Github:https://github.com/MDJ-Button                                                        *
 *---------------------------------------------------------------------------------------------*/

#include "MyFrame.hpp"
#include "MDJS.hpp"

void MyFrame::texture_animation_move_right_play_button_clicked(wxCommandEvent& event)
{
    if(MDJS::bFile_Loaded && !MDJS::bMFile_Loaded)
    {
        Data_Handler dh;

        if(!dh.Texture_Container[0].Animation_Move_Right_Play)
        {
            MDJS::bState_Animation_Right_Playing = true;

            dh.Texture_Container[0].Animation_Move_Up_Play = false;
            dh.Texture_Container[0].Animation_Move_Down_Play = false;
            dh.Texture_Container[0].Animation_Move_Left_Play = false;
            dh.Texture_Container[0].Animation_Move_Right_Play = true;
        }
        else
        {
            MDJS::bState_Animation_Right_Playing = false;

            dh.Texture_Container[0].Animation_Move_Right_Play = false;
        }

        MDJS::Status->SetStatusText(MDJS::State_Animation_Right_Playing(__func__, MDJS::bState_Animation_Right_Playing));
    }
}



