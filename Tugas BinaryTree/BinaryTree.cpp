#include <iostream>
#include "BinaryTree.h"

using namespace std;

void BinaryTree::insertNode(int insertData){
	root = insertNodeRecursive(root, insertData);
}


Node *BinaryTree::insertNodeRecursive(Node *currentRoot, int insertData){
	if (currentRoot==NULL){
		currentRoot = new Node();
		currentRoot->data = insertData;
		return currentRoot;
	}
	
	if (insertData < currentRoot->data){
		currentRoot->left = insertNodeRecursive(currentRoot->left, insertData);
	}
	else if (insertData > currentRoot->data){
		currentRoot->right = insertNodeRecursive(currentRoot->right, insertData);
	} 
	
	return currentRoot;
}



void BinaryTree::inOrder(){
	inOrderRecursive(root);
}

void BinaryTree::inOrderRecursive(Node *currentRoot){
	if (currentRoot!=NULL){
		inOrderRecursive(currentRoot->left);
		cout << currentRoot->data << ",";
		inOrderRecursive(currentRoot->right);
	}
}


void BinaryTree::preOrder(){
	preOrderRecursive(root);
}

void BinaryTree::preOrderRecursive(Node *currentRoot){
	if (currentRoot!=NULL){
		cout << currentRoot->data << ",";
		preOrderRecursive(currentRoot->left);
		preOrderRecursive(currentRoot->right);
	}
}

void BinaryTree::postOrder(){
	postOrderRecursive(root);
}

void BinaryTree::postOrderRecursive(Node *currentRoot){
	if (currentRoot!=NULL){
	
		postOrderRecursive(currentRoot->left);
		postOrderRecursive(currentRoot->right);
		cout << currentRoot->data << ",";
	}
}

void BinaryTree::searchNode(int data){
	searchNodeRecursive(root, data);
}

Node *BinaryTree::searchNodeRecursive(Node* currentRoot, int data){
	if(currentRoot == NULL){
		cout << "Node tidak ada pada Binary Tree" << endl;
	}
	else if(currentRoot->data == data){
		cout << currentRoot->data << " ada pada Binary Tree" << endl;
	}
	else if(currentRoot->data == data){
		currentRoot->left = searchNodeRecursive(currentRoot->left, data);
	}
	else if(data < currentRoot->data){
		currentRoot->left = searchNodeRecursive(currentRoot->left, data);
	}
	else{
		currentRoot->right = searchNodeRecursive(currentRoot->right, data);
	}
	return currentRoot;
}


Node *BinaryTree::findMin(){
	findMinRecursive(root);
	return root;
}

Node *BinaryTree::findMinRecursive(Node *currentRoot){
	if (currentRoot == NULL){
		cout << "Tree kosong";
		return NULL;
		
	}
	else if (currentRoot->left == NULL){
		cout << currentRoot->data;
	}
	else{
		currentRoot->left = findMinRecursive(currentRoot->left);
	}
	
	return currentRoot;
}

Node *BinaryTree::findMax(){
		findMaxRecursive(root);
		return root;
}

Node *BinaryTree::findMaxRecursive(Node *currentRoot){
	if  (currentRoot == NULL)
		cout << "Tree kosong";
	
	else if (currentRoot->right == NULL){
		cout << currentRoot->data;
	}
	else {
		currentRoot->right = findMaxRecursive(currentRoot->right);
	}
	return currentRoot;
	
}





