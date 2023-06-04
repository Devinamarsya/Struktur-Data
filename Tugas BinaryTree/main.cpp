#include <iostream>
#include "BinaryTree.h"

using namespace std;


int main(int argc, char** argv) {
	
	BinaryTree bin;
	
	bin.insertNode(10);
	bin.insertNode(5);
	bin.insertNode(3);
	bin.insertNode(2);
	bin.insertNode(6);
	bin.insertNode(15);
	bin.insertNode(20);
	

	cout << endl << "PreOrder: ";
	bin.preOrder();
	
	cout << endl << "InOrder: ";
	bin.inOrder();
	
	cout << endl << "PostOrder: ";
	bin.postOrder();

	cout << "\n" << endl << "Nilai Min: ";
	bin.findMin();
	
	cout << endl << "Nilai Max: ";
	bin.findMax();
	
	cout <<"\n" << endl << "Search Node\n";
	int searchNode;
	cout << "Masukan Node: ";
	cin >> searchNode;
	bin.searchNode(searchNode);
	
 return 0;	
}
