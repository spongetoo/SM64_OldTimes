#ifndef INTRO_HEADER_H
#define INTRO_HEADER_H

#include "types.h"

// geo
extern const GeoLayout intro_geo_0002D0[];
extern const GeoLayout intro_geo_mario_head_regular[];
extern const GeoLayout intro_geo_mario_head_dizzy[];
extern const GeoLayout intro_geo_000414[];

// leveldata
extern Lights1 title_Red_f3d_lights;
extern Lights1 title_Blue_f3d_lights;
extern Lights1 title_Yellow_f3d_lights;
extern Lights1 title_White_f3d_lights;
extern Lights1 title_Green_f3d_lights;
extern Lights1 title_Purple_f3d_lights;
extern u64 title_title_screen_red_ci4[];
extern u64 title_title_screen_red_ci4_pal_rgba16[];
extern u64 title_title_screen_blue_ci4[];
extern u64 title_title_screen_blue_ci4_pal_rgba16[];
extern u64 title_title_screen_yellow_ci4[];
extern u64 title_title_screen_yellow_ci4_pal_rgba16[];
extern u64 title_title_screen_green_ci4[];
extern u64 title_title_screen_green_ci4_pal_rgba16[];
extern u64 title_title_screen_purple_ci4[];
extern u64 title_title_screen_purple_ci4_pal_rgba16[];
extern Vtx title_Logo_mesh_vtx_0[226];
extern Gfx title_Logo_mesh_tri_0[];
extern Vtx title_Logo_mesh_vtx_1[262];
extern Gfx title_Logo_mesh_tri_1[];
extern Vtx title_Logo_mesh_vtx_2[206];
extern Gfx title_Logo_mesh_tri_2[];
extern Vtx title_Logo_mesh_vtx_3[251];
extern Gfx title_Logo_mesh_tri_3[];
extern Vtx title_Logo_mesh_vtx_4[211];
extern Gfx title_Logo_mesh_tri_4[];
extern Vtx title_Logo_mesh_vtx_5[458];
extern Gfx title_Logo_mesh_tri_5[];
extern Gfx mat_title_Red_f3d[];
extern Gfx mat_revert_title_Red_f3d[];
extern Gfx mat_title_Blue_f3d[];
extern Gfx mat_revert_title_Blue_f3d[];
extern Gfx mat_title_Yellow_f3d[];
extern Gfx mat_revert_title_Yellow_f3d[];
extern Gfx mat_title_White_f3d[];
extern Gfx mat_title_Green_f3d[];
extern Gfx mat_revert_title_Green_f3d[];
extern Gfx mat_title_Purple_f3d[];
extern Gfx mat_revert_title_Purple_f3d[];
extern Gfx title_Logo_mesh[];
extern const Gfx intro_seg7_dl_0700C6A0[];
extern const f32 intro_seg7_table_0700C790[];
extern const f32 intro_seg7_table_0700C880[];

// script
extern const LevelScript level_intro_splash_screen[];
extern const LevelScript level_intro_mario_head_regular[];
extern const LevelScript level_intro_mario_head_dizzy[];
extern const LevelScript level_intro_entry_4[];
extern const LevelScript script_intro_L1[];
extern const LevelScript script_intro_L2[];
extern const LevelScript script_intro_L3[];
extern const LevelScript script_intro_L4[];
extern const LevelScript script_intro_L5[];

#endif