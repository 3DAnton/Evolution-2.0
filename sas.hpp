 #ifndef SAS_HPP
#define SAS_HPP


struct WorldSize
{
	bool otkladka = 1;
	int x = 10, y = 10;
	int amount_bot = 10, amount_food = 0, amount_poison = 0, amount_wall = 0, amount_boot_evolue = 1;
	bool make_a_pause = true, need_to_draw = true, need_to_pause = false;
	bool q, mIsTurnedOff = false, need_to_draw_graph = false;
	int pause_delta = 100;
	int pause_time = 10e3;
	int x_draw = 0, y_draw = 0;
	bool need_to_graph = false, need_to_move = true, need_to_cordinat = false;
	bool mas_1 = false, mas_2 = false, mas_3 = false,mas_4=true;
	bool move_up = false, move_down = false, move_right = false, move_left = false;
	bool need_to_error = false;
};


#endif // !SAS_HPP            
