
#include "game.h"
#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<conio.h>
using namespace std;
bool game::check_x(){ //������� ��� �������� �� ��������� x
	 check_reverse_diagonal(size,size);
	 check_diagonal(size,size);
	 check_vertical(size,size);
	 check_horizontal(size,size);
}

bool game::check_0(){  //������� ��� �������� �� ��������� 0
	 check_reverse_diagonal_0(size,size);
	 check_diagonal_0(size,size);
	 check_vertical_0(size,size);
	 check_horizontal_0(size,size);
}
bool game::check_diagonal_0(int ver, int hor) //�������� 0 �� ������� ���� �� �����
{

	int tmp = 0;
	for (int i = 0;i< ver-1;i++) {
		for (int j = 0; j < hor-1; j++) {

			if (arr[i][j] == arr[i+1][j+1] && arr[i+1][j+1] == 0) {
				tmp++;
				if (tmp == inraw-1) {
					cout << "0 player won diag"<<endl;
					return is_over = true;
				}
			}
		}
	}
}
bool game::check_reverse_diagonal_0(int ver, int hor)  //�������� 0 �� ������� � ����� �� ���
{

	int tmp = 0;
	for (int i = 0;i< ver-1;i++) {
		for (int j = hor-1; j>= 0; j--) {

			if (arr[i][j] == arr[i+1][j-1] && arr[i+1][j-1] == 0) {
				tmp++;
				if (tmp == inraw-1) {
					cout << "0 player won rev diag"<<endl;
					return is_over = true;
				}
			}
		}
	}
}
bool game::check_vertical_0(int ver, int hor) //�������� 0 �� ��������
{

	int tmp = 0;
	for (int i = 0;i< ver-1;i++) {
		for (int j = 0; j < hor; j++) {

			if (arr[i][j] == arr[i+1][j] && arr[i+1][j] == 0) {
				tmp++;
				if (tmp == inraw-1) {
					cout << "0 player won vert"<<endl;
					return is_over = true;
				}
			}
		}
	}
}

bool game::check_horizontal_0(int ver,int  hor){  //�������� 0 �� ����������
	int tmp = 0;
		for (int i = 0; i < ver;i++) {
			for (int j = 0; j < hor-1; j++) {

				if (arr[i][j] == arr[i][j + 1] && arr[i][j + 1] == 0) {
					tmp++;
					if (tmp == inraw-1) {
						if(x_or_0==1){
							cout << "0 player won hor"<<endl;
							return is_over = true;
						}
					}
				}

			}
		}
}
bool game::check_horizontal(int ver, int hor)	//�������� � �� ����������
{

	int tmp = 0;
	for (int i = 0; i < ver-1;i++) {
		for (int j = 0; j < hor-1; j++) {

			if (arr[i][j] == arr[i][j + 1] && arr[i][j + 1] == 88) {
				tmp++;
				if (tmp == inraw-1) {
					if(x_or_0==1){
						cout << "X player won hor"<<endl;
						return is_over = true;
					}
				}
			}

		}
	}
}

bool game::check_vertical(int ver, int hor)//�������� � ��  ��������
{

	int tmp = 0;
	for (int i = 0;i< ver-1;i++) {
		for (int j = 0; j < hor; j++) {

			if (arr[i][j] == arr[i+1][j] && arr[i+1][j] == 88) {
				tmp++;
				if (tmp == inraw-1) {
					cout << "X player won ver"<<endl;
					return is_over = true;
				}
			}
		}
	}
}
bool game::check_diagonal(int ver, int hor) //�������� � �� ������� ���� �������
{

	int tmp = 0;
	for (int i = 0;i< ver-1;i++) {
		for (int j = 0; j < hor-1; j++) {

			if (arr[i][j] == arr[i+1][j+1] && arr[i+1][j+1] == 88) {
				tmp++;
				if (tmp == inraw-1) {
					cout << "X player won diag"<<endl;
					return is_over = true;
				}
			}
		}
	}
}
bool game::check_reverse_diagonal(int ver, int hor) //�������� � �� ������� � ����� �� ���
{

	int tmp = 0;
		for (int i = 0;i< ver-1;i++) {
			for (int j = hor-1; j>= 0; j--) {

				if (arr[i][j] == arr[i+1][j-1] && arr[i+1][j-1] == 88) {
					tmp++;
					if (tmp == inraw-1) {
						cout << "X player won rev diag"<<endl;
						return is_over = true;
					}
				}
			}
		}
}

void game::draw_x()//����� ��� ��������� � � �����
{
	cout << "It is X player turn" <<endl<< "choose the cell"<<endl;
	add_to_arr_x();
	clear();
	show_arr_with_x_o();
}
void game::draw_0()//����� ��� ��������� 0 � �����
{
	cout << "It is 0 player turn" <<endl<< "choose the cell"<<endl;
	add_to_arr_0();
	clear();
	show_arr_with_x_o();
}
void game::show_arr_with_x_o() //����� ��� ����������� ������� � �-�� � 0-��
{

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (arr[i][j] == 88) {
				cout<< setw(6)<<(char)arr[i][j]<<setw(6) << "|";
				continue;	//������� ����� ���� �� �������� ����� ����� acsii ������� �� � =88 � ����������
			}//���� �������� ������� ����� continue ��� �� ��������� ���� ������
			cout << setw(6) << arr[i][j] << setw(6) << "|";
		}
		cout << endl;
	}
}
void game::show()//����� ��� ��������� ������ ��� � � 0
{
	dyn_arr();
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			arr[i][j] = i*size+j+1;
			cout << setw(6) << arr[i][j] << setw(6) << "|";

		}
		cout << endl;
	}
}
void game::dyn_arr()//�������� ����� �� ����������� �����
{
	for (int i = 0; i < size; i++) {
		arr[i] = new int[size];
	}
}
void game::smth()//�� �� ����
{
	cout << "fuck";
}

void game::clear()//����� ��� ������� ������ �� c��䳿 ��� ������ � � ����� ������� ��� ��������
{
#ifdef WINDOWS
system("cls");
#endif
}
void game::set_field()//�������� ��������� ������
{
	cout << "\t\t\tEnter the size of field you want to play(size*size)"<<endl;
	cin >> size;
	if (size <= 2) {
		cout << "Enter something more interest" << endl;
		return set_field();
	}
}

void game::run()//�������� ����� � ����� � ������ �� ����� � �������� �� ����� ���
{	int count=0;
	rewiev();
	set_field();
	clear();
	set_inraw();
	show();
	while (is_over!=true)
	{	count++;
		draw_x();
		check_0();
		check_x();
		if(count==size*size&&is_over!=true)
			{	is_over=true;
			clear();
			cout<<"It is draw"<<endl;
			break;
			}
		if (is_over==true)
					break;
		else{
		count++;
		draw_0();
		check_0();
		check_x();
		if(count==size*size&&is_over==false)
		{
			cout<<"It is draw"<<endl;
			break;
		}
		}
	}
}
void game::rewiev(){
	cout<<"\t\t\tYou are welcome in multiplayer X or 0 game"<<endl;
	cout<<"\t\t\tThe main goal is to put 3 time X or 3 time 0\n"
		  "\t\t\t    in raw quicker than your opponent\n"
		  "\t\t\t   field size is determine by players\n";

}
void game::set_inraw(){
	cout << "Enter the amount of X or 0 needed to be in raw for win"<<endl;
		cin >> inraw;
		if (inraw <=2) {
			cout << "Enter something more interest" << endl;
			return set_inraw();
		}
		if(inraw>size){
			cout<<"X or 0 in raw for win cannot be more than size of field!!! "<<endl;
			return set_inraw();
		}
}
