#include "controlplotvars_CHS_2lep.h"

void RunMacro_Zjet()
{
  gROOT->ProcessLine(".L myControlPlots.C+");
//-------------------------------------
//	FOR W+Jet CR 
//-------------------------------------
    gROOT->ProcessLine("myControlPlots(\"DibosonBoostedElMuCuts13TeV_ZjetControlRegion_Tighter_CHS.txt\", \"DibosonBoostedElMuSamples13TeV_2019_03_29_03h24.txt\", controlplotvars_CHS_2lep, \"ZjetControlRegion.root\", 0) ");
    
}
