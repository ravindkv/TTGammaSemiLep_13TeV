isMC=999
isData=1

from ROOT import *

samples = {"TTGamma"   : [["TTGamma_SingleLeptFromTbar_AnalysisNtuple.root",
                           "TTGamma_SingleLeptFromT_AnalysisNtuple.root",
                           "TTGamma_Dilepton_AnalysisNtuple.root",
                           "TTGamma_Hadronic_AnalysisNtuple.root",
                           ],
                          kAzure+7,
                          "t#bar{t}+#gamma",
                          isMC
                          ],
           "TTbar"     : [["TTbarPowheg_AnalysisNtuple.root",
                           ],
                          kRed,
                          "t#bar{t}",
                          isMC
                          ],
           "WJets"     : [["W1jets_AnalysisNtuple.root",
                           "W2jets_AnalysisNtuple.root",
                           "W3jets_AnalysisNtuple.root",
                           "W4jets_AnalysisNtuple.root",
                           ],
                          kGreen+3,
                          "W+jets",
                          isMC
                          ],
           "ZJets"     : [["DYjetsM10to50_AnalysisNtuple.root",
                           "DYjetsM50_AnalysisNtuple.root",
                           ],
                          kGreen+2,
                          "Z+jets",
                          isMC
                          ],
           "WGamma"    : [["WGamma_AnalysisNtuple.root",
                           ],
                          kGreen+9,
                          "W+#gamma",
                          isMC
                          ],
           "ZGamma"    : [["ZGamma_AnalysisNtuple.root",
                           ],
                          kGreen+9,
                          "Z+#gamma",
                          isMC
                          ],
           "SingleTop" : [["ST_s-channel_AnalysisNtuple.root",
                           "ST_t-channel_AnalysisNtuple.root",
                           "ST_tW-channel_AnalysisNtuple.root",
                           "ST_tbar-channel_AnalysisNtuple.root",
                           "ST_tbarW-channel_AnalysisNtuple.root",
                           ],
                          kOrange,
                          "Single top",
                          isMC
                          ],
           "TTV"       : [["TTWtoQQ_AnalysisNtuple.root",
                           "TTWtoLNu_AnalysisNtuple.root",
                           "TTZtoLL_AnalysisNtuple.root",
                           ],
                          kOrange+4,
                          "ttV",
                          isMC
                          ],
           "QCDEle"    : [["QCD_20to30EM_AnalysisNtuple.root",
                           "QCD_30to50EM_AnalysisNtuple.root",
                           "QCD_50to80EM_AnalysisNtuple.root",
                           "QCD_80to120EM_AnalysisNtuple.root",
                           "QCD_120to170EM_AnalysisNtuple.root",
                           "QCD_170to300EM_AnalysisNtuple.root",
                           "QCD_300toInfEM_AnalysisNtuple.root",
                           ],
                          kMagenta,
                          "QCD",
                          isMC
                          ],

           "QCDMu"    : [["QCD_Pt20to30_Mu_AnalysisNtuple.root",
                          "QCD_Pt30to50_Mu_AnalysisNtuple.root",
                          "QCD_Pt50to80_Mu_AnalysisNtuple.root",
                          "QCD_Pt80to120_Mu_AnalysisNtuple.root",
                          "QCD_Pt120to170_Mu_AnalysisNtuple.root",
                          "QCD_Pt170to300_Mu_AnalysisNtuple.root",
                          "QCD_Pt300to470_Mu_AnalysisNtuple.root",
                          "QCD_Pt470to600_Mu_AnalysisNtuple.root",
                          "QCD_Pt600to800_Mu_AnalysisNtuple.root",
                          "QCD_Pt800to1000_Mu_AnalysisNtuple.root",
                          "QCD_Pt1000toInf_Mu_AnalysisNtuple.root",
                          ],
                         kMagenta,
                         "QCD",
                         isMC
                         ],
           "DataMu"    : [["Data_SingleMu_b_AnalysisNtuple.root",
                           "Data_SingleMu_c_AnalysisNtuple.root",
                           "Data_SingleMu_d_AnalysisNtuple.root",
                           "Data_SingleMu_e_AnalysisNtuple.root",
                           "Data_SingleMu_f_AnalysisNtuple.root",
                           "Data_SingleMu_g_AnalysisNtuple.root",
                           "Data_SingleMu_h_AnalysisNtuple.root",
                           ],
                          kBlack,
                          "Data",
                          isData
                          ],
           "DataEle"   : [["Data_SingleEle_b_AnalysisNtuple.root",
                           "Data_SingleEle_c_AnalysisNtuple.root",
                           "Data_SingleEle_d_AnalysisNtuple.root",
                           "Data_SingleEle_e_AnalysisNtuple.root",
                           "Data_SingleEle_f_AnalysisNtuple.root",
                           "Data_SingleEle_g_AnalysisNtuple.root",
                           "Data_SingleEle_h_AnalysisNtuple.root",
                           ],
                          kBlack,
                          "Data",
                          isData
                          ],
           }



# List that is the same as the keys of samples, but given in the order we want to draw
sampleList = ["TTGamma",
              "TTbar",
              "SingleTop",
              "WJets",
              "ZJets",
              "WGamma",
              "ZGamma",
              "TTV",
              "QCD",
              "Data",
              ]



