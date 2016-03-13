#include <iostream>

using namespace std;

int length = 0; //Довжина покажчиків на масиви characters і length
char * characters = new char[length]; //Покажчик на масив унікальних символів(містить всі символи рядка str без повторів)
int * numbers = new int[length];//Покажчик на масив кількостей символів в рядку str
char * str = new char[255]; // Покажчик на масив символів str

//Шаблонна підпрограма додавання нового елементу elem в масив arr, довжиною length 
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
//Підпрограма вводу рядку str
void enter_string(char * str){
	cout << "Enter str: ";
	cin.getline(str, 255);
}


void main(){
		
}