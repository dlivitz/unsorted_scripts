#include "SeqLib/BLATWrapper.h"
using namespace SeqLib;
int main () {

BLATWrapper bw;
bw.LoadIndex ("/opt/hg19.2bit","/Users/dlivitz/hg19.11.ooc");
return 0;
}
