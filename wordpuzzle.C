#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void loading()
{
	int i,gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
	outtextxy(177,180,"Loading...Word Puzzle");
	for(i=190;i<510;i++){
	delay(20);
	line(i,210,i,230);
	}
	closegraph();
	getch();
}
void printmsg()
{
	int gdriver=DETECT,gmode,i;
	initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");
	for(i=3;i<9;i++)
	{
	setcolor(i);
	settextstyle(i,0,i);
	outtextxy(100,20*i,"Word \n Puzzle");
	delay(500);
	}
}
void level1()
{
	char ans[10];
	int p=0,t=6,o,i;
	 int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	printf("\n\t\t\t\t N Z J E M M S ");
	delay(500);
	printf("\n\t\t\t\t U E U A E A A");
	delay(500);
	printf("\n\t\t\t\t R V P R R R T");
	delay(500);
	printf("\n\t\t\t\t A E I T C S U");
	delay(500);
	printf(" \n\t\t\t\t N N T H U H R");
	delay(500);
	printf("\n\t\t\t\t U U E F R N N");
	delay(500);
	printf(" \n\t\t\t\t S S R Z Y V E");
	delay(500);
	printf("\n\n\n\n\n Names of planets are given above");
	delay(1000);
	printf("\n1)Biggest in Universe ? Who am I ?");
	scanf("%s",ans);
	if(strcmp(ans,"jupiter")==0){
	p+=10;
		printf("\nCongrats you scored: %d points",p);
		for(i=1;i<=7;i++){
		sound(i*100);
		delay(200);
		}
		nosound();
	}else{

		for(i=1;i<=2;i++){
		sound(i*100);
		delay(200);
		}
		nosound();
		printf("\nWrong try again");
		t--;
		printf("\nYou have only %d turns left",t);
		}
	printf("\n2) People planning to occupy me!Who am I?");
	scanf("%s",ans);
	if(strcmp(ans,"mars")==0){
		p+=10;
		printf("\nCongrats you scored: %d points",p);
		for(i=1;i<=7;i++){
		sound(i*100);
		delay(200);
		}
		nosound();

	}else{
		for(i=1;i<=3;i++){
		sound(i*100);
		delay(200);
		}
		nosound();
		printf("\nYour score stays with %d points",p);
		printf("\nWrong answer");
		t--;
		printf("\n%d turn left",t);
	}
	printf("\n3) I have a cracker like object around me!Who am i?");
	scanf("%s",ans);
	if(strcmp(ans,"saturn")==0){
		p+=10;
		printf("\nCongrats you scored: %d points",p);
		for(i=1;i<=7;i++){
			sound(i*100);
			delay(200);
		}
		nosound();
	}else{
			for(i=1;i<=3;i++){
			sound(i*100);
			delay(200);
		}
		nosound();
		printf("\nYour score stays with %d points",p);
		t--;
		printf("\nYou %d turns",t);
		}
	printf("\n4) I'm a chemical compound!Who am I?");
	scanf("%s",ans);
	if(strcmp(ans,"mercury")==0){
		p+=10;
		printf("\nCongrats you scored: %d points",p);
		for(i=1;i<=7;i++){
		sound(i*100);
		delay(200);
		}
		nosound();
	}else{
		for(i=1;i<=3;i++){
		sound(i*100);
		delay(200);
		}
		nosound();
		printf("\a");
		printf("\nYour score stays with %d points",p);
		t--;
		printf("\nYour turns: %d",t);
	}
	printf("\n5) Im the gift from god! Who am I?");
	scanf("%s",ans);
	if(strcmp(ans,"earth")==0){
		p+=10;
		printf("Your score: %d",p);
		for(i=1;i<=7;i++){
		sound(i*100);
		delay(200);
		}
		nosound();
	}
	else{
		printf("Your score stays with : %d points",p);
		t--;
		printf("Turns left: %d",t);
		for(i=1;i<=3;i++){
		sound(i*100);
		delay(200);
		}
		nosound();
	}
	if(p>=30){
		clrscr();
		initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
		settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
		setbkcolor(MAGENTA);
		outtextxy(40,150,"you are eligible to play the level-2!");
	outtextxy(177,180,"Level - 2");
	for(i=190;i<510;i++){
	delay(30);
	line(i,210,i,230);
	}
	closegraph();
	clrscr();
	printf("\n\t\t\t\t\tP D E N N I S");
	delay(500);
	printf("\n\t\t\t\t\tY B J A R N E");
	delay(500);
	printf("\n\t\t\t\t\tT R U B Y A G");
	delay(500);
	printf("\n\t\t\t\t\tH T N G E S T");
	delay(500);
	printf("\n\t\t\t\t\tO I A J K A R");
	delay(500);
	printf("\n\t\t\t\t\tN E L C A R O");
	delay(500);
	printf("\n 1) Im a famous stone!Who am I?");
		scanf("%s",ans);
	if(strcmp(ans,"ruby")==0){
		p+=10;
		printf("Your score: %d",p);
		for(i=1;i<=7;i++){
		sound(i*100);
		delay(200);
		}
		nosound();
	}
	else{
		printf("Your score stays with : %d points",p);
		t--;
		printf("\nTurns left: %d",t);
		for(i=1;i<=3;i++){
		sound(i*100);
		delay(200);
		}
		nosound();
	}
	printf("\n2)Im the founder of the language you learn now!Who am I?");
	scanf("%s",ans);
	if(strcmp(ans,"dennis")==0){
		p+=10;
		printf("Your score: %d",p);
		for(i=1;i<=7;i++){
		sound(i*100);
		delay(200);
		}
		nosound();
	}
	else{
		printf("Your score stays with : %d points",p);
		t--;
		printf("\nTurns left: %d",t);
		for(i=1;i<=3;i++){
		sound(i*100);
		delay(200);
		}
		nosound();
	}
	printf("\n3)Im a famous language!Who am I?");
	scanf("%s",ans);
	if(strcmp(ans,"python")==0){
		p+=10;
		printf("\nYour score: %d",p);
		for(i=1;i<=7;i++){
		sound(i*100);
		delay(200);
		}
		nosound();
	}
	else{
		printf("Your score stays with : %d points",p);
		t--;
		printf("\nTurns left: %d",t);
		for(i=1;i<=3;i++){
		sound(i*100);
		delay(200);
		}
		nosound();
	}
	printf("\n4)I found the language where its name ends with ++! Who am I?");
	scanf("%s",ans);
	if(strcmp(ans,"bjarne")==0){
		p+=10;
		printf("Your score: %d",p);
		for(i=1;i<=7;i++){
		sound(i*100);
		delay(200);
		}
		nosound();
	}
	else{
		printf("Your score stays with : %d points",p);
		t--;
		printf("\nTurns left: %d",t);
		for(i=1;i<=3;i++){
		sound(i*100);
		delay(200);
		}
		nosound();
	}
	printf("\n5) Im a cloud application and cloud platform!Who am I?");
	scanf("%s",ans);
	if(strcmp(ans,"oracle")==0){
		p+=10;
		printf("Your score: %d",p);
		for(i=1;i<=7;i++){
		sound(i*100);
		delay(200);
		}
		nosound();
	}
	else{
		printf("Your score stays with : %d points",p);
		t--;
		printf("\nTurns left: %d",t);
		for(i=1;i<=3;i++){
		sound(i*100);
		delay(200);
		}
		nosound();
	}
       }	else{
	while((t<=0)||(p<=30)){

		delay(2000);
		clrscr();
		initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
		settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
		setbkcolor(LIGHTRED);
		outtextxy(100,150,"Do you want to play again?");
		outtextxy(177,180,"Yes(1)   No(0)");
		scanf("%d",&o);
		closegraph();
		if(o==1){
		clrscr();
		level1();
		}else{
		exit(0);
		}
	}
	}
}
int home()
{
	int i,gd=DETECT,gm,n;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	setbkcolor(GREEN);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
	outtextxy(177,100,"WORD PUZZLE");
	for(i=1;i<=8;i++)
	 {
		if(i%2==0)
		{
			sound(i*100);
			delay(200);
		}
	 }
	nosound();
	delay(500);
	outtextxy(177,150,"Play(2)");
	outtextxy(177,200,"Exit(3)");
	delay(500);
	for(i=1;i<=8;i++)
	{
	  if(i%2!=0)
	  {
	      sound(i*100);
	      delay(200);
	  }
	}
	nosound();
	outtextxy(177,230,"Enter your choice:");
	scanf("%d",&n);
	closegraph();
	getch();
	return(n);
}
void level1p()
{
	int i,gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
	outtextxy(177,180,"Level - 1");

	closegraph();
	getch();
}
void gameover()
{

	int i,gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	setbkcolor(RED);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
	outtextxy(177,180,"GAME OVER...!!!");
	for(i=1;i<=20;i++)
	 {
		if(i%2==0)
		{
			sound(i*100);
			delay(200);
		}
	 }
	nosound();
	delay(500);
	closegraph();
	getch();

}
void thank()
{
	int i,gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	setbkcolor(CYAN);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
	outtextxy(177,180,"Thanks for playing");
	for(i=1;i<=20;i++)
	 {
		if(i%2==0)
		{
			sound(i*100);
			delay(200);
		}
		else
		{
		  sound(i*1000);
		  delay(100);
		}
	 }
	nosound();
	delay(500);
	closegraph();
}
void main()
{
	int n;
	int i,gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	loading();
	delay(500);
	printmsg();
	clrscr();
	n=home();
	if(n==2){
	level1p();
	clrscr();
	level1();
	gameover();
	}
	else
	{
	clrscr();
	thank();
	}
 getch();
}

