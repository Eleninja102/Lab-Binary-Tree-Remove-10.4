#include <iostream>
#include <string>
#include "BTree.h"
/*
using namespace std;

bool checkTest(string testName, int whatItShouldBe, int whatItIs);
BTree<int> populateTree();

int main() {
  BTree<int> myTree = populateTree();
  myTree.preOrder();
   cout << endl << endl;
  myTree.postOrder();
   cout << endl << endl;
  myTree.inOrder();
  cout << endl << endl;
  checkTest("Test #1, number of nodes", 35, myTree.nodeCount());
  checkTest("Test #2, number of leaves,", 11, myTree.leavesCount());
 
  return 0;
}

BTree <int> populateTree(){
  BTree<int> myTree;
  int values[] = {37, 32, 73, 95, 42, 12, 0, 49, 98, 7, 27, 17, 47, 87, 77, 97, 67, 85, 15, 5, 35, 55, 65, 75, 25, 45, 3, 93, 83, 53, 63, 23, 13, 43, 33};
  int size = (sizeof(values)/sizeof(*values));

  for(int i = 0; i < size; i++){
      myTree.insert(values[i]);
  }
  return myTree;

}

//Helps with Testing
bool checkTest(string testName, int whatItShouldBe, int whatItIs) {

  if (whatItShouldBe == whatItIs) {
    cout << "Passed " << testName << endl;
    return true;
  }
  else {
    cout << "***Failed test " << testName << " *** " << endl << "   Output was " << whatItIs << endl << "   Output should have been " << whatItShouldBe << endl;
    return false;
  }
}
*/
