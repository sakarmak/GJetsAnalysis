git clone git@github.com:sakarmak/hepmc2root.git
cd hepmc2root
chmod +x setup.sh
source setup.sh

Then go to bin directory and run

python hepmc2root.py <path to hepmc file>

This will convert your pythia8 generated events to a root TTree.
