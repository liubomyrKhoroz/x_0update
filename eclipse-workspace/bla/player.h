/*
 * player.h
 *
 *  Created on: 3 мар. 2019 г.
 *      Author: Ћюбко
 */

#ifndef PLAYER_H_
#define PLAYER_H_

class player
{
protected:
	bool is_over=false;
	bool hmn_or_cmptr;
	int cell;
	int size;
	int** arr = new int*[size];
public:
	void add_to_arr_x();
	void add_to_arr_0();

};


#endif /* PLAYER_H_ */
