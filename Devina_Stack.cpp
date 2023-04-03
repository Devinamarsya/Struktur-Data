#include<iostream>
using namespace std;

#define max 10
string data[max];
int top = 0;

bool isEmpty(){
	if(top == 0){
		return true;
	} else {
		return false;
	}
}

bool isFull(){
	if(top >= max){
		return true;
	} else {
		return false;
	}
}

void display(){
	if(!isEmpty()){
		cout << "Data Tersimpan:"<< endl;
		for (int a = 0; a < top; a++){
			cout << a+1 << ". " << data[a] << endl;
		}
	}else {
		cout << "Data Tidak Tersedia" << endl;
	}
	if (isFull()){
		cout << "Stack Penuh" << endl;
	}
	cout << endl;
}

void push(){
	if(!isFull()){
		cout << "Masukan Data:";
		cin >> data[top];
		top++;
	}
}

void pop(){
	if(!isEmpty()){
		top--;
	}
}

int main (){
	int pilih;
	string isi;
	
	stack :
		system ("cls");
		display();
		cout << "Menu\n";
		cout << "1. Push\n";
		cout << "2. Pop\n";
		cout << "Pilih Menu : ";
		cin >> pilih;
		
		if (pilih == 1){
			system ("cls");
			push();
			goto stack;
		} else if (pilih == 2){
			pop();
			goto stack;
		}
		system ("cls");
		cout << "Program Selesai";
	
	
	return 0;
}