#include<iostream>
using namespace std;

#define max 7
string data[max];
int top = 0;

bool isFull(){
	if(top >= max){
		return true;
	}else{
		return false;
	}
}

bool isEmpty(){
	if( top == 0){
		return true;
	}else{
		return false;
	}
}

void view(){
	if(!isEmpty()){
		cout << "Data Antrian : " << endl;
		for(int a = top -1; a >= 0; a--){
			cout << a+1 << ". " << data[a] << endl;
		}
	} else {
		cout <<" Antrian Kosong" << endl;
	}
	if(isFull()){
		cout << "Antrian Penuh" << endl;
	}
	cout << endl;
}

void enqueue(){
	if(!isFull()){
		cout << "Masukan Data:";
		cin >> data[top];
		top++;
	}
}

void dequeue(){
	if(!isEmpty()){
		for(int a = 0; a < top; a++){
			data[a] = data[a+1];
		}
		top--;
	}
}

int main(){
	int pilih;
	string isi;
	
	queue:
		system("cls");
		view();
		cout << "Menu\n";
		cout << "1. Enqueue\n";
		cout << "2. Dequeue\n";
		cout << "Pilih Menu : ";
		cin >> pilih;
		
	if (pilih == 1){
		system ("cls");
		enqueue();
		goto queue;
	}else if( pilih == 2){
		system("cls");
		dequeue();
		goto queue;
	}	
	
	
	
	
	
	return 0;
}