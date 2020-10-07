#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>
#include<dos.h>

void displayscore()
{
	char name[20];
	float s;
	FILE *f;
	system("cls");
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&s);
	printf("\n\n\t\t ");
	printf("\n\n\t\t %s has secured the Highest Score %.2f",name,s);
	printf("\n\n\t\t ");
	fclose(f);
	getch();
}
void help()
{
             system("cls");
             printf("\n-------Welcome to QUIZ GAME-------");
             printf("\n-------How To Play-------");
             printf("\n___________________________");
             printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the right option.");
             printf("\n >> Each question carries two marks.");
             printf("\n >> Negative marking for wrong answers, one mark will be deducted!");
             printf("\n >> You will have to complete the warm-up round within the time limit.");
             printf("\n >> Then next proceed to the challenging round.");
             printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
             
}
int main(){
    char playername[20];
    int score1=0,score2=0,Round;
    int cgry1; int cgry2; int cgry3;
    int mopt;
    int opt;
    int q1,q2,q3,q4,q5,q6,q7,q8,q9;
    MAINQ:
    system("cls");
    SetConsoleTitle("\n\t\t QUIZZINE: A Quiz Game \n\n ");
    printf("\n\t\t-------------------------------");
    printf("\n\t\t Welcome to QUIZZINE \n\n");
    printf("\n\t\t 1 ) Play Game \n\n");
    printf("\n\t\t 2 ) Select category \n\n");
    printf("\n\t\t 3 ) View Highest Score \n\n");
    printf("\n\t\t 4 ) Help \n\n");
    printf("\n\t\t 5 ) Exit \n\n");
    printf("\nEnter Option : ");
    scanf("%d",&mopt);

    if(mopt > 5){
        system("cls");
	    goto MAINQ;
    }
	
    switch(mopt){
	case 1 :
		system("cls");
        printf("\n\n\n\t\t\tEnter Your Name...");
		printf("\n\t\t\t");
		gets(playername);
		goto cgry1;
	case 2 :
		
		system("cls");
        printf("\n\n\n\t\t\tEnter Your Name...");
		printf("\n\t\t\t");
		gets(playername);
        SetConsoleTitle("Select Category");
		printf("Select Category \n");
		printf("1 > Category 1 : Current Affairs & General Knowledge \n");
		printf("2 > Category 2 : Verbal & Logical Reasoning \n");
		printf("3 > Category 3 : Quantitative Aptitude \n");
		printf("\nEnter Option : ");
		scanf("%d",&opt);
		
		switch(opt){
			case 1 :
				//system("cls");
                goto cgry1;
                switch(Round){
                    case 1:
                    system("cls"); 
                    goto cgry1;
                    break;
                    case 2:
                    system("cls"); 
                    goto cgry1;
                    break;

                }

				//goto cgry1;
				break;
			case 2 :
				system("cls");
				goto cgry2;
                
                switch(Round){
                    case 1:
                    system("cls"); 
                    goto cgry2;
                    break;
                    case 2:
                    system("cls"); 
                    goto cgry2;
                    break;
                }
				break;

			case 3 :
				system("cls");
				goto cgry3;
                switch(Round){
                    case 1:
                    system("cls"); 
                    goto cgry3;
                    break;
                    case 2:
                    system("cls"); 
                    goto cgry3;
                    break;
                }

				break;
		}
		
		
	case 3 :
        
        displayscore();
        goto MAINQ;
    case 4:
        
        help() ;
    case 5:
        return 0;
		break;
    }
cgry1:
Round1:
    SetConsoleTitle("Category 1 : Current Affairs & General Knowledge");
    printf("Welcome to WARM-UP round ( Round-1 )\n\n");
	printf("[Current Affairs & General Knowledge]\n\n");
	
	printf("The world largest Desert is ?\n");
	printf("1 > Thar 2 > Kalhari 3 > Sahara 4 > Sonoran\n");
	printf("Enter Correct Option : ");
	scanf("%d",&q1);
	if( q1 > 4){
		system("cls");
		goto cgry1;
	}

    if (q1 == 3){
    	score1 =10;
    	printf("\t\t\t\t\t\t\t Score = %d",score1);
    	printf("\n\t\t\t\t\t\t\t Correct Answer");
	}
    else{
		score1 =0;
		system("COLOR C0");//red
		Sleep(400);
		system("COLOR 0A ");
    	printf("\t\t\t\t\t\t\t Score = %d",score1);
    	printf("\n\t\t\t\t\t\t\t Wrong Answer");		
	}

	printf("\nThe metal whose salts are sensitive to light is ?\n");
	printf("1 > Zinc 2 > Silver 3 > Copper 4 > Aluminum\n");
	printf("Enter Correct Option : ");
	scanf("%d",&q2);
	if( q2 > 4){
		system("cls");
		goto cgry1;
	}

    if (q2 == 2){
    	score1 = score1 +10;
    	printf("\t\t\t\t\t\t\t Score = %d",score1);
    	printf("\n\t\t\t\t\t\t\t Correct Answer");
	}else{
		score1 = score1 -10;
		system("COLOR C0");//red
		Sleep(400);
		system("COLOR 0A ");
    	printf("\t\t\t\t\t\t\t Score = %d",score1);
    	printf("\n\t\t\t\t\t\t\t Wrong Answer");		
	}
	
	
	
	printf("\nCountry that has the highest in Barley Production ?");
	printf("\n1 > china 2 > Pakistan 3 > Russia 4 > france");
	printf("\nEnter Correct option : ");
	scanf("%d",&q3);
		if(q3 > 4)
	{
		system("cls");
		goto cgry1;
	}
	if(q3==3)
	{
		score1 = score1 +10;
		printf("\t\t\t\t\t\t\t Score = %d",score1);
		printf("\n\t\t\t\t\t\t\t Correct Answer");
	}else{
		score1 = score1 -10;
		system("COLOR C0");//red
		Sleep(400);
		system("COLOR 0A"); //black background //green text
        printf("\t\t\t\t\t\t\tScore = %d",score1);
		printf("\n\t\t\t\t\t\t\tWrong Answer");
		
	}
    
    if(score1 == 40){
	    printf("\n Congratulations you have been promoted to Challenging round(Round 2)\n");
	    Round =2;
	    system("pause");
	    system("cls");
    }
    else if(score1 == 30){
	    printf("\nYour score is 30 get 40 score to get round 2\n",score1);
    	system("pause");
	    system("cls");
	    goto MAINQ;
    }else if(score1 == 20){
	    printf("\nYour score is 20 get 40 score to get round 2\n",score1);
    	system("pause");
	    system("cls");
	    goto MAINQ;
    }else if(score1 == 10){
	    printf("\n Your score is 10 get 40 score to get round 2\n",score1);
		system("pause");
	    system("cls");
	    goto MAINQ;
    }else if(score1 == 0){
	    printf("\n your score is 0 get 40 score to get round 2\n",score1);
		system("pause");
	    system("cls");
	    goto MAINQ;
    }else{
	    printf("\n Your score is too low get 40 score to get round 2\n",score1);
		system("pause");
	    system("cls");
	    goto MAINQ;
    }

    if( Round == 2){
	Round2:
	system("cls");
    SetConsoleTitle("Category 1 : Current Affairs & General Knowledge");
   
	printf("[Current Affairs & General Knowledge]\n\n");
	printf("Welcome to Challenging round ( Round-2 )\n\n");
	
	printf("\nFirst China War was fought between");
	printf("\n 1 > China and Britain 2 > China and France. 3 > China and Egypt 4 >China and Greek");
	printf("\nEnter Correct Option : ");
	scanf("%d",&q4);
	if(q4 > 4){
		system("cls");
		goto Round2;
	}
	if(q4 == 1){
		score2=10;
		printf("\t\t\t\t\t\t\t Score = %d",score2);
		printf("\n\t\t\t\t\t\t\t Correct Answer");
	}else{
		score2 = 0;
		system("COLOR C0");//red
		Sleep(400);
		system("COLOR 0A"); //black background //green text
        printf("\t\t\t\t\t\t\tScore = %d",score2);
		printf("\n\t\t\t\t\t\t\tWrong Answer");
	}
	
	printf("\nWhat is the Capital of Pakistan");
	printf("\n 1 > Lahore 2 > Quetta 3 > Islamabad 4 >Karachi");
	printf("\nEnter Correct Option : ");
	scanf("%d",&q5);
	if(q5 > 4){
		system("cls");
		goto Round2;
	}
	if(q5 == 3){
		score2=score2+10;
		printf("\t\t\t\t\t\t\t Score = %d",score2);
		printf("\n\t\t\t\t\t\t\t Correct Answer");
	}else{
		score2 = score2-10;
		system("COLOR C0");//red
		Sleep(400);
		system("COLOR 0A"); //black background //green text
        printf("\t\t\t\t\t\t\tScore = %d",score2);
		printf("\n\t\t\t\t\t\t\tWrong Answer");
	}
	
	
	
	printf("\nMicrosoft was founded by?");
	printf("\n 1 > billgates 2 > jeff 3 > steve 4 > mark ");
	printf("\nEnter Correct Option : ");
	scanf("%d",&q6);
	if(q6 > 4){
		system("cls");
		goto Round2;
	}
	
	if(q6 == 1){
		score2=score2+10;
		printf("\t\t\t\t\t\t\t Score = %d",score2);
		printf("\n\t\t\t\t\t\t\t Correct Answer");
	}else{
		score2 = score2-10;
		system("COLOR C0");//red
		Sleep(400);
		system("COLOR 0A"); //black background //green text
        printf("\t\t\t\t\t\t\tScore = %d",score2);
		printf("\n\t\t\t\t\t\t\tWrong Answer");
	}
//category 2
cgry2:
 Round3:
    SetConsoleTitle("Category 2 : Verbal & Logical Reasoning");
    printf("Welcome to WARM-UP round ( Round-1 )\n\n");
	printf("[Verbal & Logical Reasoning]\n\n");
	
	printf("The total of the ages of Amar, Akbar and anthony is 80 years. What was the total of their ages 3years ago?\n");
	printf("1 > 71 2 > 72 3 > 74 4 > 77\n");
	printf("Enter Correct Option : ");
	scanf("%d",&q1);
	if( q1 > 4){
		system("cls");
		goto cgry2;
	}

    if (q1 == 3){
    	score1 =10;
    	printf("\t\t\t\t\t\t\t Score = %d",score1);
    	printf("\n\t\t\t\t\t\t\t Correct Answer");
	}
    else{
		score1 =0;
		system("COLOR C0");//red
		Sleep(400);
		system("COLOR 0A ");
    	printf("\t\t\t\t\t\t\t Score = %d",score1);
    	printf("\n\t\t\t\t\t\t\t Wrong Answer");		
	}

	printf("\nThe metal whose salts are sensitive to light is ?\n");
	printf("1 > Zinc 2 > Silver 3 > Copper 4 > Aluminum\n");
	printf("Enter Correct Option : ");
	scanf("%d",&q2);
	if( q2 > 4){
		system("cls");
		goto cgry2;
	}

    if (q2 == 2){
    	score1 = score1 +10;
    	printf("\t\t\t\t\t\t\t Score = %d",score1);
    	printf("\n\t\t\t\t\t\t\t Correct Answer");
	}else{
		score1 = score1 -10;
		system("COLOR C0");//red
		Sleep(400);
		system("COLOR 0A ");
    	printf("\t\t\t\t\t\t\t Score = %d",score1);
    	printf("\n\t\t\t\t\t\t\t Wrong Answer");		
	}
	
	
	
	printf("\nCountry that has the highest in Barley Production ?");
	printf("\n1 > china 2 > Pakistan 3 > Russia 4 > france");
	printf("\nEnter Correct option : ");
	scanf("%d",&q3);
		if(q3 > 4)
	{
		system("cls");
		goto cgry2;
	}
	if(q3==3)
	{
		score1 = score1+10;
		printf("\t\t\t\t\t\t\t Score = %d",score1);
		printf("\n\t\t\t\t\t\t\t Correct Answer");
	}else{
		score1 = score1 -10;
		system("COLOR C0");//red
		Sleep(400);
		system("COLOR 0A"); //black background //green text
        printf("\t\t\t\t\t\t\tScore = %d",score1);
		printf("\n\t\t\t\t\t\t\tWrong Answer");
		
	}
    
    if(score1 == 40){
	    printf("\n Congratulations you have been promoted to Challenging round(Round 2)\n");
	    Round =2;
	    system("pause");
	    system("cls");
    }
    else if(score1 == 30){
	    printf("\nYour score is 30 get 40 score to get round 2\n",score1);
    	system("pause");
	    system("cls");
	    goto MAINQ;
    }else if(score1 == 20){
	    printf("\nYour score is 20 get 40 score to get round 2\n",score1);
    	system("pause");
	    system("cls");
	    goto MAINQ;
    }else if(score1 == 10){
	    printf("\n Your score is 10 get 40 score to get round 2\n",score1);
		system("pause");
	    system("cls");
	    goto MAINQ;
    }else if(score1 == 0){
	    printf("\n your score is 0 get 40 score to get round 2\n",score1);
		system("pause");
	    system("cls");
	    goto MAINQ;
    }else{
	    printf("\n Your score is too low get 40 score to get round 2\n",score1);
		system("pause");
	    system("cls");
	    goto MAINQ;
    }

    if( Round == 2){
	Round4:
	system("cls");
    SetConsoleTitle("Category 1 : Verbal & Logical Reasoning");
   
	printf("[Verbal & Logical Reasoning]\n\n");
	printf("Welcome to Challenging round ( Round-2 )\n\n");
	
	printf("\nWhat is the product of all the numbers in the dial of a telephone ?");
	printf("\n 1 > 1,58,480 2 > 1,59,450 3 > 1.59.480 4 > None of these");
	printf("\nEnter Correct Option : ");
	scanf("%d",&q4);
	if(q4 > 4){
		system("cls");
		goto Round4;
	}
	if(q4 == 1){
		score2=10;
		printf("\t\t\t\t\t\t\t Score = %d",score2);
		printf("\n\t\t\t\t\t\t\t Correct Answer");
	}else{
		score2 = 0;
		system("COLOR C0");//red
		Sleep(400);
		system("COLOR 0A"); //black background //green text
        printf("\t\t\t\t\t\t\tScore = %d",score2);
		printf("\n\t\t\t\t\t\t\tWrong Answer");
	}
	
	printf("\nWhat is the Capital of Pakistan");
	printf("\n 1 > Lahore 2 > Quetta 3 > Islamabad 4 >Karachi");
	printf("\nEnter Correct Option : ");
	scanf("%d",&q5);
	if(q5 > 4){
		system("cls");
		goto Round2;
	}
	if(q5 == 3){
		score2=score2+10;
		printf("\t\t\t\t\t\t\t Score = %d",score2);
		printf("\n\t\t\t\t\t\t\t Correct Answer");
	}else{
		score2 = score2-10;
		system("COLOR C0");//red
		Sleep(400);
		system("COLOR 0A"); //black background //green text
        printf("\t\t\t\t\t\t\tScore = %d",score2);
		printf("\n\t\t\t\t\t\t\tWrong Answer");
	}
	
	
	
	printf("\nMicrosoft was founded by?");
	printf("\n 1 > billgates 2 > jeff 3 > steve 4 > mark ");
	printf("\nEnter Correct Option : ");
	scanf("%d",&q6);
	if(q6 > 4){
		system("cls");
		goto Round2;
	}
	
	if(q6 == 1){
		score2=score2+10;
		printf("\t\t\t\t\t\t\t Score = %d",score2);
		printf("\n\t\t\t\t\t\t\t Correct Answer");
	}else{
		score2 = score2-10;
		system("COLOR C0");//red
		Sleep(400);
		system("COLOR 0A"); //black background //green text
        printf("\t\t\t\t\t\t\tScore = %d",score2);
		printf("\n\t\t\t\t\t\t\tWrong Answer");
	}

    //category 3
    cgry3:
    Round5:
    SetConsoleTitle("Category 1 : Quantitative Aptitude");
    printf("Welcome to WARM-UP round ( Round-1 )\n\n");
	printf("[Quantitative Aptitude]\n\n");
	
	printf("Find the greatest number that will divide 43, 91 and 183 so as to leave the same remainder in each case.\n");
	printf("1 > 4 > 7 3 > 9 4 > 13\n");
	printf("Enter Correct Option : ");
	scanf("%d",&q1);
	if( q1 > 4){
		system("cls");
		goto cgry3;
	}

    if (q1 == 3){
    	score1 =10;
    	printf("\t\t\t\t\t\t\t Score = %d",score1);
    	printf("\n\t\t\t\t\t\t\t Correct Answer");
	}
    else{
		score1 =0;
		system("COLOR C0");//red
		Sleep(400);
		system("COLOR 0A ");
    	printf("\t\t\t\t\t\t\t Score = %d",score1);
    	printf("\n\t\t\t\t\t\t\t Wrong Answer");		
	}

	printf("\nThe metal whose salts are sensitive to light is ?\n");
	printf("1 > Zinc 2 > Silver 3 > Copper 4 > Aluminum\n");
	printf("Enter Correct Option : ");
	scanf("%d",&q2);
	if( q2 > 4){
		system("cls");
		goto cgry3;
	}

    if (q2 == 2){
    	score1 = score1 +10;
    	printf("\t\t\t\t\t\t\t Score = %d",score1);
    	printf("\n\t\t\t\t\t\t\t Correct Answer");
	}else{
		score1 = score1 -10;
		system("COLOR C0");//red
		Sleep(400);
		system("COLOR 0A ");
    	printf("\t\t\t\t\t\t\t Score = %d",score1);
    	printf("\n\t\t\t\t\t\t\t Wrong Answer");		
	}
	
	
	
	printf("\nCountry that has the highest in Barley Production ?");
	printf("\n1 > china 2 > Pakistan 3 > Russia 4 > france");
	printf("\nEnter Correct option : ");
	scanf("%d",&q3);
		if(q3 > 4)
	{
		system("cls");
		goto cgry3;
	}
	if(q3==3)
	{
		score1 = score1 +10;
		printf("\t\t\t\t\t\t\t Score = %d",score1);
		printf("\n\t\t\t\t\t\t\t Correct Answer");
	}else{
		score1 = score1 -10;
		system("COLOR C0");//red
		Sleep(400);
		system("COLOR 0A"); //black background //green text
        printf("\t\t\t\t\t\t\tScore = %d",score1);
		printf("\n\t\t\t\t\t\t\tWrong Answer");
		
	}
    
    if(score1 == 40){
	    printf("\n Congratulations you have been promoted to Challenging round(Round 2)\n");
	    Round =2;
	    system("pause");
	    system("cls");
    }
    else if(score1 == 30){
	    printf("\nYour score is 30 get 40 score to get round 2\n",score1);
    	system("pause");
	    system("cls");
	    goto MAINQ;
    }else if(score1 == 20){
	    printf("\nYour score is 20 get 40 score to get round 2\n",score1);
    	system("pause");
	    system("cls");
	    goto MAINQ;
    }else if(score1 == 10){
	    printf("\n Your score is 10 get 40 score to get round 2\n",score1);
		system("pause");
	    system("cls");
	    goto MAINQ;
    }else if(score1 == 0){
	    printf("\n your score is 0 get 40 score to get round 2\n",score1);
		system("pause");
	    system("cls");
	    goto MAINQ;
    }else{
	    printf("\n Your score is too low get 40 score to get round 2\n",score1);
		system("pause");
	    system("cls");
	    goto MAINQ;
    }

    if( Round == 2){
	Round6:
	system("cls");
    SetConsoleTitle("Category 1 : Quantitative Aptitude");
   
	printf("[Quantitative Aptitude]\n\n");
	printf("Welcome to Challenging round ( Round-2 )\n\n");
	
	printf("\nFirst China War was fought between");
	printf("\n 1 > China and Britain 2 > China and France. 3 > China and Egypt 4 >China and Greek");
	printf("\nEnter Correct Option : ");
	scanf("%d",&q4);
	if(q4 > 4){
		system("cls");
		goto Round6;
	}
	if(q4 == 1){
		score2=10;
		printf("\t\t\t\t\t\t\t Score = %d",score2);
		printf("\n\t\t\t\t\t\t\t Correct Answer");
	}else{
		score2 = 0;
		system("COLOR C0");//red
		Sleep(400);
		system("COLOR 0A"); //black background //green text
        printf("\t\t\t\t\t\t\tScore = %d",score2);
		printf("\n\t\t\t\t\t\t\tWrong Answer");
	}
	
	printf("\nWhat is the Capital of Pakistan");
	printf("\n 1 > Lahore 2 > Quetta 3 > Islamabad 4 >Karachi");
	printf("\nEnter Correct Option : ");
	scanf("%d",&q5);
	if(q5 > 4){
		system("cls");
		goto Round2;
	}
	if(q5 == 3){
		score2=score2+10;
		printf("\t\t\t\t\t\t\t Score = %d",score2);
		printf("\n\t\t\t\t\t\t\t Correct Answer");
	}else{
		score2 = score2-10;
		system("COLOR C0");//red
		Sleep(400);
		system("COLOR 0A"); //black background //green text
        printf("\t\t\t\t\t\t\tScore = %d",score2);
		printf("\n\t\t\t\t\t\t\tWrong Answer");
	}
	
	
	
	printf("\nMicrosoft was founded by?");
	printf("\n 1 > billgates 2 > jeff 3 > steve 4 > mark ");
	printf("\nEnter Correct Option : ");
	scanf("%d",&q6);
	if(q6 > 4){
		system("cls");
		goto Round2;
	}
	
	if(q6 == 1){
		score2=score2+10;
		printf("\t\t\t\t\t\t\t Score = %d",score2);
		printf("\n\t\t\t\t\t\t\t Correct Answer");
	}else{
		score2 = score2-10;
		system("COLOR C0");//red
		Sleep(400);
		system("COLOR 0A"); //black background //green text
        printf("\t\t\t\t\t\t\tScore = %d",score2);
		printf("\n\t\t\t\t\t\t\tWrong Answer");
	}
  return 0;  
   
}

