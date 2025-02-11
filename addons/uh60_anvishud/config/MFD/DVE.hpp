class DVE_DCLT {
    condition=COND_FULL_ONLY;
	class airport
	{
		type = "line";
		points[] = {{"airport1", 1}, {"airport2", 1}, {"airport4", 1}, {"airport3", 1}, {"airport1", 1}};
	};

	class HVR_COND {
		condition="(speed < 10) * (altitudeAGL > 2)";
		color[] = common_blue;
		#define HSI_HVR_10KTS 0.04
		TEXT_FMS_C(HOVER_ANNOUNCE,0.5,0.15)
			source = "static";
			sourceScale = 1;
			text = "HOVER";
		}; // HOVER_ANNOUNCE

		class HVR_VEL_LINE_DRAW {
			type="line";
			width=2;
			points[] =
			{
				{"HUDCenter",1},
				{"HUDCenter",1,"PFD_HOVER_VEL_Y",1,"PFD_HOVER_VEL_X",1}
			};
		}; // HVR_VEL_LINE_DRAW
		
		class HVR_VEL_END_DRAW {
			type="line";
			width=2;
			points[] =
			{
				{"HUDCenter",1,"PFD_HOVER_VEL_Y",1,"PFD_HOVER_VEL_X",1, { 0   ,-0.01},1},
				{"HUDCenter",1,"PFD_HOVER_VEL_Y",1,"PFD_HOVER_VEL_X",1, { 0.01, 0},1},
				{"HUDCenter",1,"PFD_HOVER_VEL_Y",1,"PFD_HOVER_VEL_X",1, { 0   , 0.01},1},
				{"HUDCenter",1,"PFD_HOVER_VEL_Y",1,"PFD_HOVER_VEL_X",1, {-0.01, 0},1},
				{"HUDCenter",1,"PFD_HOVER_VEL_Y",1,"PFD_HOVER_VEL_X",1, { 0   ,-0.01},1}
			};
		}; // HVR_VEL_LINE_DRAW
		class HVR_WP_VALID {
        	condition="WPvalid";
			#define HVR_WP_SPACING 0.01
			class HVR_WP_DRAW {
				type="line";
				width=2;
				points[] =
				{
					{"DVE_WP_DIST",1,"DVE_WP_VEH_DIR",1,"DVE_WP_DIR", 1,    {0+HVR_WP_SPACING, 0.02+HVR_WP_SPACING}, 1},
					{"DVE_WP_DIST",1,"DVE_WP_VEH_DIR",1,"DVE_WP_DIR", 1,    {0.008134732861516003+HVR_WP_SPACING, 0.018270909152852018+HVR_WP_SPACING}, 1},
					{"DVE_WP_DIST",1,"DVE_WP_VEH_DIR",1,"DVE_WP_DIR", 1,    {0.014862896509547885+HVR_WP_SPACING, 0.013382612127177165+HVR_WP_SPACING}, 1},
					{"DVE_WP_DIST",1,"DVE_WP_VEH_DIR",1,"DVE_WP_DIR", 1,    {0.019021130325903073+HVR_WP_SPACING, 0.006180339887498949+HVR_WP_SPACING}, 1},
					{"DVE_WP_DIST",1,"DVE_WP_VEH_DIR",1,"DVE_WP_DIR", 1,    {0.019890437907365468+HVR_WP_SPACING, -0.002090569265353067+HVR_WP_SPACING}, 1},{},
					{"DVE_WP_DIST",1,"DVE_WP_VEH_DIR",1,"DVE_WP_DIR", 1,    {0.019890437907365468+HVR_WP_SPACING, -0.002090569265353067-HVR_WP_SPACING}, 1},
					{"DVE_WP_DIST",1,"DVE_WP_VEH_DIR",1,"DVE_WP_DIR", 1,    {0.017320508075688773+HVR_WP_SPACING, -0.009999999999999995-HVR_WP_SPACING}, 1},
					{"DVE_WP_DIST",1,"DVE_WP_VEH_DIR",1,"DVE_WP_DIR", 1,    {0.011755705045849465+HVR_WP_SPACING, -0.016180339887498948-HVR_WP_SPACING}, 1},
					{"DVE_WP_DIST",1,"DVE_WP_VEH_DIR",1,"DVE_WP_DIR", 1,    {0.0041582338163551865+HVR_WP_SPACING, -0.019562952014676113-HVR_WP_SPACING}, 1},{},
					{"DVE_WP_DIST",1,"DVE_WP_VEH_DIR",1,"DVE_WP_DIR", 1,    {-0.004158233816355181-HVR_WP_SPACING, -0.019562952014676113-HVR_WP_SPACING}, 1},
					{"DVE_WP_DIST",1,"DVE_WP_VEH_DIR",1,"DVE_WP_DIR", 1,    {-0.011755705045849461-HVR_WP_SPACING, -0.016180339887498948-HVR_WP_SPACING}, 1},
					{"DVE_WP_DIST",1,"DVE_WP_VEH_DIR",1,"DVE_WP_DIR", 1,    {-0.01732050807568877-HVR_WP_SPACING, -0.010000000000000009-HVR_WP_SPACING}, 1},
					{"DVE_WP_DIST",1,"DVE_WP_VEH_DIR",1,"DVE_WP_DIR", 1,    {-0.019890437907365468-HVR_WP_SPACING, -0.0020905692653530672-HVR_WP_SPACING}, 1},{},
					{"DVE_WP_DIST",1,"DVE_WP_VEH_DIR",1,"DVE_WP_DIR", 1,    {-0.019890437907365468-HVR_WP_SPACING, -0.0020905692653530672+HVR_WP_SPACING}, 1},
					{"DVE_WP_DIST",1,"DVE_WP_VEH_DIR",1,"DVE_WP_DIR", 1,    {-0.019021130325903073-HVR_WP_SPACING, 0.006180339887498945+HVR_WP_SPACING}, 1},
					{"DVE_WP_DIST",1,"DVE_WP_VEH_DIR",1,"DVE_WP_DIR", 1,    {-0.014862896509547892-HVR_WP_SPACING, 0.013382612127177156+HVR_WP_SPACING}, 1},
					{"DVE_WP_DIST",1,"DVE_WP_VEH_DIR",1,"DVE_WP_DIR", 1,    {-0.008134732861516003-HVR_WP_SPACING, 0.01827090915285202+HVR_WP_SPACING}, 1},
					{"DVE_WP_DIST",1,"DVE_WP_VEH_DIR",1,"DVE_WP_DIR", 1,    {0-HVR_WP_SPACING, 0.02+HVR_WP_SPACING}, 1}
				};
			};
			
			class METRIC {
				condition = COND_METRIC;
				class HVR_WP_DIST_TEXT {
					type = "text";
					align = "center";
					scale = 1;
					pos[] = {"DVE_WP_DIST",1,"DVE_WP_VEH_DIR",1,"DVE_WP_DIR", 1,{0.002*0.8, 0.03 + 0.003*0.8}, 1};
					right[] = {"DVE_WP_DIST",1,"DVE_WP_VEH_DIR",1,"DVE_WP_DIR", 1,{0.06*0.8, 0.03 + 0.003*0.8}, 1};
					down[] = {"DVE_WP_DIST",1,"DVE_WP_VEH_DIR",1,"DVE_WP_DIR", 1,{0.002*0.8,0.03 + 0.05*0.8}, 1};
					source = "user";
					sourceIndex = 1;
					sourceScale = 1;
					text = "VS";
				};
			}; // METRIC
			class IMPERIAL {
				condition = COND_IMPERIAL;
				class HVR_WP_DIST_TEXT {
					type = "text";
					align = "center";
					scale = 1;
					pos[] = {"DVE_WP_DIST",1,"DVE_WP_VEH_DIR",1,"DVE_WP_DIR", 1,{0.002*0.8, 0.03 + 0.003*0.8}, 1};
					right[] = {"DVE_WP_DIST",1,"DVE_WP_VEH_DIR",1,"DVE_WP_DIR", 1,{0.06*0.8, 0.03 + 0.003*0.8}, 1};
					down[] = {"DVE_WP_DIST",1,"DVE_WP_VEH_DIR",1,"DVE_WP_DIR", 1,{0.002*0.8,0.03 + 0.05*0.8}, 1};
					source = "user";
					sourceIndex = 1;
					sourceScale = 3.28;
					text = "VS";
				};
			}; // IMPERIAL
		};
	}; // HVR_COND
};