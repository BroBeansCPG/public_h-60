TEXT_FMS_C(HEADER_TEXT,0.5,FMS_YHEAD)
  source = "static";
  text = "FM1";
}; // HEADER_TEXT


TEXT_FMS_L(RADIO_MHZ,0.37,FMS_Y2+FMS_HALF_LINE)
  source = "static";
  text = "59.500";
  //sourceIndex=20;
}; // Radio1_Line1
TEXT_FMS_L(RADIO_MHZ_Lbl,0.45,FMS_Y3-FMS_HALF_LINE)
  source = "static";
  text = "MHz";
}; // Radio1_Line2
class PGUP_CH
{
  type    = "polygon";
  points[] =
  {
    // space where texture should be drawn
    {
      {{FMS_MARGIN_L + 0.04, FMS_Y1 + 0.01},1},
      {{FMS_MARGIN_L + 0.09, FMS_Y1 + 0.06},1},
      {{FMS_MARGIN_L - 0.0, FMS_Y1 + 0.06},1}
    }
  }; // points
}; // PGUP
TEXT_FMS_L(CH_ROCKER,FMS_MARGIN_L,FMS_Y2-(3*FMS_HALF_LINE))
  source = "static";
  text = "CH1";
}; // Radio2_Line1
class PGDOWN_CH
{
  type    = "polygon";
  points[] =
  {
    // space where texture should be drawn
    {
      {{FMS_MARGIN_L + 0.04, FMS_Y2 + 0.07},1},
      {{FMS_MARGIN_L + 0.09, FMS_Y2 + 0.02},1},
      {{FMS_MARGIN_L - 0.0, FMS_Y2 + 0.02},1}
    }
  }; // points
}; // PGDOWN

class PGUP_OPT
{
  type    = "polygon";
  points[] =
  {
    // space where texture should be drawn
    {
      {{FMS_MARGIN_L + 0.04, FMS_Y3 + 0.01},1},
      {{FMS_MARGIN_L + 0.09, FMS_Y3 + 0.06},1},
      {{FMS_MARGIN_L - 0.0, FMS_Y3 + 0.06},1}
    }
  }; // points
}; // PGUP
TEXT_FMS_L(OPT_ROCKER,FMS_MARGIN_L,FMS_Y4-(3*FMS_HALF_LINE))
  source = "static";
  text = "LEFT";
}; // Radio2_Line1
class PGDOWN_OPT
{
  type    = "polygon";
  points[] =
  {
    // space where texture should be drawn
    {
      {{FMS_MARGIN_L + 0.04, FMS_Y4 + 0.07},1},
      {{FMS_MARGIN_L + 0.09, FMS_Y4 + 0.02},1},
      {{FMS_MARGIN_L - 0.0, FMS_Y4 + 0.02},1}
    }
  }; // points
}; // PGDOWN

TEXT_FMS_L(MENU_Text,FMS_MARGIN_L,FMS_Y5)
  source = "static";
  text = "< RTN";
}; // Menu_Text