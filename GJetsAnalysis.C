#include "headers/TLorentzVector.h"

void GJetsAnalysis(){
  TFile *fin = new TFile("G-4Jets_HT-200to400_postEE.root");
  TTree *tr = (TTree*)fin->Get("Events");

  // Declaration of leaf types
   UInt_t          run;
   UInt_t          luminosityBlock;
   ULong64_t       event;
   UInt_t          bunchCrossing;

   Int_t           nPhoton;
   Char_t          Photon_seediEtaOriX[7];   //[nPhoton]
   UChar_t         Photon_cutBased[7];   //[nPhoton]
   Bool_t          Photon_electronVeto[7];   //[nPhoton]
   Bool_t          Photon_hasConversionTracks[7];   //[nPhoton]
   Bool_t          Photon_isScEtaEB[7];   //[nPhoton]
   Bool_t          Photon_isScEtaEE[7];   //[nPhoton]
   Bool_t          Photon_mvaID_WP80[7];   //[nPhoton]
   Bool_t          Photon_mvaID_WP90[7];   //[nPhoton]
   Bool_t          Photon_pixelSeed[7];   //[nPhoton]
   UChar_t         Photon_seedGain[7];   //[nPhoton]
   Short_t         Photon_electronIdx[7];   //[nPhoton]
   Short_t         Photon_jetIdx[7];   //[nPhoton]
   Int_t           Photon_seediPhiOriY[7];   //[nPhoton]
   Int_t           Photon_vidNestedWPBitmap[7];   //[nPhoton]
   Float_t         Photon_ecalPFClusterIso[7];   //[nPhoton]
   Float_t         Photon_energyErr[7];   //[nPhoton]
   Float_t         Photon_energyRaw[7];   //[nPhoton]
   Float_t         Photon_esEffSigmaRR[7];   //[nPhoton]
   Float_t         Photon_esEnergyOverRawE[7];   //[nPhoton]
   Float_t         Photon_eta[7];   //[nPhoton]
   Float_t         Photon_etaWidth[7];   //[nPhoton]
   Float_t         Photon_haloTaggerMVAVal[7];   //[nPhoton]
   Float_t         Photon_hcalPFClusterIso[7];   //[nPhoton]
   Float_t         Photon_hoe[7];   //[nPhoton]
   Float_t         Photon_hoe_PUcorr[7];   //[nPhoton]
   Float_t         Photon_mvaID[7];   //[nPhoton]
   Float_t         Photon_pfChargedIso[7];   //[nPhoton]
   Float_t         Photon_pfChargedIsoPFPV[7];   //[nPhoton]
   Float_t         Photon_pfChargedIsoWorstVtx[7];   //[nPhoton]
   Float_t         Photon_pfPhoIso03[7];   //[nPhoton]
   Float_t         Photon_pfRelIso03_all_quadratic[7];   //[nPhoton]
   Float_t         Photon_pfRelIso03_chg_quadratic[7];   //[nPhoton]
   Float_t         Photon_phi[7];   //[nPhoton]
   Float_t         Photon_phiWidth[7];   //[nPhoton]
   Float_t         Photon_pt[7];   //[nPhoton]
   Float_t         Photon_r9[7];   //[nPhoton]
   Float_t         Photon_s4[7];   //[nPhoton]
   Float_t         Photon_sieie[7];   //[nPhoton]
   Float_t         Photon_sieip[7];   //[nPhoton]
   Float_t         Photon_sipip[7];   //[nPhoton]
   Float_t         Photon_trkSumPtHollowConeDR03[7];   //[nPhoton]
   Float_t         Photon_trkSumPtSolidConeDR04[7];   //[nPhoton]
   Float_t         Photon_x_calo[7];   //[nPhoton]
   Float_t         Photon_y_calo[7];   //[nPhoton]
   Float_t         Photon_z_calo[7];   //[nPhoton]
   
   Int_t           nGenIsolatedPhoton;
   Float_t         GenIsolatedPhoton_eta[3];   //[nGenIsolatedPhoton]
   Float_t         GenIsolatedPhoton_mass[3];   //[nGenIsolatedPhoton]
   Float_t         GenIsolatedPhoton_phi[3];   //[nGenIsolatedPhoton]
   Float_t         GenIsolatedPhoton_pt[3];   //[nGenIsolatedPhoton]
				
   Int_t           nGenJet;
   Float_t         GenJet_eta[18];   //[nGenJet]
   Float_t         GenJet_mass[18];   //[nGenJet]
   Float_t         GenJet_phi[18];   //[nGenJet]
   Float_t         GenJet_pt[18];   //[nGenJet]

   Int_t           nLHEPart;
   Int_t           LHEPart_pdgId[7];   //[nLHEPart]
   Int_t           LHEPart_status[7];   //[nLHEPart]
   Int_t           LHEPart_spin[7];   //[nLHEPart]
   Float_t         LHEPart_pt[7];   //[nLHEPart]
   Float_t         LHEPart_eta[7];   //[nLHEPart]
   Float_t         LHEPart_phi[7];   //[nLHEPart]
   Float_t         LHEPart_mass[7];   //[nLHEPart]
   Float_t         LHEPart_incomingpz[7];   //[nLHEPart]

   Int_t           nGenPart;
   Short_t         GenPart_genPartIdxMother[83];   //[nGenPart]
   UShort_t        GenPart_statusFlags[83];   //[nGenPart]
   Int_t           GenPart_pdgId[83];   //[nGenPart]
   Int_t           GenPart_status[83];   //[nGenPart]
   Float_t         GenPart_eta[83];   //[nGenPart]
   Float_t         GenPart_mass[83];   //[nGenPart]
   Float_t         GenPart_phi[83];   //[nGenPart]
   Float_t         GenPart_pt[83];   //[nGenPart]


   Bool_t          HLT_Photon20;
   Bool_t          HLT_Photon33;
   Bool_t          HLT_Photon50;
   Bool_t          HLT_Photon75;
   Bool_t          HLT_Photon90;
   Bool_t          HLT_Photon120;
   Bool_t          HLT_Photon150;
   Bool_t          HLT_Photon175;
   Bool_t          HLT_Photon200;


   TBranch        *b_nPhoton;   //!
   TBranch        *b_Photon_seediEtaOriX;   //!
   TBranch        *b_Photon_cutBased;   //!
   TBranch        *b_Photon_electronVeto;   //!
   TBranch        *b_Photon_hasConversionTracks;   //!
   TBranch        *b_Photon_isScEtaEB;   //!
   TBranch        *b_Photon_isScEtaEE;   //!
   TBranch        *b_Photon_mvaID_WP80;   //!
   TBranch        *b_Photon_mvaID_WP90;   //!
   TBranch        *b_Photon_pixelSeed;   //!
   TBranch        *b_Photon_seedGain;   //!
   TBranch        *b_Photon_electronIdx;   //!
   TBranch        *b_Photon_jetIdx;   //!
   TBranch        *b_Photon_seediPhiOriY;   //!
   TBranch        *b_Photon_vidNestedWPBitmap;   //!
   TBranch        *b_Photon_ecalPFClusterIso;   //!
   TBranch        *b_Photon_energyErr;   //!
   TBranch        *b_Photon_energyRaw;   //!
   TBranch        *b_Photon_esEffSigmaRR;   //!
   TBranch        *b_Photon_esEnergyOverRawE;   //!
   TBranch        *b_Photon_eta;   //!
   TBranch        *b_Photon_etaWidth;   //!
   TBranch        *b_Photon_haloTaggerMVAVal;   //!
   TBranch        *b_Photon_hcalPFClusterIso;   //!
   TBranch        *b_Photon_hoe;   //!
   TBranch        *b_Photon_hoe_PUcorr;   //!
   TBranch        *b_Photon_mvaID;   //!
   TBranch        *b_Photon_pfChargedIso;   //!
   TBranch        *b_Photon_pfChargedIsoPFPV;   //!
   TBranch        *b_Photon_pfChargedIsoWorstVtx;   //!
   TBranch        *b_Photon_pfPhoIso03;   //!
   TBranch        *b_Photon_pfRelIso03_all_quadratic;   //!
   TBranch        *b_Photon_pfRelIso03_chg_quadratic;   //!
   TBranch        *b_Photon_phi;   //!
   TBranch        *b_Photon_phiWidth;   //!
   TBranch        *b_Photon_pt;   //!
   TBranch        *b_Photon_r9;   //!
   TBranch        *b_Photon_s4;   //!
   TBranch        *b_Photon_sieie;   //!
   TBranch        *b_Photon_sieip;   //!
   TBranch        *b_Photon_sipip;   //!
   TBranch        *b_Photon_trkSumPtHollowConeDR03;   //!
   TBranch        *b_Photon_trkSumPtSolidConeDR04;   //!
   TBranch        *b_Photon_x_calo;   //!
   TBranch        *b_Photon_y_calo;   //!
   TBranch        *b_Photon_z_calo;   //!
 
   TBranch        *b_nGenIsolatedPhoton;   //!
   TBranch        *b_GenIsolatedPhoton_eta;   //!
   TBranch        *b_GenIsolatedPhoton_mass;   //!
   TBranch        *b_GenIsolatedPhoton_phi;   //!
   TBranch        *b_GenIsolatedPhoton_pt;   //!

   TBranch        *b_nGenJet;   //!
   TBranch        *b_GenJet_eta;   //!
   TBranch        *b_GenJet_mass;   //!
   TBranch        *b_GenJet_phi;   //!
   TBranch        *b_GenJet_pt;   //!

   TBranch        *b_nLHEPart;   //!
   TBranch        *b_LHEPart_pdgId;   //!
   TBranch        *b_LHEPart_status;   //!
   TBranch        *b_LHEPart_spin;   //!
   TBranch        *b_LHEPart_pt;   //!
   TBranch        *b_LHEPart_eta;   //!
   TBranch        *b_LHEPart_phi;   //!
   TBranch        *b_LHEPart_mass;   //!
   TBranch        *b_LHEPart_incomingpz;   //!

   TBranch        *b_nGenPart;   //!
   TBranch        *b_GenPart_genPartIdxMother;   //!
   TBranch        *b_GenPart_statusFlags;   //!
   TBranch        *b_GenPart_pdgId;   //!
   TBranch        *b_GenPart_status;   //!
   TBranch        *b_GenPart_eta;   //!
   TBranch        *b_GenPart_mass;   //!
   TBranch        *b_GenPart_phi;   //!
   TBranch        *b_GenPart_pt;   //!

   TBranch        *b_HLT_Photon20;   //!
   TBranch        *b_HLT_Photon33;   //!
   TBranch        *b_HLT_Photon50;   //!
   TBranch        *b_HLT_Photon75;   //!
   TBranch        *b_HLT_Photon90;   //!
   TBranch        *b_HLT_Photon120;   //!
   TBranch        *b_HLT_Photon150;   //!
   TBranch        *b_HLT_Photon175;   //!
   TBranch        *b_HLT_Photon200;   //!

   tr->SetBranchAddress("nPhoton", &nPhoton, &b_nPhoton);
   tr->SetBranchAddress("Photon_seediEtaOriX", Photon_seediEtaOriX, &b_Photon_seediEtaOriX);
   tr->SetBranchAddress("Photon_cutBased", Photon_cutBased, &b_Photon_cutBased);
   tr->SetBranchAddress("Photon_electronVeto", Photon_electronVeto, &b_Photon_electronVeto);
   tr->SetBranchAddress("Photon_hasConversionTracks", Photon_hasConversionTracks, &b_Photon_hasConversionTracks);
   tr->SetBranchAddress("Photon_isScEtaEB", Photon_isScEtaEB, &b_Photon_isScEtaEB);
   tr->SetBranchAddress("Photon_isScEtaEE", Photon_isScEtaEE, &b_Photon_isScEtaEE);
   tr->SetBranchAddress("Photon_mvaID_WP80", Photon_mvaID_WP80, &b_Photon_mvaID_WP80);
   tr->SetBranchAddress("Photon_mvaID_WP90", Photon_mvaID_WP90, &b_Photon_mvaID_WP90);
   tr->SetBranchAddress("Photon_pixelSeed", Photon_pixelSeed, &b_Photon_pixelSeed);
   tr->SetBranchAddress("Photon_seedGain", Photon_seedGain, &b_Photon_seedGain);
   tr->SetBranchAddress("Photon_electronIdx", Photon_electronIdx, &b_Photon_electronIdx);
   tr->SetBranchAddress("Photon_jetIdx", Photon_jetIdx, &b_Photon_jetIdx);
   tr->SetBranchAddress("Photon_seediPhiOriY", Photon_seediPhiOriY, &b_Photon_seediPhiOriY);
   tr->SetBranchAddress("Photon_vidNestedWPBitmap", Photon_vidNestedWPBitmap, &b_Photon_vidNestedWPBitmap);
   tr->SetBranchAddress("Photon_ecalPFClusterIso", Photon_ecalPFClusterIso, &b_Photon_ecalPFClusterIso);
   tr->SetBranchAddress("Photon_energyErr", Photon_energyErr, &b_Photon_energyErr);
   tr->SetBranchAddress("Photon_energyRaw", Photon_energyRaw, &b_Photon_energyRaw);
   tr->SetBranchAddress("Photon_esEffSigmaRR", Photon_esEffSigmaRR, &b_Photon_esEffSigmaRR);
   tr->SetBranchAddress("Photon_esEnergyOverRawE", Photon_esEnergyOverRawE, &b_Photon_esEnergyOverRawE);
   tr->SetBranchAddress("Photon_eta", Photon_eta, &b_Photon_eta);
   tr->SetBranchAddress("Photon_etaWidth", Photon_etaWidth, &b_Photon_etaWidth);
   tr->SetBranchAddress("Photon_haloTaggerMVAVal", Photon_haloTaggerMVAVal, &b_Photon_haloTaggerMVAVal);
   tr->SetBranchAddress("Photon_hcalPFClusterIso", Photon_hcalPFClusterIso, &b_Photon_hcalPFClusterIso);
   tr->SetBranchAddress("Photon_hoe", Photon_hoe, &b_Photon_hoe);
   tr->SetBranchAddress("Photon_hoe_PUcorr", Photon_hoe_PUcorr, &b_Photon_hoe_PUcorr);
   tr->SetBranchAddress("Photon_mvaID", Photon_mvaID, &b_Photon_mvaID);
   tr->SetBranchAddress("Photon_pfChargedIso", Photon_pfChargedIso, &b_Photon_pfChargedIso);
   tr->SetBranchAddress("Photon_pfChargedIsoPFPV", Photon_pfChargedIsoPFPV, &b_Photon_pfChargedIsoPFPV);
   tr->SetBranchAddress("Photon_pfChargedIsoWorstVtx", Photon_pfChargedIsoWorstVtx, &b_Photon_pfChargedIsoWorstVtx);
   tr->SetBranchAddress("Photon_pfPhoIso03", Photon_pfPhoIso03, &b_Photon_pfPhoIso03);
   tr->SetBranchAddress("Photon_pfRelIso03_all_quadratic", Photon_pfRelIso03_all_quadratic, &b_Photon_pfRelIso03_all_quadratic);
   tr->SetBranchAddress("Photon_pfRelIso03_chg_quadratic", Photon_pfRelIso03_chg_quadratic, &b_Photon_pfRelIso03_chg_quadratic);
   tr->SetBranchAddress("Photon_phi", Photon_phi, &b_Photon_phi);
   tr->SetBranchAddress("Photon_phiWidth", Photon_phiWidth, &b_Photon_phiWidth);
   tr->SetBranchAddress("Photon_pt", Photon_pt, &b_Photon_pt);
   tr->SetBranchAddress("Photon_r9", Photon_r9, &b_Photon_r9);
   tr->SetBranchAddress("Photon_s4", Photon_s4, &b_Photon_s4);
   tr->SetBranchAddress("Photon_sieie", Photon_sieie, &b_Photon_sieie);
   tr->SetBranchAddress("Photon_sieip", Photon_sieip, &b_Photon_sieip);
   tr->SetBranchAddress("Photon_sipip", Photon_sipip, &b_Photon_sipip);
   tr->SetBranchAddress("Photon_trkSumPtHollowConeDR03", Photon_trkSumPtHollowConeDR03, &b_Photon_trkSumPtHollowConeDR03);
   tr->SetBranchAddress("Photon_trkSumPtSolidConeDR04", Photon_trkSumPtSolidConeDR04, &b_Photon_trkSumPtSolidConeDR04);
   tr->SetBranchAddress("Photon_x_calo", Photon_x_calo, &b_Photon_x_calo);
   tr->SetBranchAddress("Photon_y_calo", Photon_y_calo, &b_Photon_y_calo);
   tr->SetBranchAddress("Photon_z_calo", Photon_z_calo, &b_Photon_z_calo);

   tr->SetBranchAddress("nGenIsolatedPhoton", &nGenIsolatedPhoton, &b_nGenIsolatedPhoton);
   tr->SetBranchAddress("GenIsolatedPhoton_eta", GenIsolatedPhoton_eta, &b_GenIsolatedPhoton_eta);
   tr->SetBranchAddress("GenIsolatedPhoton_mass", GenIsolatedPhoton_mass, &b_GenIsolatedPhoton_mass);
   tr->SetBranchAddress("GenIsolatedPhoton_phi", GenIsolatedPhoton_phi, &b_GenIsolatedPhoton_phi);
   tr->SetBranchAddress("GenIsolatedPhoton_pt", GenIsolatedPhoton_pt, &b_GenIsolatedPhoton_pt);

   tr->SetBranchAddress("nGenJet", &nGenJet, &b_nGenJet);
   tr->SetBranchAddress("GenJet_eta", GenJet_eta, &b_GenJet_eta);
   tr->SetBranchAddress("GenJet_mass", GenJet_mass, &b_GenJet_mass);
   tr->SetBranchAddress("GenJet_phi", GenJet_phi, &b_GenJet_phi);
   tr->SetBranchAddress("GenJet_pt", GenJet_pt, &b_GenJet_pt);

   tr->SetBranchAddress("nLHEPart", &nLHEPart, &b_nLHEPart);
   tr->SetBranchAddress("LHEPart_pdgId", LHEPart_pdgId, &b_LHEPart_pdgId);
   tr->SetBranchAddress("LHEPart_status", LHEPart_status, &b_LHEPart_status);
   tr->SetBranchAddress("LHEPart_spin", LHEPart_spin, &b_LHEPart_spin);
   tr->SetBranchAddress("LHEPart_pt", LHEPart_pt, &b_LHEPart_pt);
   tr->SetBranchAddress("LHEPart_eta", LHEPart_eta, &b_LHEPart_eta);
   tr->SetBranchAddress("LHEPart_phi", LHEPart_phi, &b_LHEPart_phi);
   tr->SetBranchAddress("LHEPart_mass", LHEPart_mass, &b_LHEPart_mass);
   tr->SetBranchAddress("LHEPart_incomingpz", LHEPart_incomingpz, &b_LHEPart_incomingpz);

   tr->SetBranchAddress("nGenPart", &nGenPart, &b_nGenPart);
   tr->SetBranchAddress("GenPart_genPartIdxMother", GenPart_genPartIdxMother, &b_GenPart_genPartIdxMother);
   tr->SetBranchAddress("GenPart_statusFlags", GenPart_statusFlags, &b_GenPart_statusFlags);
   tr->SetBranchAddress("GenPart_pdgId", GenPart_pdgId, &b_GenPart_pdgId);
   tr->SetBranchAddress("GenPart_status", GenPart_status, &b_GenPart_status);
   tr->SetBranchAddress("GenPart_eta", GenPart_eta, &b_GenPart_eta);
   tr->SetBranchAddress("GenPart_mass", GenPart_mass, &b_GenPart_mass);
   tr->SetBranchAddress("GenPart_phi", GenPart_phi, &b_GenPart_phi);
   tr->SetBranchAddress("GenPart_pt", GenPart_pt, &b_GenPart_pt);

   tr->SetBranchAddress("HLT_Photon20", &HLT_Photon20, &b_HLT_Photon20);
   tr->SetBranchAddress("HLT_Photon33", &HLT_Photon33, &b_HLT_Photon33);
   tr->SetBranchAddress("HLT_Photon50", &HLT_Photon50, &b_HLT_Photon50);
   tr->SetBranchAddress("HLT_Photon75", &HLT_Photon75, &b_HLT_Photon75);
   tr->SetBranchAddress("HLT_Photon90", &HLT_Photon90, &b_HLT_Photon90);
   tr->SetBranchAddress("HLT_Photon120", &HLT_Photon120, &b_HLT_Photon120);
   tr->SetBranchAddress("HLT_Photon150", &HLT_Photon150, &b_HLT_Photon150);
   tr->SetBranchAddress("HLT_Photon175", &HLT_Photon175, &b_HLT_Photon175);
   tr->SetBranchAddress("HLT_Photon200", &HLT_Photon200, &b_HLT_Photon200);

   //Define the histograms here
   TH1D *h_pho_pt = new TH1D("Photon_pt","Photon_pt",100,0,500);
   TH1D *h_pho_eta = new TH1D("Photon_eta","Photon_eta",46,-2.3,2.3);
   TH1D *h_pho_phi = new TH1D("Photon_phi","Photon_phi",64,-3.2,3.2);
   TH1D *h_pho_mvaId = new TH1D("Photon_mvaId","Photon_mvaId",100,-1,1);
   TH1D *h_pho_hoe = new TH1D("Photon_hoe","Photon_hoe",50,0,1);
   TH1D *h_pho_sieie = new TH1D("Photon_sieie","Photon_sieie",100,0,0.1);
   TH1D *h_pho_sieip = new TH1D("Photon_sieip","Photon_sieip",100,0,0.1);
   TH1D *h_pho_sipip = new TH1D("Photon_sipip","Photon_sipip",100,0,0.1);
   TH1D *h_pho_r9 = new TH1D("Photon_r9","Photon_r9",100,0,10);
   TH1D *h_pho_dr = new TH1D("dr","dr",100,0,5);
   TH1D *h_genPho_pt = new TH1D("GenPhoton_pt","GenPhoton_pt",500,0,500);
   TH1D *h_genPartId = new TH1D("genPartId","genPartId",50,0,50);
   TH1D *h_motherId = new TH1D("motherId","motherId",50,-10,40);
   TH1D *h_statusId = new TH1D("statusId","statusId",100,0,100);

   TH2D *h_pt_eta = new TH2D("pt_vs_eta","pt_vs_eta",50,0,100,50,-2.5,2.5);
   TH2D *h_pt_phi = new TH2D("pt_vs_phi","pt_vs_phi",50,0,100,50,-3.2,3.2);
   TH2D *h_eta_phi = new TH2D("eta_vs_phi","eta_vs_phi",100,-5,5,100,-4,4);
   TH2D *h_genPhoPt_nGenJets = new TH2D("genPhoPt_nGenJets","genPhoPt_nGenJets",50,0,100,8,0,8);
   TH2D *h_genPhoPt_genJetPt = new TH2D("genPhoPt_genJetPt","genPhoPt_genJetPt",50,0,100,50,0,100);

   int nEvt = tr->GetEntries();
   for(int iEvent=0; iEvent< 200000; ++iEvent){
      tr->GetEntry(iEvent);

      //if(HLT_Photon20==0 && HLT_Photon33==0 && HLT_Photon50==0 && HLT_Photon75==0 && HLT_Photon90==0 && HLT_Photon120==0 && HLT_Photon150==0 && HLT_Photon175==0 && HLT_Photon200==0) continue;
      if(nGenIsolatedPhoton<=0) continue;
      vector<TLorentzVector> selPhoton;
      int ngoodPhoton=0;
      for(int iPhoton=0; iPhoton<nPhoton; ++iPhoton){
	 //if(fabs(Photon_eta[iPhoton])>1.3) continue;
	 if(Photon_pixelSeed[iPhoton]==1) continue;
	 if(Photon_mvaID_WP80[iPhoton]==0) continue;
	 if(Photon_eta[iPhoton]>1.20 && Photon_phi[iPhoton]>1.4) continue;
	 //if(Photon_eta[iPhoton]>1.5 && Photon_seediPhiOriY[iPhoton]>72 && Photon_seediEtaOriX[iPhoton]<45 )continue;


         TLorentzVector recoPhoton;
	 recoPhoton.SetPtEtaPhiM(Photon_pt[iPhoton], Photon_eta[iPhoton], Photon_phi[iPhoton],0);

	 for(int iGenPart=0; iGenPart<nGenPart; ++iGenPart){
	    //if(GenPart_pdgId[iGenPart]!=22) continue;
	    //if(GenPart_genPartIdxMother[iGenPart]!=2) continue;
	    //if(GenPart_status[iGenPart]!=1) continue;
	    TLorentzVector GenPart;
	    GenPart.SetPtEtaPhiM(GenPart_pt[iGenPart], GenPart_eta[iGenPart], GenPart_phi[iGenPart], GenPart_mass[iGenPart]);
	    if(GenPart.DeltaR(recoPhoton)>0.1) continue;
	    //cout<<GenPart_genPartIdxMother[iGenPart]<<"		"<<GenPart_pdgId[iGenPart]<<endl;
	    selPhoton.push_back(recoPhoton);
	    if(Photon_pt[iPhoton]>100)h_pho_pt->Fill(Photon_pt[iPhoton]);
	    h_pho_eta->Fill(Photon_eta[iPhoton]);
	    h_pho_phi->Fill(Photon_phi[iPhoton]);
	    h_pho_mvaId->Fill(Photon_mvaID[iPhoton]);
	    h_pho_hoe->Fill(Photon_hoe[iPhoton]);
	    h_pho_sieie->Fill(Photon_sieie[iPhoton]);
	    h_pho_sieip->Fill(Photon_sieip[iPhoton]);
	    h_pho_sipip->Fill(Photon_sipip[iPhoton]);
	    h_pho_r9->Fill(Photon_r9[iPhoton]);
	    h_pho_dr->Fill(GenPart.DeltaR(recoPhoton));
	    h_pt_eta->Fill(recoPhoton.Pt(),recoPhoton.Eta());
	    h_pt_phi->Fill(recoPhoton.Pt(),recoPhoton.Phi());
	    h_eta_phi->Fill(recoPhoton.Eta(),recoPhoton.Phi());
	    h_genPartId->Fill(GenPart_pdgId[iGenPart]);
	    h_motherId->Fill(GenPart_genPartIdxMother[iGenPart]);
	    h_statusId->Fill(GenPart_status[iGenPart]);

	    //cout<<"Reco Photon: "<<recoPhoton.Eta()<<"	"<<Photon_eta[iPhoton]<<"	"<<recoPhoton.Phi()<<"	"<<Photon_phi[iPhoton]<<endl;
	    //cout<<"Gen Photon: "<<genPhoton.Eta()<<"  "<<GenIsolatedPhoton_eta[iGenPhoton]<<"	"<<genPhoton.Phi()<<"	"<<GenIsolatedPhoton_phi[iGenPhoton]<<endl;
	 }
	 ngoodPhoton++;
      }
    
    //for(int iGenPhoton=0; iGenPhoton<nGenIsolatedPhoton; ++iGenPhoton){
    //	h_genPho_pt->Fill(GenIsolatedPhoton_pt[iGenPhoton]);
    //}
    //if(ngoodPhoton>1) continue;
    //if(ngoodPhoton<1) continue;
    //if(nLHEPart>0 && LHEPart_status[0]==1 && LHEPart_pdgId[0]==22){h_genPho_pt->Fill(LHEPart_pt[0]);}      
    //for(int iGenPart=0; iGenPart<nGenPart; ++iGenPart){
       //if(GenPart_pdgId[iGenPart]==22 && GenPart_genPartIdxMother[iGenPart]==0){h_genPho_pt->Fill(GenPart_pt[iGenPart]);}
       /*if(GenPart_pdgId[iGenPart]==22){
	       h_genPho_pt->Fill(GenPart_pt[iGenPart]);
	       if(GenPart_pt[iGenPart]>37){
	       	h_genPartId->Fill(GenPart_pdgId[iGenPart]);
	       	h_motherId->Fill(GenPart_genPartIdxMother[iGenPart]);
	       	h_statusId->Fill(GenPart_status[iGenPart]);
	       }
       }
       //if(GenPart_genPartIdxMother[iGenPart]==22){h_genPho_pt->Fill(GenPart_pt[iGenPart]);}
    }*/

      for(int iGenPhoton=0; iGenPhoton<nGenIsolatedPhoton; ++iGenPhoton){
         h_genPhoPt_nGenJets->Fill(GenIsolatedPhoton_pt[iGenPhoton],nGenJet);
	 //for(int iGenJet=0; iGenJet<nGenJet; ++iGenJet){
	   // h_genPhoPt_genJetPt->Fill(GenIsolatedPhoton_pt[iGenPhoton],GenJet_pt[iGenJet]);
	 //}
      }
      if(nGenIsolatedPhoton>0 && nGenJet>0){
        h_genPhoPt_genJetPt->Fill(GenIsolatedPhoton_pt[0],GenJet_pt[0]);
      }
   }

   //fin->Delete();
   TFile *fout = new TFile("test_GJets_Ht_200to400.root","RECREATE");
   fout->cd();
   h_pho_pt->Write();
   h_pho_eta->Write();
   h_pho_phi->Write();
   h_pho_mvaId->Write();
   h_pho_hoe->Write();
   h_pho_sieie->Write();
   h_pho_sieip->Write();
   h_pho_sipip->Write();
   h_pho_r9->Write();
   h_pho_dr->Write();
   h_genPho_pt->Write();
   h_genPartId->Write();
   h_motherId->Write();
   h_statusId->Write();
   h_pt_eta->Write();
   h_pt_phi->Write();
   h_eta_phi->Write();
   h_genPhoPt_nGenJets->Write();
   h_genPhoPt_genJetPt->Write();
}
