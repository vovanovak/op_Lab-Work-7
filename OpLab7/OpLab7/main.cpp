#include <iostream>

using namespace std;

int length = 0; //������� ��������� �� ������ characters � length
char * characters = new char[length]; //�������� �� ����� ��������� �������(������ �� ������� ����� str ��� �������)
int * numbers = new int[length];//�������� �� ����� ��������� ������� � ����� str
char * str = new char[255]; // �������� �� ����� ������� str

//�������� ���������� ��������� ������ �������� elem � ����� arr, �������� length 
template<typename T>
T * add_element(T * arr, T elem, int& length){
	T * res = new T[length + 1]; 
	for (int i = 0; i < length; i++){
		res[i] = arr[i];
	}
	res[length] = elem;
	delete[] arr;
	return res;
}
//ϳ��������� ����� ����� str
void enter_string(char * str){
	cout << "Enter str: ";
	cin.getline(str, 255);
}


void main(){
		
}