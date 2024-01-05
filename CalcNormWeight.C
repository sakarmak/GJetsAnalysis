void CalcNormWeight(){
  TFile *f = new TFile("G-4Jets_HT-600_postEE.root");
  TTree *tr = (TTree*)f->Get("Events");

  Float_t         genWeight;
  TBranch        *b_genWeight;
  tr->SetBranchAddress("genWeight", &genWeight, &b_genWeight);

  float totWeight=0;
  for(int iEvent=0; iEvent<tr->GetEntries(); ++iEvent){
     tr->GetEntry(iEvent);

     totWeight = totWeight+ genWeight;
  }
  cout<<"totalWeight="<<totWeight<<endl;
}
