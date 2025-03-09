// modified code
// -------------

// 0 - noben, 1 - igralec 1, 2- igralec 2

int fields[3][3] = {
	{ 0, 0, 0,},
	{ 0, 0, 0,},
	{ 0, 0, 0,},
};

void resetFields() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			fields[i][j] = 0;
		}
	}
}

int game = 1;

void checkWin() {
    if ((fields[0][0] == fields[0][1] && fields[0][1] == fields[0][2] && fields[0][0] != 0) ||  // prva vrsta
    	(fields[1][0] == fields[1][1] && fields[1][1] == fields[1][2] && fields[1][0] != 0) ||  // druga vrsta
		(fields[2][0] == fields[2][1] && fields[2][1] == fields[2][2] && fields[2][0] != 0) ||  // tretja vrsta
		(fields[0][0] == fields[1][0] && fields[1][0] == fields[2][0] && fields[0][0] != 0) ||  // prvi stolpec
		(fields[0][1] == fields[1][1] && fields[1][1] == fields[2][1] && fields[0][1] != 0) ||  // drugi stolpec
		(fields[0][2] == fields[1][2] && fields[1][2] == fields[2][2] && fields[0][2] != 0) ||  // tretji stolpec
		(fields[0][0] == fields[1][1] && fields[1][1] == fields[2][2] && fields[0][0] != 0) ||  // prva diagonala
		(fields[0][2] == fields[1][1] && fields[1][1] == fields[2][0] && fields[0][2] != 0)) {
        game = 0; // game over;
    } else if (fields[0][0] != 0 && fields[0][1] != 0 && fields[0][2] != 0 &&
               fields[1][0] != 0 && fields[1][1] != 0 && fields[1][2] != 0 &&
               fields[2][0] != 0 && fields[2][1] != 0 && fields[2][2] != 0) {
        game = 2; // draw
    } else {
        game = 1; // game continues
    }
}

int player = 1;

void game_2ViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
	if (&src == &topLeft)
	{
		if (fields[0][0] == 0) {
			if (player == 1) {
				topLeftKrizec.setVisible(true);
				player = 2;
				fields[0][0] = 1;
			} else {
				topLeftKrozec.setVisible(true);
				player = 1;
				fields[0][0] = 2;
			}
		}
	}
	if (&src == &topMiddle)
	{
		if (fields[0][1] == 0) {
			if (player == 1) {
				topMiddleKrizec.setVisible(true);
				player = 2;
				fields[0][1] = 1;
			} else {
				topMiddleKrozec.setVisible(true);
				player = 1;
				fields[0][1] = 2;
			}
		}
	}
	if (&src == &topRight)
	{
		if (fields[0][2] == 0) {
			if (player == 1) {
				topRightKrizec.setVisible(true);
				player = 2;
				fields[0][2] = 1;
			} else {
				topRightKrozec.setVisible(true);
				player = 1;
				fields[0][2] = 2;
			}
		}

	}
	if (&src == &middleLeft)
	{
		if (fields[1][0] == 0) {
			if (player == 1) {
				middleLeftKrizec.setVisible(true);
				player = 2;
				fields[1][0] = 1;
			} else {
				middleLeftKrozec.setVisible(true);
				player = 1;
				fields[1][0] = 2;
			}
		}

	}
	if (&src == &middleMiddle)
	{
		if (fields[1][1] == 0) {
			if (player == 1) {
				middleMiddleKrizec.setVisible(true);
				player = 2;
				fields[1][1] = 1;
			} else {
				middleMiddleKrozec.setVisible(true);
				player = 1;
				fields[1][1] = 2;
			}
		}
	}
	if (&src == &middleRight)
	{
		if (fields[1][2] == 0) {
			if (player == 1) {
				middleRightKrizec.setVisible(true);
				player = 2;
				fields[1][2] = 1;
			} else {
				middleRightKrozec.setVisible(true);
				player = 1;
				fields[1][2] = 2;
			}
		}
	}
	if (&src == &bottomLeft)
	{
		if (fields[2][0] == 0) {
			if (player == 1) {
				bottomLeftKrizec.setVisible(true);
				player = 2;
				fields[2][0] = 1;
			} else {
				bottomLeftKrozec.setVisible(true);
				player = 1;
				fields[2][0] = 2;
			}
		}
	}
	if (&src == &bottomMiddle)
	{
		if (fields[2][1] == 0) {
			if (player == 1) {
				bottomMiddleKrizec.setVisible(true);
				player = 2;
				fields[2][1] = 1;
			} else {
				bottomMiddleKrozec.setVisible(true);
				player = 1;
				fields[2][1] = 2;
			}
		}
	}
	if (&src == &bottomRight)
	{
		if (fields[2][2] == 0) {
			if (player == 1) {
				bottomRightKrizec.setVisible(true);
				player = 2;
				fields[2][2] = 1;
			} else {
				bottomRightKrozec.setVisible(true);
				player = 1;
				fields[2][2] = 2;
			}
		}
	}

	// check if over
	// players so zamenjani, ker se v zankah zamenja turn
	checkWin();
	if (game == 0) {
		if (player == 2) {
			application().gotokrizecWin2ScreenNoTransition();
			resetFields();
		} else {
			application().gotokrozecWin2ScreenNoTransition();
			resetFields();
		}

	} else if (game == 2) {
		application().gotoizenaceno2ScreenNoTransition();
		resetFields();
	}
}

void game_2ViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
	if (&src == &back)
	    {
	        //back
	        //When back clicked change screen to player
	        //Go to player with no screen transition
	        application().gotoplayerScreenNoTransition();
	        resetFields();
	        game = 1;
	    }
	    if (&src == &restart)
	    {
	    	application().gotogame_2ScreenBlockTransition();
	    	resetFields();
	    	game = 1;
	    }
}
