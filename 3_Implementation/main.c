#include <stdio.h>

#include <windows.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <dos.h>
#include "help.h"
#include "displayscore.h"

int displayscore();
int help();

int main(){
    char playername[20];
    int score1=0,score2=0,Round;
    int cgry1; int cgry2; int cgry3;
    int mopt;
    int opt;
    int q1,q2,q3,q4,q5,q6,q7,q8,q9,q10,q11,q12,q13,q14,q15,q16,q17,q18;
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
	
	printf("Q1 : The world largest Desert is ?\n");
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

	printf("\n Q2 : Which of the following was the place of Nirvana of the 23rd Jain Tirthankara Parshwanath?\n");
	printf("1 > Pavapuri 2 > Silver 3 > Mount Ashtapada 4 > Samet Shikhar\n");
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
	
	
	
	printf("\n Q3 : Country that has the highest in Barley Production ?");
	printf("\n1 > china 2 > Pakistan 3 > Russia 4 > France");
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
	
	printf("\n Q4 : First China War was fought between");
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
	
	printf("\n Q5 : Who among the following won the Nobel Prize in Physics 2020?");
	printf("\n 1 > Roger Penrose 2 > Reinhard Genzel 3 > Andrea Ghez 4 > All the above");
	printf("\n Enter Correct Option : ");
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
	
	
	
	printf("\n Q6 : Microsoft was founded by?");
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
	
	printf("Q7 : The total of the ages of Amar, Akbar and anthony is 80 years. What was the total of their ages 3years ago?\n");
	printf("1 > 71 2 > 72 3 > 74 4 > 77\n");
	printf("Enter Correct Option : ");
	scanf("%d",&q1);
	if( q7 > 4){
		system("cls");
		goto cgry2;
	}

    if (q7 == 3){
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

	printf("\n Q8 : Which of the word which best expresses the meaning of the given word EMBEZZLE. ?\n");
	printf("1 > Misappropriate 2 > Balance 3 > Remunerate 4 > Clear\n");
	printf("Enter Correct Option : ");
	scanf("%d",&q2);
	if( q8 > 4){
		system("cls");
		goto cgry2;
	}

    if (q8 == 2){
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
	
	
	printf("\n Q9 : Choose the correct meaning of proverb/idiom- To keeps one's temper");
	printf("\n1 > To become hungry 2 > To be in good mood 3 > To preserve ones energy 4 > To be aloof from");
	printf("\nEnter Correct option : ");
	scanf("%d",&q9);
		if(q9 > 4)
	{
		system("cls");
		goto cgry2;
	}
	if(q9==3)
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
	
	printf("\n Q10 : What is the product of all the numbers in the dial of a telephone ?");
	printf("\n 1 > 1,58,480 2 > 1,59,450 3 > 1.59.480 4 > None of these");
	printf("\nEnter Correct Option : ");
	scanf("%d",&q10);
	if(q10 > 4){
		system("cls");
		goto Round4;
	}
	if(q10 == 1){
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
	
	printf("\n Q11 : Look at this series: 5.2, 4.8, 4.4, 4, ... What number should come next?");
	printf("\n 1 > 3 2 > 3.3 3 > 3.5 4 > 3.6");
	printf("\nEnter Correct Option : ");
	scanf("%d",&q11);
	if(q11 > 4){
		system("cls");
		goto Round2;
	}
	if(q11 == 3){
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
	
	
	
	printf("\n Q12 : Select the pair which has the same relationship as- DIVA:OPERA");
	printf("\n 1 > producer:theatre 2 > director:drama 3 > conductor:bus 4 > thespian:play ");
	printf("\nEnter Correct Option : ");
	scanf("%d",&q12);
	if(q12 > 4){
		system("cls");
		goto Round2;
	}
	
	if(q12 == 1){
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
	
	printf(" Q13 : Find the greatest number that will divide 43, 91 and 183 so as to leave the same remainder in each case.\n");
	printf("1 > 4 > 7 3 > 9 4 > 13\n");
	printf("Enter Correct Option : ");
	scanf("%d",&q13);
	if( q13 > 4){
		system("cls");
		goto cgry3;
	}

    if (q13 == 3){
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

	printf("\n Q14 : In the first 10 overs of a cricket game, the run rate was only 3.2. What should be the run rate in the remaining 40 overs to reach the target of 282 runs?\n");
	printf("1 > 6.25 2 > 6.5 3 > 6.75 4 > 7\n");
	printf("Enter Correct Option : ");
	scanf("%d",&q14);
	if( q14 > 4){
		system("cls");
		goto cgry3;
	}

    if (q14 == 2){
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
	
	
	
	printf("\nQ15 : Two numbers are respectively 20% and 50% more than a third number. The ratio of the two numbers is:");
	printf("\n1 > 2:5 2 > 3:5 3 > 4:5 4 > 6:7");
	printf("\nEnter Correct option : ");
	scanf("%d",&q15);
		if(q15 > 4)
	{
		system("cls");
		goto cgry3;
	}
	if(q15==3)
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
	
	printf("\nQ16 : First China War was fought between");
	printf("\n 1 > China and Britain 2 > China and France. 3 > China and Egypt 4 >China and Greek");
	printf("\nEnter Correct Option : ");
	scanf("%d",&q16);
	if(q16 > 4){
		system("cls");
		goto Round6;
	}
	if(q16 == 1){
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
	
	printf("\nQ17 : Out of 7 consonants and 4 vowels, how many words of 3 consonants and 2 vowels can be formed?");
	printf("\n 1 > 210 2 > 1050 3 > 25200 4 > 21400 \n");
	printf("\nEnter Correct Option : ");
	scanf("%d",&q17);
	if(q17 > 4){
		system("cls");
		goto Round2;
	}
	if(q17 == 3){
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
	
	
	
	printf("\nQ18 : What is the probability of getting a sum 9 from two throws of a dice?");
	printf("\n 1 > 1/6 2 > 1/8 3 > 1/9 4 > 1/12 ");
	printf("\nEnter Correct Option : ");
	scanf("%d",&q18);
	if(q18 > 4){
		system("cls");
		goto Round2;
	}
	
	if(q18 == 1){
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
	printf("\nDo you to play again? If yes, Select option 1 or else selcet 5 ");
	printf("\nEnter Option : ");
    scanf("%d",&mopt);
	if ( mopt==1){
		goto MAINQ;
	
	}
	else {
		goto MAINQ;
	}
	printf("Game over");
	

  return 0;  
	}
	}
	}
}
