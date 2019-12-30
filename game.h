
#ifndef GAME_H
#define GAME_H

enum KEYS {
        R_Q     = 113,
        R_y     = 121,
        R_Y     = 89,
        R_ENTER = 10,
};

enum PLAYERS {
	PLAYER1 = 'X',
	PLAYER2 = 'O',
	NONE = ' ',
};

enum GAME_SIZES {
	GRID_SIZE = 1,
	MINI_GAME_SPACES=2,
	BIG_GAME_STATUS_BAR_LINES = 4,

};

#endif
