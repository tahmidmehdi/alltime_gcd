// alltime_gcd.c
// implementation for alltime_gcd.h
// Author: Tahmid Mehdi
// Date: October 19, 2013

#include <assert.h>
#include "alltime_gcd.h"

// See alltime_gcd.h for details
int alltime_gcd(int x) {
   static int running_gcd=0;
   int a=x;
   int b=running_gcd;
   if (x<running_gcd) {
      a=running_gcd;
      b=x;
   }
   int q=1;
   int r=1;
   while (b!=0&&a%b!=0) {
      q=a/b;
      r=a%b;
      a=b;
      b=r;
   }
   if (running_gcd==0) {
      running_gcd=x;
   } else {
      running_gcd=b;
   }
   return running_gcd;
}

int main() {
   
}
