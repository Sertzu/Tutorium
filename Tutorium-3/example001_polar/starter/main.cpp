//
//  main.cpp
//
//  Einfuehrung in die Programmierung II - JKU Linz
//
//

#include <stdio.h>
#include "intfloor.hpp"

int main() {
    //@@ 
    //@@ You can use main() to call your function intfloor() and print the 
    //@@ results.
    //@@
    //@@ Keep in mind your main routine, in particular its output, is ignored
    //@@ in the grading and testing process. It is solely your implementation
    //@@ of the function intfloor() in intfloor.cpp that is graded.

    // note that "printf" actually should not be used in C++.
    // Just convert it into the proper C++ stream handling

  int ierr;
  double result;
  
  result = polar_r(5.8, 0.4, &ierr);
  printf("polar_r(5.8,0.4) = %13.5f, ierr = %d\n", result, ierr);
  
  result = polar_r(5.8, 0.4, &ierr);
  printf("polar_angle(5.8,0.4) = %13.5f, ierr = %d\n", result, ierr);
    
  return 0;
}
