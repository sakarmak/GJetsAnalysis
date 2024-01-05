#include "TFile.h"
#include "TTree.h"
#include "../headers/TLorentzVector.h"
void NtupleMaker(){
   TFile *fin = new TFile("GJet_PT-15to6000_TuneCP5-Flat_13p6TeV_pythia8.root");
   TTree *tr = (TTree*)fin->Get("Events");

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

   Int_t           nGenPart;
   Short_t         GenPart_genPartIdxMother[83];   //[nGenPart]
   UShort_t        GenPart_statusFlags[83];   //[nGenPart]
   Int_t           GenPart_pdgId[83];   //[nGenPart]
   Int_t           GenPart_status[83];   //[nGenPart]
   Float_t         GenPart_eta[83];   //[nGenPart]
   Float_t         GenPart_mass[83];   //[nGenPart]
   Float_t         GenPart_phi[83];   //[nGenPart]
   Float_t         GenPart_pt[83];   //[nGenPart]


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

   TBranch        *b_nGenPart;   //!
   TBranch        *b_GenPart_genPartIdxMother;   //!
   TBranch        *b_GenPart_statusFlags;   //!
   TBranch        *b_GenPart_pdgId;   //!
   TBranch        *b_GenPart_status;   //!
   TBranch        *b_GenPart_eta;   //!
   TBranch        *b_GenPart_mass;   //!
   TBranch        *b_GenPart_phi;   //!
   TBranch        *b_GenPart_pt;   //!

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

   tr->SetBranchAddress("nGenPart", &nGenPart, &b_nGenPart);
   tr->SetBranchAddress("GenPart_genPartIdxMother", GenPart_genPartIdxMother, &b_GenPart_genPartIdxMother);
   tr->SetBranchAddress("GenPart_statusFlags", GenPart_statusFlags, &b_GenPart_statusFlags);
   tr->SetBranchAddress("GenPart_pdgId", GenPart_pdgId, &b_GenPart_pdgId);
   tr->SetBranchAddress("GenPart_status", GenPart_status, &b_GenPart_status);
   tr->SetBranchAddress("GenPart_eta", GenPart_eta, &b_GenPart_eta);
   tr->SetBranchAddress("GenPart_mass", GenPart_mass, &b_GenPart_mass);
   tr->SetBranchAddress("GenPart_phi", GenPart_phi, &b_GenPart_phi);
   tr->SetBranchAddress("GenPart_pt", GenPart_pt, &b_GenPart_pt);

   /*const Int_t kMaxTrack = 500;
   Int_t ntrack;
   Float_t px[kMaxTrack];

   TFile f("tree3.root","recreate");
   TTree *t3 = new TTree("t3","Reconst ntuple");
   t3->Branch("ntrack",&ntrack,"ntrack/I");
   t3->Branch("px",px,"px[ntrack]/F");*/

   /*const Int_t nIndex = 7;
   Int_t nphoton;
   Float_t px[nIndex];

   TFile fout("GJet_PT-15to6000_TuneCP5-Flat_13p6TeV_out.root","recreate");
   TTree *t3 = new TTree("t3","tree");
   t3->Branch("nphoton", &nphoton, "nphoton/I");
   t3->Branch("px",px,"px[nphoton]/F");*/

   //Save output in TTree
   const Int_t arrSize = 7;
   Float_t photon_ecalPFClusterIso[arrSize], photon_energyErr[arrSize], photon_esEffSigmaRR[arrSize], photon_energyRaw[arrSize], photon_esEnergyOverRawE[arrSize];
   Float_t photon_eta[arrSize], photon_etaWidth[arrSize], photon_hcalPFClusterIso[arrSize], photon_hoe[arrSize], photon_hoe_PUcorr[arrSize], photon_pfChargedIso[arrSize];
   Float_t photon_pfChargedIsoPFPV[arrSize], photon_pfChargedIsoWorstVtx[arrSize], photon_pfPhoIso03[arrSize], photon_phi[arrSize], photon_phiWidth[arrSize], photon_pt[arrSize];
   Float_t photon_r9[arrSize], photon_s4[arrSize], photon_sieie[arrSize], photon_sieip[arrSize], photon_sipip[arrSize], photon_trkSumPtHollowConeDR03[arrSize], photon_trkSumPtSolidConeDR04[arrSize];
   Int_t isPhoton[arrSize];
   Int_t Nphoton=0;

   TFile *fout = new TFile("out_GJet_PT-15to6000_TuneCP5-Flat_13p6TeV.root","RECREATE");
   TTree *tree = new TTree("tree","tree");
   tree->Branch("N_photon", &Nphoton, "Nphoton/I");
   tree->Branch("photon_ecalPFClusterIso", photon_ecalPFClusterIso, "photon_ecalPFClusterIso[Nphoton]/F");
   tree->Branch("photon_energyErr", photon_energyErr, "photon_energyErr[Nphoton]/F");
   tree->Branch("photon_esEffSigmaRR", photon_esEffSigmaRR, "photon_esEffSigmaRR[Nphoton]/F");
   tree->Branch("photon_energyRaw", photon_energyRaw, "photon_energyRaw[Nphoton]/F");
   tree->Branch("photon_esEnergyOverRawE", photon_esEnergyOverRawE, "photon_esEnergyOverRawE[Nphoton]/F");
   tree->Branch("photon_eta", photon_eta, "photon_eta[Nphoton]/F");
   tree->Branch("photon_etaWidth", photon_etaWidth, "photon_etaWidth[Nphoton]/F");
   tree->Branch("photon_hcalPFClusterIso", photon_hcalPFClusterIso, "photon_hcalPFClusterIso[Nphoton]/F");
   tree->Branch("photon_hoe", photon_hoe, "photon_hoe[Nphoton]/F");
   tree->Branch("photon_hoe_PUcorr", photon_hoe_PUcorr, "photon_hoe_PUcorr[Nphoton]/F");
   tree->Branch("photon_pfChargedIso", photon_pfChargedIso, "photon_pfChargedIso[Nphoton]/F");
   tree->Branch("photon_pfChargedIsoPFPV", photon_pfChargedIsoPFPV, "photon_pfChargedIsoPFPV[Nphoton]/F");
   tree->Branch("photon_pfChargedIsoWorstVtx", photon_pfChargedIsoWorstVtx, "photon_pfChargedIsoWorstVtx[Nphoton]/F");
   tree->Branch("photon_pfPhoIso03", photon_pfPhoIso03, "photon_pfPhoIso03[Nphoton]/F");
   tree->Branch("photon_phi", photon_phi, "photon_phi[Nphoton]/F");
   tree->Branch("photon_phiWidth", photon_phiWidth, "photon_phiWidth[Nphoton]/F");
   tree->Branch("photon_pt", photon_pt, "photon_pt[Nphoton]/F");
   tree->Branch("photon_r9", photon_r9, "photon_r9[Nphoton]/F");
   tree->Branch("photon_s4", photon_s4, "photon_s4[Nphoton]/F");
   tree->Branch("photon_sieie", photon_sieie, "photon_sieie[Nphoton]/F");
   tree->Branch("photon_sieip", photon_sieip, "photon_sieip[Nphoton]/F");
   tree->Branch("photon_sipip", photon_sipip, "photon_sipip[Nphoton]/F");
   tree->Branch("photon_trkSumPtHollowConeDR03", photon_trkSumPtHollowConeDR03, "photon_trkSumPtHollowConeDR03[Nphoton]/F");
   tree->Branch("photon_trkSumPtSolidConeDR04", photon_trkSumPtSolidConeDR04, "photon_trkSumPtSolidConeDR04[Nphoton]/F");
   tree->Branch("isPhoton", isPhoton, "isPhoton[Nphoton]/I");

   for(int iEvent=0; iEvent < tr->GetEntries(); ++iEvent){
      tr->GetEntry(iEvent);
      int count = 0;
      for(int iPhoton=0; iPhoton<nPhoton; ++iPhoton){
         if(Photon_pt[iPhoton]<15 || fabs(Photon_eta[iPhoton])>2.5 || (fabs(Photon_eta[iPhoton])>1.44 && fabs(Photon_eta[iPhoton])<1.566)) continue;
	 isPhoton[iPhoton] = 0;
	 TLorentzVector recoPhoton;
	 recoPhoton.SetPtEtaPhiM(Photon_pt[iPhoton], Photon_eta[iPhoton], Photon_phi[iPhoton],0);
	 for(int iGenPart=0; iGenPart<nGenPart; ++iGenPart){
	    TLorentzVector genPhoton;
	    genPhoton.SetPtEtaPhiM(GenPart_pt[iGenPart], GenPart_eta[iGenPart], GenPart_phi[iGenPart],GenPart_mass[iGenPart]);
	    if(GenPart_pdgId[iGenPart]==22 && (GenPart_status[iGenPart]==0 || GenPart_status[iGenPart]==23) && recoPhoton.DeltaR(genPhoton)<0.10 && fabs(1-1.0*genPhoton.Pt()/recoPhoton.Pt())<0.20){
	      isPhoton[iPhoton] = 1;
	    }
	 }

	 photon_ecalPFClusterIso[iPhoton] = Photon_ecalPFClusterIso[iPhoton];
	 photon_energyErr[iPhoton] = Photon_energyErr[iPhoton];
	 photon_esEffSigmaRR[iPhoton] = Photon_esEffSigmaRR[iPhoton];
	 photon_energyRaw[iPhoton] = Photon_energyRaw[iPhoton];
	 photon_esEnergyOverRawE[iPhoton] = Photon_esEnergyOverRawE[iPhoton];
	 photon_eta[iPhoton] = Photon_eta[iPhoton];
	 photon_etaWidth[iPhoton] = Photon_etaWidth[iPhoton];
	 photon_hcalPFClusterIso[iPhoton] = Photon_hcalPFClusterIso[iPhoton];
	 photon_hoe[iPhoton] = Photon_hoe[iPhoton];
	 photon_hoe_PUcorr[iPhoton] = Photon_hoe_PUcorr[iPhoton];
	 photon_pfChargedIso[iPhoton] = Photon_pfChargedIso[iPhoton];
	 photon_pfChargedIsoPFPV[iPhoton] = Photon_pfChargedIsoPFPV[iPhoton];
	 photon_pfChargedIsoWorstVtx[iPhoton] = Photon_pfChargedIsoWorstVtx[iPhoton];
	 photon_pfPhoIso03[iPhoton] = Photon_pfPhoIso03[iPhoton];
	 photon_phi[iPhoton] = Photon_phi[iPhoton];
	 photon_phiWidth[iPhoton] = Photon_phiWidth[iPhoton];
	 photon_pt[iPhoton] = Photon_pt[iPhoton];
	 photon_r9[iPhoton] = Photon_r9[iPhoton];
	 photon_s4[iPhoton] = Photon_s4[iPhoton];
	 photon_sieie[iPhoton] = Photon_sieie[iPhoton];
	 photon_sieip[iPhoton] = Photon_sieip[iPhoton];
	 photon_sipip[iPhoton] = Photon_sipip[iPhoton];
	 photon_trkSumPtHollowConeDR03[iPhoton] = Photon_trkSumPtHollowConeDR03[iPhoton];
	 photon_trkSumPtSolidConeDR04[iPhoton] = Photon_trkSumPtSolidConeDR04[iPhoton];
	 
	 count++;
      }
      Nphoton = count;
      tree->Fill();
   }
   fout->cd();
   tree->Write();
   fout->Close();
}
