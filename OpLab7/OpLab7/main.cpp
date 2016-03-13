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


void get_characters_count(){
	int k = 0; //Лічильник унікальних символів в рядку str

	for (int i = 0; i < strlen(str); i++){
		if (strchr(characters, str[i]) == NULL){ //Якщо символ у рядку унікальних символів characters немає символу str[i]
			characters = add_element(characters, str[i], length); //Додавання символу до рядку characters
			numbers = add_element(numbers, 0, length);//Додавання кількості символів в рядку str
			length++;//Збільшення кількості елементів рядку str

			for (int j = i; j < strlen(str); j++){ //Знаходження кількості символів
				if (str[i] == str[j])
				{
					numbers[k]++;
				}
			}

			k++;
		}
	}
}


void print_separator(){ //Вивід роздільної лінії
	cout.fill('-');
	cout.width(30);
	cout << "\n";
}

void print_results(){ //Вивід результатів
	print_separator();
	for (int i = 0; i < length; i++){
		cout << "'" << characters[i] << "'" << ": " << numbers[i] << endl; //Вивід символу і його кількості в str
	}
	print_separator();
}
	

void main() {
enter_string(str);//Ввід строки
	get_characters_count(); //Знаходження кількості входжень символів строки str
	print_results();//Вивід результатів
	system("pause");
}
