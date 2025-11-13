#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int choice, size=5, ships=3, i, j, x, y, hits1=0, hits2=0, p=0;
    char board1[5][5], board2[5][5], display1[5][5], display2[5][5], ch;

    srand(time(0));

    printf("Welcome to Battleship game\n");

    do
	{
        system("cls");
		hits1=0;
		hits2=0;
		printf("1. Play Vs Computer\n2. Player1 Vs Player2\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        //initialize boards
        for(i=0;i<size;i++)
		{
            for(j=0;j<size;j++)
			{
                board1[i][j]=0;
                board2[i][j]=0;
                display1[i][j]=0;
                display2[i][j]=0;
            }
        }

        switch(choice)
		{
            case 1:
                printf("You chose Player Vs Computer\n");
                printf("Place your %d ships\n",ships);
                p=0;
                while(p<ships)
				{
                    printf("Enter row and column: ");
                    scanf("%d %d",&x, &y);
                    if(x>=0 && x<size && y>=0 && y<size)
					{
                        if(board1[x][y]==0)
						{
                            board1[x][y]='S';
                            p++;
                        }
						else
						{
                            printf("You already placed a ship here. Choose another.\n");
                        }
                    }
					else
					{
                        printf("Invalid entry. Choose another.\n");
                    }
                }

                //computer places ships
                p=0;
                while (p<ships)
				{
                    x=rand()%size;
                    y=rand()%size;
                    if(board2[x][y]==0)
					{
                        board2[x][y]='S';
                        p++;
                    }
                }

                //game loop
                while(hits1<ships && hits2<ships)
				{
                    printf("\nYour Turn - Enter coordinates: ");
                    scanf("%d %d", &x, &y);

                    if(x<0 || x>=size || y<0 || y>=size)
					{
                        printf("Invalid coordinates! Try again.\n");
                    }
					else if(display1[x][y]=='X' || display1[x][y]=='O')
					{
                        printf("You already attacked there!\n");
                    }
					else if(board2[x][y]=='S')
					{
                        printf("Hit!\n");
                        display1[x][y]='X';
                        board2[x][y]='X';
                        hits1++;
                    }
					else
					{
                        printf("Miss!\n");
                        display1[x][y]='O';
                    }

                    //computer turn
                    do
					{
                        x=rand()%size;
                        y=rand()%size;
                    }
					while(display2[x][y]=='X' || display2[x][y]=='O');

                    if(board1[x][y]=='S')
					{
                        printf("Computer Hit!\n");
                        display2[x][y]='X';
                        board1[x][y]='X';
                        hits2++;
                    }
					else
					{
                        printf("Computer Miss!\n");
                        display2[x][y]='O';
                    }
                }

                if(hits1==ships)
				{
                    printf("You win!\n");
                }
				else
				{
                    printf("You lose! Try again\n");
                }
                break;

            case 2:
                printf("You chose Player Vs Player\n");
                //player 1 ships
                p=0;
                while(p<ships)
				{
                    printf("Player 1, enter row and column for ship %d: ",p+1);
                    scanf("%d %d", &x, &y);
                    if(x>=0 && x<size && y>=0 && y<size)
					{
                        if(board1[x][y]==0)
						{
                            board1[x][y]='S';
                            p++;
                        }
						else
						{
                            printf("Already placed ship here! Choose another.\n");
                        }
                    }
					else
					{
                        printf("Invalid entry! Choose another.\n");
                    }
                }

                //player 2 ships
                p=0;
                while(p<ships)
				{
                    printf("Player 2, enter row and column for ship %d: ",p+1);
                    scanf("%d %d", &x, &y);
                    if(x>=0 && x<size && y>=0 && y<size)
					{
                        if(board2[x][y]==0)
						{
                            board2[x][y]='S';
                            p++;
                        }
						else
						{
                            printf("Already placed ship here! Choose another.\n");
                        }
                    }
					else
					{
                        printf("Invalid entry! Choose another.\n");
                    }
                }

                //game loop
                while(hits1<ships && hits2<ships)
				{
                    //Player 1 turn
                    printf("\nPlayer 1 Turn - Enter coordinates: ");
                    scanf("%d %d", &x, &y);
                    if(x<0 || x>=size || y<0 || y>=size)
					{
                        printf("Invalid coordinates! Try again.\n");
                    }
					else if(display1[x][y]=='X' || display1[x][y]=='O')
					{
                        printf("Already attacked there!\n");
                    }
					else if(board2[x][y]=='S')
					{
                        printf("Hit!\n");
                        display1[x][y]='X';
                        board2[x][y]='X';
                        hits1++;
                    }
					else
					{
                        printf("Miss!\n");
                        display1[x][y]='O';
                    }

                    //player 2 turn
                    printf("\nPlayer 2 Turn - Enter coordinates: ");
                    scanf("%d %d", &x, &y);
                    if(x<0 || x>=size || y<0 || y>=size)
					{
                        printf("Invalid coordinates! Try again.\n");
                    }
					else if(display2[x][y]=='X' || display2[x][y]=='O')
					{
                        printf("Already attacked there!\n");
                    }
					else if(board1[x][y]=='S')
					{
                        printf("Hit!\n");
                        display2[x][y]='X';
                        board1[x][y]='X';
                        hits2++;
                    }
					else
					{
                        printf("Miss!\n");
                        display2[x][y]='O';
                    }
                }

                if(hits1==ships)
				{
                    printf("Player 1 wins the game\n");
                }
				else
				{
                    printf("Player 2 wins the game\n");
                }
                break;

            default:
                printf("Invalid entry\n");
                break;
            }
                
                printf("\nDo you play aagain? Press \'Y' for yes and \'N' for no.");
                scanf(" %c", &ch);
                
        }
    while(ch=='Y' || ch=='y');

    return 0;
}

