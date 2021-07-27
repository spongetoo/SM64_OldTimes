// 0x0F000518
const GeoLayout flyguy_geo[] = {
   GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 0x96, 100),
   GEO_OPEN_NODE(),
      GEO_SCALE(0x00, 16384),
      GEO_OPEN_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, flyguy_seg8_dl_08011710),
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, -45, -20, -55, NULL),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, flyguy_seg8_dl_08010840),
               GEO_CLOSE_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, -45, -20, 55, NULL),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, flyguy_seg8_dl_08010968),
               GEO_CLOSE_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 250, 0, 0, NULL),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_TRANSPARENT, 0, 0, 0, flyguy_seg8_dl_08010B80),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};
