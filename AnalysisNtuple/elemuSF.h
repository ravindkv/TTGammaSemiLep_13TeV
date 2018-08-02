//In bins of 0.2 in absEta
double muTrackingSF[12][3] = { {0.996924,0.996996,0.997069},
								{0.997629,0.997712,0.997794},
								{0.998007,0.998078,0.998149},
								{0.997729,0.997804,0.997878},
								{0.997863,0.997971,0.998077},
								{0.996962,0.997148,0.997334},
								{0.996047,0.996227,0.996409},
								{0.995308,0.995479,0.995649},
								{0.995606,0.995781,0.995958},
								{0.993657,0.993892,0.994127},
								{0.992617,0.992943,0.993273},
								{0.986461,0.987313,0.988173}};

//Taken from combining BCDEF and GH from https://twiki.cern.ch/twiki/bin/view/CMS/MuonWorkInProgressAndPagResults
double muIdIsoSF[6][4][3] = { { {0.982175,0.984434,0.986693}, {0.991846,0.995412,0.998978}, {0.990022,0.991702,0.993382}, {0.981885,0.984787,0.987688}, },
							   { {0.992057,0.993262,0.994468}, {0.998298,1.000365,1.002432}, {0.995093,0.996092,0.997091}, {0.990776,0.992530,0.994284}, },
							   { {0.993362,0.993752,0.994143}, {0.998745,0.999447,1.000149}, {0.997677,0.998057,0.998437}, {0.995883,0.996573,0.997263}, },
							   { {0.995116,0.995289,0.995461}, {0.997599,0.997752,0.997904}, {0.997983,0.998067,0.998150}, {0.998147,0.998495,0.998844}, },
							   { {0.996429,0.996797,0.997165}, {0.998515,0.999121,0.999726}, {0.998046,0.998386,0.998725}, {0.997953,0.998730,0.999506}, },
							   { {0.998338,0.998806,0.999274}, {0.998320,0.999103,0.999885}, {0.998777,0.999235,0.999693}, {1.000398,1.001523,1.002648}, } };

//Taken from combining BCDEF and GH from https://twiki.cern.ch/twiki/bin/view/CMS/MuonWorkInProgressAndPagResults
double muTrigSF[7][4][3] = { { {0.979945,0.980956,0.981966}, {0.954675,0.956924,0.959174}, {0.980779,0.982631,0.984484}, {0.903027,0.906908,0.910789}, },
							  { {0.984395,0.984724,0.985052}, {0.965922,0.966496,0.967069}, {0.994957,0.995577,0.996197}, {0.943534,0.944924,0.946313}, },
							  { {0.985344,0.985599,0.985853}, {0.968089,0.968468,0.968846}, {0.999035,0.999465,0.999894}, {0.956917,0.958023,0.959128}, },
							  { {0.985190,0.985745,0.986299}, {0.968046,0.968827,0.969609}, {0.998521,0.999418,1.000314}, {0.958654,0.961000,0.963346}, },
							  { {0.983833,0.984741,0.985649}, {0.964031,0.965445,0.966858}, {0.997885,0.999318,1.000752}, {0.949569,0.953347,0.957124}, },
							  { {0.971605,0.976515,0.981424}, {0.941747,0.947421,0.953094}, {0.997657,1.005482,1.013308}, {0.946883,0.977561,1.008239}, },
							  { {0.975026,0.984242,0.993459}, {0.934809,0.952092,0.969374}, {0.959526,0.984215,1.008903}, {0.751047,0.919715,1.088383}, } };


//https://twiki.cern.ch/twiki/bin/view/CMS/EgammaIDRecipesRun2#Instructions_for_applying_electr
double eleRecoSF[30][3]={ {1.299366,1.317604,1.335843},
							 {1.102713,1.113780,1.124847},
							 {1.016467,1.024625,1.032784},
							 {1.006508,1.013641,1.020775},
							 {1.003074,1.007277,1.011479},
							 {0.988326,0.994819,1.001311},
							 {0.989620,0.994786,0.999952},
							 {0.986120,0.991632,0.997144},
							 {0.937098,0.963129,0.989159},
							 {0.986102,0.989701,0.993300},
							 {0.980592,0.985656,0.990719},
							 {0.978284,0.981595,0.984907},
							 {0.978550,0.984678,0.990807},
							 {0.975255,0.981614,0.987972},
							 {0.975131,0.980433,0.985734},
							 {0.979250,0.984552,0.989854},
							 {0.982406,0.988764,0.995123},
							 {0.981614,0.987743,0.993871},
							 {0.984431,0.987743,0.991054},
							 {0.982679,0.987743,0.992806},
							 {0.984081,0.987680,0.991279},
							 {0.941568,0.967598,0.993628},
							 {0.984115,0.989627,0.995139},
							 {0.987595,0.992761,0.997927},
							 {0.985268,0.991761,0.998254},
							 {0.993737,0.997940,1.002143},
							 {0.993904,1.001037,1.008171},
							 {0.981348,0.989507,0.997665},
							 {0.959452,0.970519,0.981586},
							 {0.888428,0.906667,0.924905}};



double eleIDSF[10][6][3]={ { {0.788319,0.806557,0.824796}, {0.864221,0.882459,0.900698}, {0.900602,0.918841,0.937079}, {0.922159,0.940397,0.958636}, {1.032847,1.051086,1.069324}, {1.032847,1.051086,1.069324}, },
							{ {0.810333,0.828571,0.846810}, {0.909249,0.927487,0.945726}, {0.948749,0.966988,0.985226}, {0.962726,0.980964,0.999203}, {0.987685,1.005924,1.024163}, {0.987685,1.005924,1.024163}, },
							{ {1.014625,1.032864,1.051103}, {0.989356,1.007595,1.025834}, {0.969957,0.988196,1.006434}, {0.977153,0.995392,1.013630}, {1.085867,1.104106,1.122344}, {1.085867,1.104106,1.122344}, },
							{ {0.989513,1.007752,1.025991}, {0.953801,0.972039,0.990278}, {0.956428,0.974667,0.992905}, {0.953436,0.971675,0.989914}, {0.971247,0.989486,1.007725}, {0.971247,0.989486,1.007725}, },
							{ {0.922483,0.940722,0.958960}, {0.934760,0.952998,0.971237}, {0.935219,0.953457,0.971696}, {0.934848,0.953086,0.971325}, {0.957257,0.975496,0.993735}, {0.957257,0.975496,0.993735}, },
							{ {0.927638,0.945876,0.964115}, {0.963758,0.981997,1.000235}, {0.961573,0.979812,0.998050}, {0.959289,0.977528,0.995767}, {0.993652,1.011891,1.030129}, {0.993652,1.011891,1.030129}, },
							{ {0.971531,0.989770,1.008009}, {0.956968,0.975207,0.993445}, {0.956394,0.974633,0.992872}, {0.960696,0.978934,0.997173}, {0.992488,1.010727,1.028966}, {0.992488,1.010727,1.028966}, },
							{ {1.015742,1.033981,1.052219}, {0.956636,0.974874,0.993113}, {0.948148,0.966387,0.984625}, {0.961669,0.979907,0.998146}, {0.988925,1.007163,1.025402}, {0.988925,1.007163,1.025402}, },
							{ {0.809247,0.827485,0.845724}, {0.890699,0.908938,0.927176}, {0.939584,0.957823,0.976062}, {0.950315,0.968553,0.986792}, {0.970024,0.988263,1.006502}, {0.970024,0.988263,1.006502}, },
							{ {0.778776,0.797015,0.815254}, {0.845083,0.863322,0.881561}, {0.889563,0.907801,0.926040}, {0.919424,0.937662,0.955901}, {1.003118,1.021357,1.039596}, {1.003118,1.021357,1.039596}, },  };


double eleTrigSF[10][6][3]={ { {1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.}, },
							 { {1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.}, },
							 { {1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.}, },
							 { {1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.}, },
							 { {1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.}, },
							 { {1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.}, },
							 { {1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.}, },
							 { {1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.}, },
							 { {1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.}, },
							 { {1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.}, }, };


double getMuSF(double pt, double eta, int systLevel){

	double abseta = abs(eta);

	//binned in 0.2 in absEta
	int muTrackEtaRegion = int(abseta/0.2);

	int muEtaRegion = -1;
	if (abseta < 0.9) {muEtaRegion = 0;}
	else if (abseta < 1.2) {muEtaRegion = 1;}
	else if (abseta < 2.1) {muEtaRegion = 2;}
	else {muEtaRegion = 3;}

	int muPtRegion_Trigger = -1;
	if (pt < 30){muPtRegion_Trigger = 0;}
	else if (pt < 40){muPtRegion_Trigger = 1;}
	else if (pt < 50){muPtRegion_Trigger = 2;}
	else if (pt < 60){muPtRegion_Trigger = 3;}
	else if (pt < 120){muPtRegion_Trigger = 4;}
	else if (pt < 200){muPtRegion_Trigger = 5;}
	else {muPtRegion_Trigger = 6;}

	int muPtRegion_IDIso = -1;
	if (pt < 25){muPtRegion_IDIso = 0;}
	else if (pt < 30){muPtRegion_IDIso = 1;}
	else if (pt < 40){muPtRegion_IDIso = 2;}
	else if (pt < 50){muPtRegion_IDIso = 3;}
	else if (pt < 60){muPtRegion_IDIso = 4;}
	else {muPtRegion_IDIso = 5;}
        double syst_var[3][3]={ {0.99,0.995,0.995},{1.,1.,1.},{1.01,1.005,1.005}};
	double muEffSF=-1;
	
	muEffSF = muTrackingSF[muTrackEtaRegion][systLevel] *syst_var[systLevel][0]* muIdIsoSF[muPtRegion_IDIso][muEtaRegion][systLevel]* syst_var[systLevel][1]* muTrigSF[muPtRegion_Trigger][muEtaRegion][systLevel]*syst_var[systLevel][2];
	return muEffSF;

}


double getEleSF(double pt, double eta, int systLevel){

	
	int eleRecoEtaRegion = 0;
	int eleIDEtaRegion = 0;

	if (eta > -2.45 ){eleRecoEtaRegion++;}
	if (eta > -2.4	){eleRecoEtaRegion++;}
	if (eta > -2.3	){eleRecoEtaRegion++;}
	if (eta > -2.2	){eleRecoEtaRegion++;}
	if (eta > -2.0	){eleRecoEtaRegion++; eleIDEtaRegion++;}
	if (eta > -1.8	){eleRecoEtaRegion++;}
	if (eta > -1.63	){eleRecoEtaRegion++;}
	if (eta > -1.566){eleRecoEtaRegion++; eleIDEtaRegion++;}
	if (eta > -1.444){eleRecoEtaRegion++; eleIDEtaRegion++;}
	if (eta > -1.2	){eleRecoEtaRegion++;}
	if (eta > -1.0	){eleRecoEtaRegion++;}
	if (eta > -0.8	){eleIDEtaRegion++;}
	if (eta > -0.6	){eleRecoEtaRegion++;}
	if (eta > -0.4	){eleRecoEtaRegion++;}
	if (eta > -0.2	){eleRecoEtaRegion++;}
	if (eta > 0.0	){eleRecoEtaRegion++; eleIDEtaRegion++;}
	if (eta > 0.2	){eleRecoEtaRegion++;}
	if (eta > 0.4	){eleRecoEtaRegion++;}
	if (eta > 0.6	){eleRecoEtaRegion++;}
	if (eta > 0.8	){eleIDEtaRegion++;}
	if (eta > 1.0	){eleRecoEtaRegion++;}
	if (eta > 1.2	){eleRecoEtaRegion++;}
	if (eta > 1.444	){eleRecoEtaRegion++; eleIDEtaRegion++;}
	if (eta > 1.566	){eleRecoEtaRegion++; eleIDEtaRegion++;}
	if (eta > 1.63	){eleRecoEtaRegion++;}
	if (eta > 1.8	){eleRecoEtaRegion++;}
	if (eta > 2.0	){eleRecoEtaRegion++; eleIDEtaRegion++;}
	if (eta > 2.2	){eleRecoEtaRegion++;}
	if (eta > 2.3	){eleRecoEtaRegion++;}
	if (eta > 2.4	){eleRecoEtaRegion++;}
	if (eta > 2.45	){eleRecoEtaRegion++;}

	int eleIDPtRegion = 0;

	if (pt > 20.0  ){eleIDPtRegion++;}
	if (pt > 35.0  ){eleIDPtRegion++;}
	if (pt > 50.0  ){eleIDPtRegion++;}
	if (pt > 90.0  ){eleIDPtRegion++;}
	if (pt > 150.0 ){eleIDPtRegion++;}
	

	int eleTrigEtaRegion = eleIDEtaRegion;
	int eleTrigPtRegion  = eleIDPtRegion;


	double eleEffSF = eleTrigSF[eleTrigEtaRegion][eleTrigPtRegion][systLevel] * eleIDSF[eleIDEtaRegion][eleIDPtRegion][systLevel] * eleRecoSF[eleRecoEtaRegion][systLevel];

	return eleEffSF;


}




double phoIDSF[10][5][3]={ { {0.934969,0.939227,0.943484}, {0.942478,0.955224,0.967970}, {0.947209,0.961306,0.975403}, {0.953944,0.972455,0.990966}, {0.953604,0.972455,0.991306}, },
							{ {0.951375,0.954608,0.957841}, {0.961995,0.971286,0.980577}, {0.957396,0.969363,0.981329}, {0.980502,0.996278,1.012054}, {0.980104,0.996278,1.012452}, },
							{ {0.000000,1.000000,2.000000}, {0.000000,1.000000,2.000000}, {0.000000,1.000000,2.000000}, {0.000000,1.000000,2.000000}, {-0.000006,1.000000,2.000006}, },
							{ {0.964461,0.974462,0.984464}, {0.963158,0.974296,0.985434}, {0.955154,0.969549,0.983944}, {1.012047,1.021628,1.031210}, {1.011406,1.021628,1.031851}, },
							{ {0.942559,0.963173,0.983787}, {0.948238,0.961104,0.973971}, {0.943880,0.952795,0.961710}, {0.980939,0.992258,1.003577}, {0.980391,0.992258,1.004125}, },
							{ {0.945344,0.965957,0.986571}, {0.956830,0.969697,0.982564}, {0.948638,0.957553,0.966468}, {0.988681,1.000000,1.011319}, {0.988133,1.000000,1.011867}, },
							{ {0.968348,0.978349,0.988351}, {0.965521,0.976658,0.987796}, {0.953898,0.968293,0.982688}, {1.009406,1.018987,1.028568}, {1.008765,1.018987,1.029210}, },
							{ {0.000000,1.000000,2.000000}, {0.000000,1.000000,2.000000}, {0.000000,1.000000,2.000000}, {0.000000,1.000000,2.000000}, {-0.000006,1.000000,2.000006}, },
							{ {0.947044,0.950276,0.953509}, {0.961923,0.971214,0.980505}, {0.953593,0.965560,0.977526}, {0.976862,0.992638,1.008414}, {0.976464,0.992638,1.008812}, },
							{ {0.929444,0.933702,0.937959}, {0.947254,0.960000,0.972746}, {0.945951,0.960048,0.974145}, {1.001314,1.019900,1.038487}, {1.000975,1.019900,1.038825}, },
};




double getPhoSF(double pt, double eta, int systLevel){

	
	int phoIDEtaRegion = 0;

	if (eta > -2.0	){phoIDEtaRegion++;}
	if (eta > -1.566){phoIDEtaRegion++;}
	if (eta > -1.444){phoIDEtaRegion++;}
	if (eta > -0.8	){phoIDEtaRegion++;}
	if (eta > 0.0	){phoIDEtaRegion++;}
	if (eta > 0.8	){phoIDEtaRegion++;}
	if (eta > 1.444	){phoIDEtaRegion++;}
	if (eta > 1.566	){phoIDEtaRegion++;}
	if (eta > 2.0	){phoIDEtaRegion++;}


	int phoIDPtRegion = 0;

	if (pt > 35.0  ){phoIDPtRegion++;}
	if (pt > 50.0  ){phoIDPtRegion++;}
	if (pt > 90.0  ){phoIDPtRegion++;}
	if (pt > 150.0 ){phoIDPtRegion++;}
	

	double phoSF = phoIDSF[phoIDEtaRegion][phoIDPtRegion][systLevel];

	return phoSF;


}

