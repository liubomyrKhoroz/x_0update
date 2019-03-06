/*
 * player.cpp
 *
 *  Created on: 3 мар. 2019 г.
 *      Author: Ћюбко
 */

#include "player.h"
#include<iostream>
using namespace std;


void player::add_to_arr_x()
{int row,col;
	cin>>cell;
	if((cell>size*size)||cell<=0){
		cout<<"Such a cell doesnt exist"<<endl;
		cout<<"It is X player turn"<<endl<<"choose the cell"<<endl;
		return add_to_arr_x();
	}
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (cell == arr[i][j]) {
				arr[i][j] = 88;
				row=i;col=j;
				break;
			}
		}
	}

	for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				if ((cell=arr[i][j])&&(arr[i][j]==88||arr[i][j]==0)){
					if (cell == arr[row][col]) {
					continue;}
					cout<<"Such a cell is not available"<<endl;
					cout<<"It is X player turn"<<endl<<"choose the cell"<<endl;
					return add_to_arr_x();
				}
			}
		}

}
void player::add_to_arr_0()
{
int row,col;
cin>>cell;
if((cell>size*size)||cell<=0){
	cout<<"Such a cell doesnt exist"<<endl;
	cout<<"It is 0 player turn"<<endl<<"choose the cell"<<endl;
	return add_to_arr_0();
}
for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (cell == arr[i][j]) {
				arr[i][j] = 0;
				row=i;col=j;
				break;
			}
		}
	}
}



