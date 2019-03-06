/*
 * game.h
 *
 *  Created on: 3 мар. 2019 г.
 *      Author: Ћюбко
 */

#ifndef GAME_H_
#define GAME_H_

#include "player.h"

class game:public player
{
	int ver = size;
	int hor = size;
	int x_or_0;
	int inraw;
public:
	bool check_0();
	bool check_x();
	bool check_reverse_diagonal_0(int ver,int  hor);
	bool check_diagonal_0(int ver,int  hor);
	bool check_vertical_0(int ver,int  hor);
	bool check_horizontal_0(int ver,int  hor);
	bool check_vertical(int ver,int  hor);
	bool check_diagonal(int ver,int  hor);
	bool check_reverse_diagonal(int ver, int hor);
	bool check_horizontal(int ver,int  hor);

	void draw_x();
	void draw_0();
	void show_arr_with_x_o();
	void show();
	void dyn_arr();
	void smth();
	void clear();
	void set_field();
	void run();
	void rewiev();
	void set_inraw();

};
#endif /* GAME_H_ */
