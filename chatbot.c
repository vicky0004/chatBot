#include <stdio.h>
#include <string.h>

void namestar(void);
char name[50];
int main(){
	char buff[20],state[50],sport[50]={'0'},ch[10];	
	int exit=1;
	
	system("color B4");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tMade with %c by Vicky....",3);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t(press enter to continue chat)");
	gets(buff);
	
		system("CLS");
		system("color B0");
		printf("\t\t\t\t\t\t\t\t\thello....\n");
			sleep(1);
		printf("\t\t\t\t\t\t\t\t\tI'm a catbot %c %c.\n",2,1);
		printf("\t\t\t\t\t\t\t\t\tversion --1.43.2--\n");
			sleep(1);
		printf("\t\t\t\t\t\t\t\t\tWelcome to you in Centurion University.\n");
			sleep(2);
		printf("\n\t\t\t\t\t\t\t\t\tPlease tell your name?\n");
		gets(name);
		printf("\t\t\t\t\t\t\t\t\tGood Morning, %s\n",name);
			sleep(1);
		printf("\t\t\t\t\t\t\t\t\tYou are a intelligent person.\n");
		printf("\t\t\t\t\t\t\t\t\tBecause you are chating with a computer.\n");
			sleep(3);
		printf("\n\t\t\t\t\t\t\t\t\tWhich state are you from?\n");
		gets(state);
			sleep(1);
		if(state[0]=='\0' || !(strcmp(state,"none")) ||!(strcmp(state,"null")) ||!(strcmp(state,"n"))){
			printf("\n\t\t\t\t\t\t\t\t\tOk");
		}
		else if(!(strcmp(state,"Bihar")) || !(strcmp(state,"bihar"))){
			sleep(1);
			printf("\t\t\t\t\t\t\t\t\tWow,%s is a nice place.\n",state);
			sleep(1);
			printf("\t\t\t\t\t\t\t\t\tI like litti chokha of bihar\n");
			printf("\t\t\t\t\t\t\t\t\tI want to go Bodh Gaya\n");
			
		}
		else if(!(strcmp(state,"Odisha")) || !(strcmp(state,"odisha")) || !(strcmp(state,"odisa")) || !(strcmp(state,"Odisa"))){
			printf("\t\t\t\t\t\t\t\t\tWow,%s is a lovely place of India.\n",state);
			printf("\t\t\t\t\t\t\t\t\tI like chhena Poda sweet of odisha.\n");
			printf("\t\t\t\t\t\t\t\t\tThis is the state of Centurion University.\n");
		}
		else if(!(strcmp(state,"Andhra Pradesh")) || !(strcmp(state,"andhra pradesh")) || !(strcmp(state,"ap")) || !(strcmp(state,"AP")) || !(strcmp(state,"A.P.")) || !(strcmp(state,"Ap"))){
			printf("\t\t\t\t\t\t\t\t\tWow,%s is the wonderful state of India.\n",state);
			printf("\t\t\t\t\t\t\t\t\tI love to go tirupti.\n");
		}
		else if(!(strcmp(state,"Jharkhand")) || !(strcmp(state,"jharkhand"))){
			printf("\t\t\t\t\t\t\t\t\tWow,%s is a beutiful state of India.\n",state);
			printf("\t\t\t\t\t\t\t\t\tHow is the steel city now..\n");
		}
		else{
			printf("\t\t\t\t\t\t\t\t\tWow,%s is most beutifull state of india.\n",state);
			printf("\t\t\t\t\t\t\t\t\tI will always wanted to go there.\n");
		}
		
		sleep(2);
		printf("\n\t\t\t\t\t\t\t\t\tWhich is your favourite sport ?\n");
		gets(sport);
		if(sport[0]=='\0' || !(strcmp(sport,"none")) ||!(strcmp(sport,"null")) ||!(strcmp(sport,"no"))){
			exit=0;
		}
		else{
			sleep(1);
			printf("\t\t\t\t\t\t\t\t\tI also love %s.\n",sport);
			sleep(1);
			printf("\t\t\t\t\t\t\t\t\tIn Centurion University we have Cricket ground,\n");
			printf("\t\t\t\t\t\t\t\t\tFootball Ground,Basketball court,Tennis court,\n");
			printf("\t\t\t\t\t\t\t\t\tVolleyball court also many indoor/Outdoor games.\n");
			printf("\t\t\t\t\t\t\t\t\tHere we have lots of fun %c along with study.\n",14);
		}
		sleep(2);
		printf("\n\n\t\t\t\t\t\tAll the best %s ...\n",name);
		printf("\t\t\t\tEngineering is the closest thing to magic that exist in the world.\n\n");
		printf("hey i have something special for you(wait..) ");
		sleep(3);
		namestar();
	
	return 0;
}


void namestar(){
	int i;
	int len=strlen(name);
  while(1){
		system("CLS");
		system("color E1");
		printf("\n\t\t\t\t\t\t------Thank You %s------\n",name);
		printf("\n%c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c",3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3);
		printf("\n\n\n\n\n");
  for(i=0;i<len;i++)
  {
    name[i]=toupper(name[i]);
  }
  for(i=0;i<len;i++)
  {
    if(name[i]=='A'|| name[i]=='B' || name[i]=='C'|| name[i]=='E'|| name[i]=='F' || name[i]=='G'|| name[i]=='I'|| name[i]=='J' || name[i]=='O'|| name[i]=='P'|| name[i]=='Q' || name[i]=='R'|| name[i]=='S'|| name[i]=='T'|| name[i]=='Z')
    {
      printf("   *****");
    }
    else if(name[i]=='H' || name[i]=='K'|| name[i]=='M' || name[i]=='N' || name[i]=='U'|| name[i]=='V'|| name[i]=='W'|| name[i]=='X'|| name[i]=='Y')
    {
      printf("   *   *");
    }
    else if(name[i]=='D')
    {
      printf("       *");
    }
    else if(name[i]=='L')
    {
      printf("   *    ");
    }
  }
  printf("\n");
  for(i=0;i<len;i++)
  {
    if(name[i]=='A'|| name[i]=='B' || name[i]=='G'|| name[i]=='H'|| name[i]=='O' || name[i]=='P'|| name[i]=='Q'|| name[i]=='R' || name[i]=='U'|| name[i]=='V'|| name[i]=='W')
    {
      printf("   *   *");
    }
    else if(name[i]=='C'|| name[i]=='E' || name[i]=='F'|| name[i]=='L'|| name[i]=='S')
    {
      printf("   *    ");
    }
    if(name[i]=='M')
    {
      printf("   ** **");
    }
    else if(name[i]=='Y')
    {
      printf("    * * ");
    }
    else if(name[i]=='K')
    {
      printf("   *  * ");
    }
    else if(name[i]=='I'||name[i]=='J'||name[i]=='T')
    {
      printf("     *  ");
    }
    else if(name[i]=='D')
    {
      printf("       *");
    }
    else if(name[i]=='N')
    {
      printf("   **  *");
    }
    else if(name[i]=='Z')
    {
      printf("      * ");
    }
    else if(name[i]=='X')
    {
      printf("        ");
    }
  }
  printf("\n");
  for(i=0;i<len;i++)
  {
    if(name[i]=='A'|| name[i]=='B' || name[i]=='G'|| name[i]=='H'||name[i]=='N'|| name[i]=='O' || name[i]=='P'|| name[i]=='Q'|| name[i]=='R' || name[i]=='U'|| name[i]=='V'|| name[i]=='W')
    {
      printf("   *   *");
    }
    else if(name[i]=='C'|| name[i]=='E' || name[i]=='F'|| name[i]=='L'|| name[i]=='S')
    {
      printf("   *    ");
    }
    if(name[i]=='M')
    {
      printf("   * * *");
    }
    else if(name[i]=='Y')
    {
      printf("     *  ");
    }
    else if(name[i]=='K')
    {
      printf("   * *  ");
    }
    else if(name[i]=='I'||name[i]=='J'||name[i]=='T')
    {
      printf("     *  ");
    }
    else if(name[i]=='D')
    {
      printf("       *");
    }
    else if(name[i]=='X')
    {
      printf("    * * ");
    }
    else if(name[i]=='Z')
    {
      printf("        ");
    }
  }
  printf("\n");
  for(i=0;i<len;i++)
  {
    if(name[i]=='A'|| name[i]=='B'|| name[i]=='D'|| name[i]=='E' || name[i]=='F'|| name[i]=='G'|| name[i]=='H'|| name[i]=='P'|| name[i]=='Q'|| name[i]=='R'|| name[i]=='S' )
    {
      printf("   *****");
    }
    else if(name[i]=='C')
    {
      printf("   *    ");
    }
    if(name[i]=='M'|| name[i]=='O'|| name[i]=='V'|| name[i]=='W'|| name[i]=='U')
    {
      printf("   *   *");
    }
    else if(name[i]=='Z')
    {
      printf("     *  ");
    }
    else if(name[i]=='K')
    {
      printf("   **   ");
    }
    else if(name[i]=='I'||name[i]=='J'||name[i]=='T'|| name[i]=='Y')
    {
      printf("     *  ");
    }
    else if(name[i]=='L')
    {
      printf("   *    ");
    }
    else if(name[i]=='N')
    {
      printf("   * * *");
    }
    else if(name[i]=='X')
    {
      printf("     *  ");
    }
  }
  printf("\n");
  for(i=0;i<len;i++)
  {
    if(name[i]=='A'|| name[i]=='B'|| name[i]=='D'|| name[i]=='H' || name[i]=='M'|| name[i]=='N'|| name[i]=='O'||name[i]=='U'|| name[i]=='V')
    {
      printf("   *   *");
    }
    else if(name[i]=='C'|| name[i]=='E'|| name[i]=='F'|| name[i]=='L'|| name[i]=='P')
    {
      printf("   *    ");
    }
    if(name[i]=='G'|| name[i]=='Q'|| name[i]=='S')
    {
      printf("       *");
    }
    else if(name[i]=='K')
    {
      printf("   * *  ");
    }
    else if(name[i]=='I'||name[i]=='J'||name[i]=='T'|| name[i]=='Y')
    {
      printf("     *  ");
    }
    else if(name[i]=='R')
    {
      printf("   * *  ");
    }
    else if(name[i]=='W')
    {
      printf("   * * *");
    }
    else if(name[i]=='X')
    {
      printf("    * * ");
    }
    else if(name[i]=='Z')
    {
      printf("        ");
    }
  }
  printf("\n");
  for(i=0;i<len;i++)
  {
    if(name[i]=='A'|| name[i]=='B'|| name[i]=='D'|| name[i]=='H' || name[i]=='M'|| name[i]=='O'||name[i]=='U'|| name[i]=='V')
    {
      printf("   *   *");
    }
    else if(name[i]=='C'|| name[i]=='E'|| name[i]=='F'|| name[i]=='L'|| name[i]=='P')
    {
      printf("   *    ");
    }
    if(name[i]=='G'|| name[i]=='Q'|| name[i]=='S')
    {
      printf("       *");
    }
    else if(name[i]=='K')
    {
      printf("   *  * ");
    }
    else if(name[i]=='I'||name[i]=='T'|| name[i]=='Y')
    {
      printf("     *  ");
    }
    else if(name[i]=='R')
    {
      printf("   *  * ");
    }
    else if(name[i]=='W')
    {
      printf("   ** **");
    }
    else if(name[i]=='J')
    {
      printf("   * *  ");
    }
    else if(name[i]=='N')
    {
      printf("   *  **");
    }
    else if(name[i]=='Z')
    {
      printf("    *    ");
    }
    else if(name[i]=='X')
    {
      printf("        ");
    }
  }
  printf("\n");
  for(i=0;i<len;i++)
  {
    if(name[i]=='B'|| name[i]=='C'|| name[i]=='D'|| name[i]=='E' || name[i]=='G'|| name[i]=='I'|| name[i]=='O'||name[i]=='L'|| name[i]=='S'|| name[i]=='U'|| name[i]=='Z')
    {
      printf("   *****");
    }
    else if(name[i]=='A'|| name[i]=='H'|| name[i]=='M'|| name[i]=='N')
    {
      printf("   *   *");
    }
    if(name[i]=='F'|| name[i]=='P')
    {
      printf("   *    ");
    }
    else if(name[i]=='J')
    {
      printf("   ***  ");
    }
    else if(name[i]=='K'||name[i]=='R')
    {
      printf("   *   *");
    }
    else if(name[i]=='Q')
    {
      printf("       *");
    }
    else if(name[i]=='T'|| name[i]=='V'|| name[i]=='Y')
    {
      printf("     *  ");
    }
    else if(name[i]=='W'||name[i]=='X')
    {
      printf("   *   *");
    }
  }
	sleep(1);	
	}
}
