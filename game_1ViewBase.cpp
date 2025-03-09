// modified code
// -------------

// 0 - noben, 1 - igralec 1, 2- igralec 2

int fields1[3][3] = {
	{ 0, 0, 0,},
	{ 0, 0, 0,},
	{ 0, 0, 0,},
};

void resetFields1() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			fields1[i][j] = 0;
		}
	}
}

int game1 = 1;

void checkWin1() {
    if ((fields1[0][0] == fields1[0][1] && fields1[0][1] == fields1[0][2] && fields1[0][0] != 0) ||  // prva vrsta
    	(fields1[1][0] == fields1[1][1] && fields1[1][1] == fields1[1][2] && fields1[1][0] != 0) ||  // druga vrsta
		(fields1[2][0] == fields1[2][1] && fields1[2][1] == fields1[2][2] && fields1[2][0] != 0) ||  // tretja vrsta
		(fields1[0][0] == fields1[1][0] && fields1[1][0] == fields1[2][0] && fields1[0][0] != 0) ||  // prvi stolpec
		(fields1[0][1] == fields1[1][1] && fields1[1][1] == fields1[2][1] && fields1[0][1] != 0) ||  // drugi stolpec
		(fields1[0][2] == fields1[1][2] && fields1[1][2] == fields1[2][2] && fields1[0][2] != 0) ||  // tretji stolpec
		(fields1[0][0] == fields1[1][1] && fields1[1][1] == fields1[2][2] && fields1[0][0] != 0) ||  // prva diagonala
		(fields1[0][2] == fields1[1][1] && fields1[1][1] == fields1[2][0] && fields1[0][2] != 0)) {
        game1 = 0; // game over;
    } else if (fields1[0][0] != 0 && fields1[0][1] != 0 && fields1[0][2] != 0 &&
               fields1[1][0] != 0 && fields1[1][1] != 0 && fields1[1][2] != 0 &&
               fields1[2][0] != 0 && fields1[2][1] != 0 && fields1[2][2] != 0) {
        game1 = 2; // draw
    } else {
        game1 = 1; // game continues
    }
}

int player1 = 1;

void game_1ViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
	if (&src == &topLeft)
	{
		if (fields1[0][0] == 0) {
			if (player1 == 1) {
				topLeftKrizec.setVisible(true);
				player1 = 2;
				fields1[0][0] = 1;
			} else {
				topLeftKrozec.setVisible(true);
				player1 = 1;
				fields1[0][0] = 2;
			}
		}
	}
	if (&src == &topMiddle)
	{
		if (fields1[0][1] == 0) {
			if (player1 == 1) {
				topMiddleKrizec.setVisible(true);
				player1 = 2;
				fields1[0][1] = 1;
			} else {
				topMiddleKrozec.setVisible(true);
				player1 = 1;
				fields1[0][1] = 2;
			}
		}
	}
	if (&src == &topRight)
	{
		if (fields1[0][2] == 0) {
			if (player1 == 1) {
				topRightKrizec.setVisible(true);
				player1 = 2;
				fields1[0][2] = 1;
			} else {
				topRightKrozec.setVisible(true);
				player1 = 1;
				fields1[0][2] = 2;
			}
		}

	}
	if (&src == &middleLeft)
	{
		if (fields1[1][0] == 0) {
			if (player1 == 1) {
				middleLeftKrizec.setVisible(true);
				player1 = 2;
				fields1[1][0] = 1;
			} else {
				middleLeftKrozec.setVisible(true);
				player1 = 1;
				fields1[1][0] = 2;
			}
		}

	}
	if (&src == &middleMiddle)
	{
		if (fields1[1][1] == 0) {
			if (player1 == 1) {
				middleMiddleKrizec.setVisible(true);
				player1 = 2;
				fields1[1][1] = 1;
			} else {
				middleMiddleKrozec.setVisible(true);
				player1 = 1;
				fields1[1][1] = 2;
			}
		}
	}
	if (&src == &middleRight)
	{
		if (fields1[1][2] == 0) {
			if (player1 == 1) {
				middleRightKrizec.setVisible(true);
				player1 = 2;
				fields1[1][2] = 1;
			} else {
				middleRightKrozec.setVisible(true);
				player1 = 1;
				fields1[1][2] = 2;
			}
		}
	}
	if (&src == &bottomLeft)
	{
		if (fields1[2][0] == 0) {
			if (player1 == 1) {
				bottomLeftKrizec.setVisible(true);
				player1 = 2;
				fields1[2][0] = 1;
			} else {
				bottomLeftKrozec.setVisible(true);
				player1 = 1;
				fields1[2][0] = 2;
			}
		}
	}
	if (&src == &bottomMiddle)
	{
		if (fields1[2][1] == 0) {
			if (player1 == 1) {
				bottomMiddleKrizec.setVisible(true);
				player1 = 2;
				fields1[2][1] = 1;
			} else {
				bottomMiddleKrozec.setVisible(true);
				player1 = 1;
				fields1[2][1] = 2;
			}
		}
	}
	if (&src == &bottomRight)
	{
		if (fields1[2][2] == 0) {
			if (player1 == 1) {
				bottomRightKrizec.setVisible(true);
				player1 = 2;
				fields1[2][2] = 1;
			} else {
				bottomRightKrozec.setVisible(true);
				player1 = 1;
				fields1[2][2] = 2;
			}
		}
	}

	// check if over
	// players so zamenjani, ker se v zankah zamenja turn
	checkWin1();
	if (game1 == 0) {
		if (player1 == 2) {
			application().gotokrizecWin1ScreenNoTransition();
			resetFields1();
		} else {
			application().gotokrozecWin1ScreenNoTransition();
			resetFields1();
		}

	} else if (game1 == 2) {
		application().gotoizenaceno1ScreenNoTransition();
		resetFields1();
	}
}

void game_1ViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &back)
    {
        //back
        //When back clicked change screen to play
        //Go to play with block transition
    	application().gotoplayerScreenNoTransition();
        resetFields1();
    }
    if (&src == &restart)
    {
        //restart
        //When restart clicked change screen to game_1
        //Go to game_1 with block transition
        application().gotogame_1ScreenBlockTransition();
        resetFields1();
    }
}
