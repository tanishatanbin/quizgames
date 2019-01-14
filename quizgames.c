#include<windows.h>
#include<stdio.h>
#include<conio.h>
#include<ctype.h>


void displayscore()
 {
 char name[20];
 float s;
 FILE *f;
 system("cls");
 system("COLOR 4A");
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
  system("COLOR 0A");
    printf("\n\n\n\t This game will increase your general knowledge.");
    printf("\n\n\n\t you will enjoy this game.");
    printf("\n\n\n\t If you give wrong answer it will show you right answer.");
    printf("\n\n\n\tscore you will secure. Your score will be calculated and displayed");
    printf("\n\n\tat the end and displayed. If you secure highest score, your score");
    printf("\n\n\twill be recorded. So BEST OF LUCK.");
 }
void writescore(float score, char plnm[20])
 {
 float sc;
 char nm[20];
 FILE *f;
 system("cls");
 f=fopen("score.txt","r");
 fscanf(f,"%s%f",&nm,&sc);
 if (score>=sc)
  { sc=score;
    fclose(f);
    f=fopen("score.txt","w");
    fprintf(f,"%s\n%.2f",plnm,sc);
    fclose(f);
  }
 }
int main()
     {
     int countq,countr;
     int r,i;
     int nq[11];int j;
     float score;
     char choice;
     char playername[20];
     system("cls");
     system("COLOR 1F");
     mainhome:
     system("cls");
     system("COLOR 1F");
     printf("\n\t\t WELCOME TO QUIZ GAME APPS");
        printf("\n\t\t-----------------****************-----------------");
        printf("\n\t\t Enter 'S' To Start Game                          ");
        printf("\n\t\t Enter 'H' To view High Score                     ");
        printf("\n\t\t Enter 'N' To Need Help                           ");
        printf("\n\t\t Enter 'Q' To Quit Games                          ");
        printf("\n\t\t-----------------****************-----------------\n\t\t");
        choice=toupper(getch());
        if (choice=='H')
 {
 displayscore();
 goto mainhome;
 }
     else if (choice=='Q')
 exit(1);
     else if (choice=='N')
 {
 help();
 getch();
 goto mainhome;
 }
   else if(choice=='S'){
     system("cls");
     system("COLOR 0E");

     printf("\n\n\n\t\t\tENTER YOUR NAME");
     printf("\n\t\t\t(Only type your nick name)\n\n\t\t\t");
     gets(playername);

     home:
     system("cls");
     countq=countr=0;
     i=1;
     start:
     r=rand()%21+1;
     nq[i]=r;
     for (j=0;j<i;j++)
 if (nq[j]==r) goto start;
 switch(r)
  {
       case 1:
  printf("\n\nWho is the top goal scorer in champions league?");
  printf("\n\nA.cristiano Ronaldo\tB.messi\n\nC.Neymar\tD.Ronaldinho\n\n");
  countq++;
  if (toupper(getch())=='A')
   {
    printf("\n\nCorrect!!!");
    countr++;
    break;
    }
  else
        {
            printf("\n\nWrong!!! The correct answer is A.cristiano Ronaldo");
        break;
        }
    case 2:
  printf("\n\nWho was the first prime minister of Bangladesh");
  printf("\n\nA.Tajuddin Ahmed\tB.Sheikh Mujibur Rahman\n\nC.Nazrul Islam\tD.Sheikh Hasina\n\n");
  countq++;
  if (toupper(getch())=='A')
   {
    printf("\n\nCorrect!!!");
    countr++;
    break;
    }
  else
        printf("\n\nWrong!!! The correct answer is A.Tajuddin Ahmed");
  break;
  case 3:
  printf("\n\n\nWho was the first US President?");
  printf("\n\nA.Abraham Linkon\tB.Barak Obama\n\nC.George boush \tD.George Washington\n\n");
  countq++;
  if (toupper(getch())=='D')
   {
    printf("\n\nCorrect!!!");
    countr++;
    break;
   }
  else
        {
            printf("\n\nWrong!!! The correct answer is D.George Washington");
          break;
        }
  case 4:
  printf("\n\n\nWhich country won the Fifa World Cup 2002?");
  printf("\n\nA.France\tB.Brazil\n\nC.Italy\tD.Spain\n\n");
  countq++;
  if (toupper(getch())=='B')
   {
    printf("\n\nCorrect!!!");
   countr++;
    break;
    }
  else
        {
        printf("\n\nWrong!!! The correct answer is B.Brazil");
        break;
        }
    case 5:
  printf("\n\n\nWhat is the height of Mount everest in feet?");
  printf("\n\nA.8648\tB.6648\n\nC.8884\tD.8848\n\n");
  countq++;
  if (toupper(getch())=='D')
   {
    printf("\n\nCorrect!!!");
   countr++;
    break;
    }
  else
        {
        printf("\n\nWrong!!! The correct answer is D.8848");
        break;
        }
    case 6:
  printf("\n\n\nwhat is the old name of Dhaka?");
  printf("\n\nA.Dhaka\tB.Tripura\n\nC.Jahangir Nagar\t\tD.Asam\n\n");
  countq++;
  if (toupper(getch())=='C')
   {
    printf("\n\nCorrect!!!");
   countr++;
    break;
    }
  else
        {
            printf("\n\nWrong!!! The correct answer is C. Jahangir Nagar");
            break;
        }
     case 7:
  printf("\n\n\nWhich country will be hosting the Fifa World Cup 2018?");
  printf("\n\nA.South Africa\tB.Italy\n\nC.Argentina\tD.Russia\n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");
   countr++;
    break;
    }
  else
        {printf("\n\nWrong!!! The correct answer is D.Russia");
        break;
        }
     case 8:
  printf("\n\n\nWhat is the capital of Spain?");
  printf("\n\nA.Dhaka\tB.Rome\n\nC.Paris\tD.Madrid\n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");
   countr++;
   break;
   }
  else
        {
            printf("\n\nWrong!!! The correct answer is D.Madrid");
            break;
        }
    case 9:
  printf("\n\n\nWhich is the smallest district in Bangladesh??");
  printf("\n\nA.Dhaka\tB.Comilla\n\nC.jessore\tD.Khulna\n\n");
  countq++;
  if (toupper(getch())=='C')
   {
    printf("\n\nCorrect!!!");
   countr++;
    break;
    }
  else
        {printf("\n\nWrong!!! The correct answer is C.jessore");
        break;
        }
     case 10:
  printf("\n\n\nWhich is the biggest country in The world??");
  printf("\n\nA.Canada\tB.Brazil\n\nC.Russia\tD.America\n\n");
  countq++;
  if (toupper(getch())=='C')
   {
    printf("\n\nCorrect!!!");
   countr++;
    break;
    }
  else
        {printf("\n\nWrong!!! The correct answer is C.Russia");
        break;
        }
     case 11:
  printf("\n\n\nWhich country win the last world cup in football??");
  printf("\n\nA.Germany\tB.Italy\n\nC.Brazil\tD.Spain\n\n");
  countq++;
  if (toupper(getch())=='A')
   {
    printf("\n\nCorrect!!!");
   countr++;
    break;
    }
  else
        {printf("\n\nWrong!!! The correct answer is A.Germany");
        break;
        }
     case 12:
  printf("\n\n\nWhich  is the biggest seaport in Bangladesh??");
  printf("\n\nA.Mongla\tB.ctg\n\nC.kaptai\tD.coxs Bazar\n\n");
  countq++;
  if (toupper(getch())=='B')
   {
    printf("\n\nCorrect!!!");
   countr++;
    break;
    }
  else
        {printf("\n\nWrong!!! The correct answer is B.ctg");
        break;
        }
    case 13:
  printf("\n\n\nWhich country was the winner of Cricket World Cup 2003?");
  printf("\n\nA.West Indies\tB.India\n\nC.Australia\tD.England\n\n");
  countq++;
  if (toupper(getch())=='C')
   {
    printf("\n\nCorrect!!!");
   countr++;
    break;
    }
  else
        {
            printf("\n\nWrong!!! The correct answer is C.Australia");
            break;
        }
        case 14:
  printf("\n\n\nWho was the First player to score 6 successive sixes in an over?");
  printf("\n\nA.Adam Gilchrist\tB.M.S.Dhoni\n\nC.Herschel Gibbs\tD.Sanath Jayasurya\n\n");
  countq++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");
   countr++;
    break;
    }
  else
        {
            printf("\n\nWrong!!! The correct answer is C.Herschel Gibbs");
            break;
        }
     case 15:
  printf("\n\n\nHow many division in Bangladesh??");
  printf("\n\nA.7\tB.8\n\nC.9\tD.6\n\n");
  countq++;
  if (toupper(getch())=='B')
   {
    printf("\n\nCorrect!!!");
   countr++;
    break;
    }
  else
        {printf("\n\nWrong!!! The correct answer is B.8");
        break;
        }
     case 16:
  printf("\n\n\nWhich  is the biggest river in Bangladesh??");
  printf("\n\nA.Padma\tB.Jomuna\n\nC.Meghna\tD.Gomti\n\n");
  countq++;
  if (toupper(getch())=='C')
   {
    printf("\n\nCorrect!!!");
   countr++;
    break;
    }
  else
        {printf("\n\nWrong!!! The correct answer is C. Meghna");
        break;
        }
     case 17:
  printf("\n\n\nWho is the highest goal scorer in Real Madrid??");
  printf("\n\nA.Cristiano Ronaldo\tB.Kaka\n\nC.Benzema\tD.Raul\n\n");
  countq++;
  if (toupper(getch())=='A')
   {
    printf("\n\nCorrect!!!");
   countr++;
    break;
    }
  else
        {printf("\n\nWrong!!! The correct answer is A. Cristiano Ronaldo");
        break;
        }
     case 18:
  printf("\n\n\nwho is the top goal scorer in world cup??");
  printf("\n\nA.Ronaldo\tB.Pele\n\nC.Moller\tD.Miroslav Klose\n\n");
  countq++;
  if (toupper(getch())=='D')
   {
    printf("\n\nCorrect!!!");
   countr++;
    break;
    }
  else
        {printf("\n\nWrong!!! The correct answer is D. Miroslav Klose");
        break;
        }
    case 19:
  printf("\n\n\nHow many country in the world??");
  printf("\n\nA.195\tB.200\n\nC.205\tD.203\n\n");
  countq++;
  if (toupper(getch())=='A')
   {
    printf("\n\nCorrect!!!");
   countr++;
    break;
    }
  else
        {printf("\n\nWrong!!! The correct answer is A. 195");
        break;
        }
    case 20:
  printf("\n\n\nwho is the 16th president of Bangladesh??");
  printf("\n\nA.Abdul Hamid\tB.Zillur Rahman \n\nC.Hussain Muhammad Ershad\tD.Iajuddin Ahmed\n\n");
  countq++;
  if (toupper(getch())=='A')
   {
    printf("\n\nCorrect!!!");
   countr++;
    break;
    }
  else
        {printf("\n\nWrong!!! The correct answer is A. Abdul Hamid");
        break;
        }
    case 21:
  printf("\n\n\nwhat is the correct ans of 6/2(2+1)?");
  printf("\n\nA.1\tB.8\n\nC.9\tD.6\n\n");
  countq++;
  if (toupper(getch())=='C')
   {
    printf("\n\nCorrect!!!");
   countr++;
    break;
    }
  else
        {
        printf("\n\nWrong!!! The correct answer is C. 9");
        break;
        }

}
 i++;
 if (i<=5) goto start;
 score=(float)countr/countq*100;
 if (score<0) score=0;
 printf("\n\n\nYour Score: %.2f",score);
 if (score==100) printf("\n\nEXCELLENT");
 else if (score>=80 && score<100) printf("\n\nVERY GOOD!");
 else if (score>=60 &&score<80) printf("\n\nGOOD! BUT YOU NEED TO IMPROVE");
 else if (score>=40 && score<60) printf("\n\nSATISFACTORY RESULT, BUT THIS MUCH IS MUCH SUFFICIENT.");
 else printf("\n\nYOU ARE VERY POOR IN QUIZ GAME WORK HARD");
 printf("\n\nNEXT PLAY?(Y/N)");
 if (toupper(getch())=='Y')
  goto home;
 else
  {
  writescore(score,playername);
  goto mainhome;
  }
 }
     else
 {
 printf("\n\n\t\t  Enter the right key\n\n\t\t  ");

 goto mainhome;
 }
 return 0;
}
