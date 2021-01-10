void DisplayBoard() //画棋盘
{	
	int i, j;

	for(i = 0; i <= 14; i++)
	{
		for(j = 0; j <= 14; j++)
		{
			switch(Board[i][j] % 100)//%100为了适应将来有分值的情形
			{
			case 1:
				printf("┏");
				break;

			case 2:
				printf("┓");
				break;

			case 3:
				printf("┛");
				break;

			case 4:
				printf("┗");
				break;

			case 5:
				printf("┠");
				break;

			case 6:
				printf("┯");
				break;

			case 7:
				printf("┨");
				break;

			case 8:
				printf("┷");
				break;

			case 9:
				printf("┼");
				break;

			case 10:
				printf("●");
				break;

			case 11:
				printf("▲");
				break;

			case 20:
				printf("◎");
				break;

			case 21:
				printf("△");
				break;
			}
			if (j == 14)
			{
				printf("\n");
			}
		}
	}
}

void ClearBoardArray()
{
	int i, j; //i＝行，j＝列

	Board[0][0] = 1;
	Board[0][14] = 2;
	Board[14][14] = 3;
	Board[14][0] = 4;

	for (i = 1; i <= 13; i++)
	{
		Board[i][0] = 5;
	}
	
	for (i = 1; i <= 13; i++)
	{
		Board[i][14] = 7;
	}
	
	for (j = 1; j <= 13; j++)
	{
		Board[0][j] = 6;
	}
	for (j = 1; j <= 13; j++)
	{
		Board[14][j] = 8;
	}

	for (i = 1; i <= 13; i++)
	{
		for (j = 1; j <= 13; j++)
		{
			Board[i][j] = 9;
		}
	}
}
