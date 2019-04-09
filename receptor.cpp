#include <iostream>
//#include <iomanip>
#include <fstream>
#include <stdio.h>
#include <errno.h>
#include "Serial.h"
#include "Enquadramento.h"


// 0x7E = ~
// 0x7D = }

 
using namespace std;
 
void dump(char * buffer, int len) {
   int m = 0, line = 0;
 
    while (m < len) {
        printf("%02X: ", line*16);
 
        for (int n=0; n < 16 and m < len; n++, m++) {
            int x = (unsigned char)buffer[m];
            printf("%02X ", x);
        }
        puts("");
        line++;
    }        
}
 
int main(int argc, char * argv[]) {
 // Serial dev("/dev/ttyUSB0", B9600);
  Serial dev("/dev/pts/2", B9600);
  Enquadramento proto(dev, 0, 256);
	while(true) {
		int bytes = proto.recebe(argv[1]);
	}
//   dump(quadro, bytes);
}

