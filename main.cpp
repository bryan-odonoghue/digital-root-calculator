#include <iostream>
/*calculates the digital root of a number, which is the sum of all  
* individual digits 
* For example:
* 1845 = 1 + 8 + 4 + 5 = 18,  Digital root of 18 
* Input:  number from the command line
* Output: Prints digital root on the command line
*/

int rootCalc(int rawNum) {
  // //lets implement this with a loop and then recursion 
  // int iterSplit = rawNum, sumRet = 0;
  // while (iterSplit != 0) {
  //   sumRet = sumRet + (iterSplit % 10);
  //   iterSplit= iterSplit / 10;
  // }
  // return sumRet;
  
  //ok, can we do this with recursion?
  if (rawNum == 0) //base case 
    return rawNum;
  return (rawNum % 10) + rootCalc(rawNum/ 10);
}

int main() {
  int i;
  std::cout << "Please enter the number \n";
  std::cin >> i;
  std::cout << "The digital root of " << i << " is " << rootCalc(i) << "\n";
  return 0;
}
