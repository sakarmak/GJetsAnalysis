void AddHisto(){
	TFile *f1 = new TFile("output_GJets_Ht_40_70.root");
	TFile *f2 = new TFile("output_GJets_Ht_70_100.root");
	TFile *f3 = new TFile("output_GJets_Ht_100_200.root");
	TFile *f4 = new TFile("output_GJets_Ht_200_400.root");
	TFile *f5 = new TFile("output_GJets_Ht_400_600.root");
	TFile *f6 = new TFile("output_GJets_Ht_600.root");

	TH1D *h1 = (TH1D*)f1->Get("Photon_pt_nom");
	TH1D *h2 = (TH1D*)f2->Get("Photon_pt_nom");
	TH1D *h3 = (TH1D*)f3->Get("Photon_pt_nom");
	TH1D *h4 = (TH1D*)f4->Get("Photon_pt_nom");
	TH1D *h5 = (TH1D*)f5->Get("Photon_pt_nom");
	TH1D *h6 = (TH1D*)f6->Get("Photon_pt_nom");

	h1->Add(h2);
	h1->Add(h3);
	h1->Add(h4);
	h1->Add(h5);
	h1->Add(h6);

	h1->Draw("hist");
}
