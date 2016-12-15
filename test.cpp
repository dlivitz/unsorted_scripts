#include "SeqLib/BLATWrapper.h"
using namespace SeqLib;
int main () {

BLATWrapper b;
b.LoadIndex("/seq/references/Homo_sapiens_assembly19/v1/Homo_sapiens_assembly19.fasta", "/xchip/gistic/Jeremiah/blat/11.ooc");
return 0;
}
