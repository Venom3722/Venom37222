#include <unistd.h> 
int main(void) 
{ 
  while(1) 
    fork(); 
  return 0; 
}
//This code will create an infinite loop that will freeze your device...
