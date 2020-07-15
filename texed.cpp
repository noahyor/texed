#include <iostream>
#include <unistd.h>
using namespace std;

int string[] = {"WELCOME TO: TEXED!"};

main() {
  for (int i = 0; i < 18; ++i) {
     cout << string[i];
       sleep(1.0);
      }
  return 0;
}
