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


void get_characters_count(){
	int k = 0; //˳������� ��������� ������� � ����� str

	for (int i = 0; i < strlen(str); i++){
		if (strchr(characters, str[i]) == NULL){ //���� ������ � ����� ��������� ������� characters ���� ������� str[i]
			characters = add_element(characters, str[i], length); //��������� ������� �� ����� characters
			numbers = add_element(numbers, 0, length);//��������� ������� ������� � ����� str
			length++;//��������� ������� �������� ����� str

			for (int j = i; j < strlen(str); j++){ //����������� ������� �������
				if (str[i] == str[j])
				{
					numbers[k]++;
				}
			}

			k++;
		}
	}
}


void print_separator(){ //���� �������� ��
	cout.fill('-');
	cout.width(30);
	cout << "\n";
}

void print_results(){ //���� ����������
	print_separator();
	for (int i = 0; i < length; i++){
		cout << "'" << characters[i] << "'" << ": " << numbers[i] << endl; //���� ������� � ���� ������� � str
	}
	print_separator();
}
	

void main() {
enter_string(str);//��� ������
	get_characters_count(); //����������� ������� �������� ������� ������ str
	print_results();//���� ����������
	system("pause");
}
