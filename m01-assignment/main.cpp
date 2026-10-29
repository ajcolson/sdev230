#include <iostream>

using namespace std;

int main(){
  
  int startNumber = -1;
  
  cout << "Please provide a number: ";
  cin >> startNumber;

  if (startNumber > 0){
    
    int current = startNumber;
    string output = "";
    
    do { // We know we'll be doing this loop at least once

      output += to_string(current % 2);
      current /= 2;

      //This would have also worked and been more fun :) ...
      /*
      output += to_string(current & 1); 
      current >>= 1;
      */

    } while (current > 0);
    
    cout << "The input number '" << startNumber << "' in reverse binary is '" << output << "'." << endl;

  } else cout << "Please provide a number greater than 0 next time." << endl;
   
  return 0;
}