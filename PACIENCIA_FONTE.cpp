#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<conio2.h>
#include<windows.h>
#include <time.h>

#include"TAD_PACIENCIA.h"

void LayoutMenu()
{
	system("cls");
	int c,l,C[3],L[3];
	C[0]=1; C[1]=20; C[2]=80;
	L[0]=1; L[1]=5; L[2]=25;
	for(c=C[0];c<C[2];c++)
	{
		l=L[0];
		gotoxy(c,l);
		printf("%c",205);
		l=L[1];
		gotoxy(c,l);
		printf("%c",205);
		l=L[2];
		gotoxy(c,l);
		printf("%c",205);
	}
	for(l=L[0];l<L[2];l++)
	{
		c=C[0];
		gotoxy(c,l);
		printf("%c",186);
		c=C[1];
		if(l>5)
		{
			gotoxy(c,l);
			printf("%c",186);
		}
		c=C[2];
		gotoxy(c,l);
		printf("%c",186);
	}
	c=C[0];
	l=L[0];
	gotoxy(c,l);
	printf("%c",201);
	l=L[1];
	gotoxy(c,l);
	printf("%c",204);
	l=L[2];
	gotoxy(c,l);
	printf("%c",200);
	
	
	c=C[1];
	l=L[0];
	gotoxy(c,l);
	printf("%c",205);
	l=L[1];
	gotoxy(c,l);
	printf("%c",203);
	l=L[2];
	gotoxy(c,l);
	printf("%c",202);
		
	c=C[2];
	l=L[0];
	gotoxy(c,l);
	printf("%c",187);	
	l=L[1];
	gotoxy(c,l);
	printf("%c",185);
	l=L[2];
	gotoxy(c,l);
	printf("%c",188);
	
	
	
	gotoxy(1,40);	
}

void FazerP(int c, int l)
{
	gotoxy(c,l);
	printf("%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,187);
	l++;
	gotoxy(c,l);
	printf("%c        %c",186,186);
	l++;
	gotoxy(c,l);
	printf("%c        %c",186,186);
	l++;
	gotoxy(c,l);
	printf("%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,188);
	l++;
	gotoxy(c,l);
	printf("%c",186);
	l++;
	gotoxy(c,l);
	printf("%c",186);
	l++;
	gotoxy(c,l);
	printf("%c",202);
}

void FazerA(int c, int l)
{
	gotoxy(c,l);
	printf("%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,187);
	l++;
	gotoxy(c,l);
	printf("%c        %c",186,186);
	l++;
	gotoxy(c,l);
	printf("%c        %c",186,186);
	l++;
	gotoxy(c,l);
	printf("%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,185);
	l++;
	gotoxy(c,l);
	printf("%c        %c",186,186);
	l++;
	gotoxy(c,l);
	printf("%c        %c",186,186);
	l++;
	gotoxy(c,l);
	printf("%c        %c",202,202);
}

void FazerC(int c, int l)
{
	gotoxy(c,l);
	printf("%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,187);
	l++;
	gotoxy(c,l);
	printf("%c",186);
	l++;
	gotoxy(c,l);
	printf("%c",186);
	l++;
	gotoxy(c,l);
	printf("%c",186);
	l++;
	gotoxy(c,l);
	printf("%c",186);
	l++;
	gotoxy(c,l);
	printf("%c",186);
	l++;
	gotoxy(c,l);
	printf("%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,188);
}

void FazerI(int c, int l)
{
	gotoxy(c,l);
	printf("%c",169);
	l++;
	gotoxy(c,l);
	printf("%c",186);
	l++;
	gotoxy(c,l);
	printf("%c",186);
	l++;
	gotoxy(c,l);
	printf("%c",186);
	l++;
	gotoxy(c,l);
	printf("%c",186);
	l++;
	gotoxy(c,l);
	printf("%c",186);
	l++;
	gotoxy(c,l);
	printf("%c",202);
}

void FazerE(int c, int l)
{
	gotoxy(c,l);
	printf("%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,187);
	l++;
	gotoxy(c,l);
	printf("%c",186);
	l++;
	gotoxy(c,l);
	printf("%c",186);
	l++;
	gotoxy(c,l);
	printf("%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,185);
	l++;
	gotoxy(c,l);
	printf("%c",186);
	l++;
	gotoxy(c,l);
	printf("%c",186);
	l++;
	gotoxy(c,l);
	printf("%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,188);
}

void FazerN(int c,int l)
{
	gotoxy(c,l);
	printf("%c%c%c      %c",201,205,187,203);
	l++;
	gotoxy(c,l);
	printf("%c %c%c     %c",186,200,187,186);
	l++;
	gotoxy(c,l);
	printf("%c  %c%c    %c",186,200,187,186);
	l++;
	gotoxy(c,l);
	printf("%c   %c%c   %c",186,200,187,186);
	l++;
	gotoxy(c,l);
	printf("%c    %c%c  %c",186,200,187,186);
	l++;
	gotoxy(c,l);
	printf("%c     %c%c %c",186,200,187,186);
	l++;
	gotoxy(c,l);
	printf("%c      %c%c%c",202,200,205,188);
}

void CriarMesa(int ci,int li,int cf,int lf)
{
	int x,y;
	textcolor(2);
	textbackground(2);
	for(x=ci+1;x<cf;x++)
	{
		for(y=li+1;y<lf;y++)
		{
			gotoxy(x,y);
			printf(".");
		}
	}
	textcolor(4);
	textbackground(6);//4,6
	for(x=ci;x<=cf;x++)
	{
		y=li;
		gotoxy(x,y);
		printf("%c",177);
		y=lf;
		gotoxy(x,y);
		printf("%c",177);
	}
	for(y=li;y<=lf;y++)
	{
		
		x=ci;
		gotoxy(x,y);
		printf("%c",177);
		x=ci-1;
		gotoxy(x,y);
		printf("%c",177);
		x=cf;
		gotoxy(x,y);
		printf("%c",177);
		x=cf+1;
		gotoxy(x,y);
		printf("%c",177);
	}
	textcolor(0);
	textbackground(0);
}

void ColocarCarta(int ci,int li,int cf,int lf,int fundo, int contorno)
{
	int x,y;
	textcolor(contorno);
	textbackground(2);//4,6
	for(x=ci+1;x<cf;x++)
	{
		y=li;
		gotoxy(x,y);
		printf("%c",220);
		y=lf;
		gotoxy(x,y);
		printf("%c",223);
	}
	for(y=li;y<=lf;y++)
	{
		
		x=ci;
		gotoxy(x,y);
		printf("%c",219);
		x=cf;
		gotoxy(x,y);
		printf("%c",219);
	}
	gotoxy(ci,li);
	printf("%c",220);
	gotoxy(cf,li);
	printf("%c",220);
	gotoxy(ci,lf);
	printf("%c",223);
	gotoxy(cf,lf);
	printf("%c",223);
	textcolor(fundo);
	textbackground(fundo);
	for(x=ci+1;x<cf;x++)
	{
		for(y=li+1;y<lf;y++)
		{
			gotoxy(x,y);
			printf(".");
		}
	}
	textbackground(0);
}

void LayoutJogo()
{
	system("cls");
	int c=40,l=2;
	textcolor(15);
	FazerP(c,l);
	c+=13;
	FazerA(c,l);
	c+=13;
	FazerC(c,l);
	c+=13;
	FazerI(c,l);
	c+=4;
	FazerE(c,l);
	c+=13;
	FazerN(c,l);
	c+=13;
	FazerC(c,l);
	c+=13;
	FazerI(c,l);
	c+=4;
	FazerA(c,l);
	CriarMesa(20,10,166,60);	
} 

void ExibeCartaCaindo(TpCartas carta, int ci){
	int li,c,l;
	for(li=12;li<53;li+=2)
	{
		ci--;
		ColocarCarta(ci,li,ci+10,li+7,15,9);
		if(carta.naipe<5)
		textcolor(4);
		else
		textcolor(0);
		textbackground(15);
		l=li+1;
		c=ci+1;
		switch (carta.carta)
		{		
			case 1:
				gotoxy(c,l);
				printf("A");
	 			gotoxy(c+8,l);
				printf("%c",carta.naipe);
				l+=5;
				gotoxy(c,l);
				printf("%c",carta.naipe);
				gotoxy(c+8,l);
				printf("A");
				break;
			case 10:
		 		gotoxy(c,l);
				printf("10");
				gotoxy(c+8,l);
				printf("%c",carta.naipe);
				l+=5;
				gotoxy(c,l);
				printf("%c",carta.naipe);
				gotoxy(c+7,l);
				printf("10");
				break;
			case 11:
		 		gotoxy(c,l);
				printf("J");
				gotoxy(c+8,l);
				printf("%c",carta.naipe);
				l+=5;
				gotoxy(c,l);
				printf("%c",carta.naipe);
				gotoxy(c+8,l);
				printf("J");
				break;
			case 12:
				gotoxy(c,l);
				printf("Q");
				gotoxy(c+8,l);
				printf("%c",carta.naipe);
				l+=5;
				gotoxy(c,l);
				printf("%c",carta.naipe);
				gotoxy(c+8,l);
				printf("Q");
				break;
			case 13:
				gotoxy(c,l);
				printf("K");
				gotoxy(c+8,l);
				printf("%c",carta.naipe);
				l+=5;
				gotoxy(c,l);
				printf("%c",carta.naipe);
				gotoxy(c+8,l);
				printf("K");
				break;
			default:
				gotoxy(c,l);
				printf("%d",carta.carta);
				gotoxy(c+8,l);
				printf("%c",carta.naipe);
				l+=5;
				gotoxy(c,l);
				printf("%c",carta.naipe);
				gotoxy(c+8,l);
				printf("%d",carta.carta);
				break;
		}	
		Sleep(50);
	}
}

char Menu()
{
	int c,l;
	char op;
	do
	{
		LayoutMenu();
		gotoxy(25,3);
		printf("############ MENU ############");
		gotoxy(22,7);
		printf("Altere os padroes do executavel.");
		gotoxy(22,8);
		printf("COLOQUE largura=200 e altura=70");
		c=3;
		l=7;
		gotoxy(c,l);
		printf("[A] - Regras");
		gotoxy(c+5,l+1);
		printf("Paciencia");
		l+=3;
		gotoxy(c,l);
		printf("[B] - Jogar");
		l+=3;
		gotoxy(c,l);
		printf("[Z] - Sair");
		l=24;
		gotoxy(c,l);
		printf("OPCAO: ");
		fflush(stdin);
		op=toupper(getche());
	}while(op!='A' && op!='B' && op!='Z');
	return op;
}

int MenuGame(){
	int x,y,ci=70,cf=110,li=20,lf=40,c,l,setaEscolha=24;
	char tecla;
	textcolor(0);
	textbackground(0);
	for(x=ci+1;x<cf;x++)
	{
		for(y=li+1;y<lf;y++)
		{
			gotoxy(x,y);
			printf(".");
		}
	}
	textcolor(15);
	textbackground(15);//4,6
	for(x=ci;x<=cf;x++)
	{
		y=li;
		gotoxy(x,y);
		printf("%c",177);
		y=lf;
		gotoxy(x,y);
		printf("%c",177);
	}
	for(y=li;y<=lf;y++)
	{
		
		x=ci;
		gotoxy(x,y);
		printf("%c",177);
		x=ci-1;
		gotoxy(x,y);
		printf("%c",177);
		x=cf;
		gotoxy(x,y);
		printf("%c",177);
		x=cf+1;
		gotoxy(x,y);
		printf("%c",177);
	}
	textbackground(0);
	gotoxy(80,30);
	printf("Desistir");
	gotoxy(95,30);
	printf("Continuar");
	c=99;
	l=31;
	do
	{
		gotoxy(c,l);
		textcolor(15);
		printf("%c",setaEscolha);
		fflush(stdin);
		tecla=getch();
		gotoxy(c,l);
		textcolor(0);
		printf("%c",setaEscolha);
		switch(tecla)
		{
            case 75: // Seta para esquerda
                c=83;
                break;
            case 77: // Seta para direita
                c=99;   
                break;
		}
		
	}while(tecla!=32 && tecla!=13);
	if(c==99)
		return 0;
	else
		return 1;
}

int MenuReiniciar(){
	int x,y,ci=70,cf=110,li=20,lf=40,c,l,setaEscolha=24;
	char tecla;
	textcolor(0);
	textbackground(0);
	for(x=ci+1;x<cf;x++)
	{
		for(y=li+1;y<lf;y++)
		{
			gotoxy(x,y);
			printf(".");
		}
	}
	textcolor(15);
	textbackground(15);//4,6
	for(x=ci;x<=cf;x++)
	{
		y=li;
		gotoxy(x,y);
		printf("%c",177);
		y=lf;
		gotoxy(x,y);
		printf("%c",177);
	}
	for(y=li;y<=lf;y++)
	{
		
		x=ci;
		gotoxy(x,y);
		printf("%c",177);
		x=ci-1;
		gotoxy(x,y);
		printf("%c",177);
		x=cf;
		gotoxy(x,y);
		printf("%c",177);
		x=cf+1;
		gotoxy(x,y);
		printf("%c",177);
	}
	textbackground(0);
	gotoxy(80,28);
	printf("Deseja jogar novamente?");
	gotoxy(82,30);
	printf("SIM");
	gotoxy(98,30);
	printf("NAO");
	c=99;
	l=31;
	do
	{
		gotoxy(c,l);
		textcolor(15);
		printf("%c",setaEscolha);
		fflush(stdin);
		tecla=getch();
		gotoxy(c,l);
		textcolor(0);
		printf("%c",setaEscolha);
		switch(tecla)
		{
            case 75: // Seta para esquerda
                c=83;
                break;
            case 77: // Seta para direita
                c=99;   
                break;
		}
		
	}while(tecla!=32 && tecla!=13);
	if(c==99)
		return 0;
	else
		return 1;
}

void CriarBaralho(TpBaralho &baralho)
{
	TpCartas carta;
	int i,j;
	for(i=0;i<4;i++)
		for(j=1;j<=13;j++)
		{
			carta.carta=j;
			carta.naipe=i+3;
			carta.valid=1;
			PushBaralho(baralho,carta);
		}
}

void Embaralhar(TpBaralho &baralho)
{
	srand(time(NULL));
	TpPilhas embaralhamento;
	TpCartas carta;
	TpBaralho baralho2;
	InicializarBaralho(baralho2);
	InicializarPilhas(embaralhamento,4);
	int numEmbaralhadas,i,j,k,numCartas;
	numEmbaralhadas = (rand() % 100 + 1);
	for(i=0;i<numEmbaralhadas;i++)
	{
		for(k=0;k<4;k++)
		{
			numCartas= rand() % 13 +1;
			for(j=0;j<numCartas;j++)
			{
				PopBaralho(baralho,carta);
				PushPilhas(embaralhamento,k,carta);
			}
		}
		while(!BaralhoVazio(baralho))
		{
			PopBaralho(baralho,carta);
			PushBaralho(baralho2,carta);
		}
		for(k=0;k<4;k++)
		{
			
			while(!PilhaVazia(embaralhamento,k))
			{
				PopPilhas(embaralhamento,k,carta);
				PushBaralho(baralho,carta);
			}
		}
		while(!BaralhoVazio(baralho2))
		{
			PopBaralho(baralho2,carta);
			PushBaralho(baralho,carta);
		}
	}
}

void DistribuirBaralho(TpPilhas &pilhas,TpBaralho &baralho)  // retornar a STRUCT de pilhas
{
	TpCartas carta;
	int i,j;
	for(i=0;i<7;i++)
		for(j=0;j<i+1;j++)
		{
			PopBaralho(baralho,carta);
			if(j<i)
				carta.valid=0; 
			PushPilhas(pilhas,i,carta);
		}
}

void CartasMesaExibe(TpPilhas pilhas,TpPilhas montes,TpBaralho viradas,TpBaralho baralho)
{
	TpCartas carta;
	TpBaralho exibe;
	InicializarBaralho(exibe);
	int i,j,c,l,ci=45,li,op;
	for(i=0;i<7;i++)
	{
		li=24;
		gotoxy(ci+4,li);
		textbackground(2);
		textcolor(15);
		printf("[%d]",i+1);
		li=25;
		if(!PilhaVazia(pilhas,i)){
			while(!PilhaVazia(pilhas,i))
			{
				PopPilhas(pilhas,i,carta);
				PushBaralho(exibe,carta);
			}
			c=ci+1;
			while(!BaralhoVazio(exibe))
			{
				PopBaralho(exibe,carta);
				if(carta.valid==1)
				{
					ColocarCarta(ci,li,ci+10,li+7,15,9);
					l=li+1;
					if(carta.naipe== 3 || carta.naipe== 4)
						textcolor(4);
					else
						textcolor(0);
					gotoxy(c,l);
					textbackground(15);
					switch (carta.carta)
					{
						case 1:
							gotoxy(c,l);
							printf("A");
							gotoxy(c+8,l);
							printf("%c",carta.naipe);
							l+=5;
							gotoxy(c,l);
							printf("%c",carta.naipe);
							gotoxy(c+8,l);
							printf("A");
							break;
						case 10:
		 					gotoxy(c,l);
							printf("10");
							gotoxy(c+8,l);
							printf("%c",carta.naipe);
							l+=5;
							gotoxy(c,l);
							printf("%c",carta.naipe);
							gotoxy(c+7,l);
							printf("10");
							break;
						case 11:
		 					gotoxy(c,l);
							printf("J");
							gotoxy(c+8,l);
							printf("%c",carta.naipe);
							l+=5;
							gotoxy(c,l);
							printf("%c",carta.naipe);
							gotoxy(c+8,l);
							printf("J");
							break;
						case 12:
							gotoxy(c,l);
							printf("Q");
							gotoxy(c+8,l);
							printf("%c",carta.naipe);
							l+=5;
							gotoxy(c,l);
							printf("%c",carta.naipe);
							gotoxy(c+8,l);
							printf("Q");
							break;
						case 13:
							gotoxy(c,l);
							printf("K");
							gotoxy(c+8,l);
							printf("%c",carta.naipe);
							l+=5;
							gotoxy(c,l);
							printf("%c",carta.naipe);
							gotoxy(c+8,l);
							printf("K");
							break;
						default:
							gotoxy(c,l);
							printf("%d",carta.carta);
							gotoxy(c+8,l);
							printf("%c",carta.naipe);
							l+=5;
							gotoxy(c,l);
							printf("%c",carta.naipe);
							gotoxy(c+8,l);
							printf("%d",carta.carta);
							break;
					}
				}
				else
					ColocarCarta(ci,li,ci+10,li+7,9,9);
				li+=2;
			}
		}
		else
		{
			ColocarCarta(ci,li,ci+10,li+7,2,15);
			textcolor(15);
			textbackground(2);
			gotoxy(ci+3,(li+li+7)/2);
			printf("Vazio");
		}
		ci+=15;
	}
	ci=106;
	li=12;
	for(i=0;i<4;i++)
	{
		gotoxy(c,l);
		if(!PilhaVazia(montes,i))
		{
			TopoPilha(montes,i,carta);
			ColocarCarta(ci,li,ci+10,li+7,15,9);
			l=li+1;
			c=ci+1;
			if(carta.naipe== 3 || carta.naipe== 4)
				textcolor(4 );
			else
				textcolor(0);
			gotoxy(c,l);
			textbackground(15);
			switch (carta.carta)
					{
						case 1:
							gotoxy(c,l);
							printf("A");
							gotoxy(c+8,l);
							printf("%c",carta.naipe);
							l+=5;
							gotoxy(c,l);
							printf("%c",carta.naipe);
							gotoxy(c+8,l);
							printf("A");
							break;
						case 10:
		 					gotoxy(c,l);
							printf("10");
							gotoxy(c+8,l);
							printf("%c",carta.naipe);
							l+=5;
							gotoxy(c,l);
							printf("%c",carta.naipe);
							gotoxy(c+7,l);
							printf("10");
							break;
						case 11:
		 					gotoxy(c,l);
							printf("J");
							gotoxy(c+8,l);
							printf("%c",carta.naipe);
							l+=5;
							gotoxy(c,l);
							printf("%c",carta.naipe);
							gotoxy(c+8,l);
							printf("J");
							break;
						case 12:
							gotoxy(c,l);
							printf("Q");
							gotoxy(c+8,l);
							printf("%c",carta.naipe);
							l+=5;
							gotoxy(c,l);
							printf("%c",carta.naipe);
							gotoxy(c+8,l);
							printf("Q");
							break;
						case 13:
							gotoxy(c,l);
							printf("K");
							gotoxy(c+8,l);
							printf("%c",carta.naipe);
							l+=5;
							gotoxy(c,l);
							printf("%c",carta.naipe);
							gotoxy(c+8,l);
							printf("K");
							break;
						default:
							gotoxy(c,l);
							printf("%d",carta.carta);
							gotoxy(c+8,l);
							printf("%c",carta.naipe);
							l+=5;
							gotoxy(c,l);
							printf("%c",carta.naipe);
							gotoxy(c+8,l);
							printf("%d",carta.carta);
							break;
					}
		}
		else
		{
			ColocarCarta(ci,li,ci+10,li+7,2,15);
			textcolor(15);
			gotoxy(ci+3,(li+li+7)/2);
			textbackground(2);
			printf("Vazio");
		}
		li--;	
		gotoxy(ci+4,li);
		textcolor(15);
		textbackground(2);
		printf("[%d]",i+10);
		li++;
		ci+=14;
	}
	
	ci=24;
	li=12;
	if(!BaralhoVazio(baralho))
	{
		ColocarCarta(ci,li,ci+10,li+7,9,15);
		textcolor(15);
		textbackground(9);
		gotoxy(ci+2,(li+li+7)/2);
		printf("BARALHO");
	}
	else
	{
		ColocarCarta(ci,li,ci+10,li+7,2,15);
		textcolor(15);
		textbackground(2);
		gotoxy(ci+1,(li+li+7)/2);
		printf("Devolver");
		gotoxy(ci+2,(li+li+7)/2 +1);
		printf("tudo");
	}
	ci+=14;
	gotoxy(c,l);
	if(!BaralhoVazio(viradas))
		{
			TopoBaralho(viradas,carta);
			ColocarCarta(ci,li,ci+10,li+7,15,9);
			l=li+1;
			c=ci+1;
			if(carta.naipe== 3 || carta.naipe== 4)
				textcolor(4);
			else
				textcolor(0);
			textbackground(15);
				switch (carta.carta)
					{
						case 1:
							gotoxy(c,l);
							printf("A");
							gotoxy(c+8,l);
							printf("%c",carta.naipe);
							l+=5;
							gotoxy(c,l);
							printf("%c",carta.naipe);
							gotoxy(c+8,l);
							printf("A");
							break;
						case 10:
		 					gotoxy(c,l);
							printf("10");
							gotoxy(c+8,l);
							printf("%c",carta.naipe);
							l+=5;
							gotoxy(c,l);
							printf("%c",carta.naipe);
							gotoxy(c+7,l);
							printf("10");
							break;
						case 11:
		 					gotoxy(c,l);
							printf("J");
							gotoxy(c+8,l);
							printf("%c",carta.naipe);
							l+=5;
							gotoxy(c,l);
							printf("%c",carta.naipe);
							gotoxy(c+8,l);
							printf("J");
							break;
						case 12:
							gotoxy(c,l);
							printf("Q");
							gotoxy(c+8,l);
							printf("%c",carta.naipe);
							l+=5;
							gotoxy(c,l);
							printf("%c",carta.naipe);
							gotoxy(c+8,l);
							printf("Q");
							break;
						case 13:
							gotoxy(c,l);
							printf("K");
							gotoxy(c+8,l);
							printf("%c",carta.naipe);
							l+=5;
							gotoxy(c,l);
							printf("%c",carta.naipe);
							gotoxy(c+8,l);
							printf("K");
							break;
						default:
							gotoxy(c,l);
							printf("%d",carta.carta);
							gotoxy(c+8,l);
							printf("%c",carta.naipe);
							l+=5;
							gotoxy(c,l);
							printf("%c",carta.naipe);
							gotoxy(c+8,l);
							printf("%d",carta.carta);
							break;
					}
		}
		else
		{
			ColocarCarta(ci,li,ci+10,li+7,2,15);
			textcolor(15);
			gotoxy(ci+3,(li+li+7)/2);
			textbackground(2);
			printf("Vazio");
		}
		ci=24;
		li=11;
		gotoxy(ci+4,li);
		textbackground(2);
		textcolor(15);
		printf("[8]");
		ci+=14;
		gotoxy(ci+4,li);
		printf("[9]");
}

void ReceberMovimento(int &op, int &qtd, int &destino,TpPilhas pilhas)
{
	int c=50,l,setaEscolha=24,setaLado=26, posCTopo[6],PosCPilhas[7],i,li;
	char tecla;
	posCTopo[0]=29;posCTopo[1]=43;posCTopo[2]=111;posCTopo[3]=125;posCTopo[4]=139;posCTopo[5]=153;
	for(i=0;i<7;i++)
	{
		PosCPilhas[i]=50+15*i;
	}
	i=0;
	l=(pilhas.topos[i]-pilhas.bases[i])*2+ 33;
	if(l<33)
		l=33;
	
	do
	{
		gotoxy(c,l);
		textcolor(0);
		printf("%c",setaEscolha);
		fflush(stdin);
		tecla=getch();
		gotoxy(c,l);
		textcolor(2);
		printf("%c",setaEscolha);
		switch(tecla)
		{
			case 72: // Seta para cima
                if(l>=33)
                {
                	l=20;
                	if(c>93)
                	{
                		i=5;
                		c=posCTopo[i];
                	}	
                	else
                	{
                		i=0;
                		c=posCTopo[i];
                	}
                }
                break;
            case 80: // Seta para baixo
                if(l<33)
                {
                	if(c>93)
                	{
                		i=6;
                		c=PosCPilhas[i];
                		l=(pilhas.topos[i]-pilhas.bases[i])*2+ 33;
                		if(l<33)
							l=33;
                	}		
                	else
                	{
                		i=0;
                		c=PosCPilhas[i];
                		l=(pilhas.topos[i]-pilhas.bases[i])*2+ 33;
                		if(l<33)
							l=33;
                	}
                		
                }
                break;
            case 75: // Seta para esquerda
                if(l<33)//parte de cima
                {
                	if(i==0)
                		i=5;
                	else
                		i--;
                	c=posCTopo[i];
                }
                else//parte de baixo
                {
                	if(i==0)
                		i=6;
                	else
                		i--;
                	c=PosCPilhas[i];
                	l=(pilhas.topos[i]-pilhas.bases[i])*2+ 33;
                	if(l<33)
							l=33;
                }
            	break;
            case 77: // Seta para direita
                    if(l<33)//parte de cima
                {
                	if(i==5)
                		i=0;
                	else
                		i++;
                	c=posCTopo[i];
                }
                else//parte de baixo
                {
                	if(i==6)
                		i=0;
                	else
                		i++;
                	c=PosCPilhas[i];
					l=(pilhas.topos[i]-pilhas.bases[i])*2+ 33;
					if(l<33)
							l=33;
                }
                break;
		}
		
	}while(tecla!=32 && tecla!=13 && tecla!=27);
	if(l<33)
		op=7+i;
	else
		op=i;
	if(tecla==27)
		op=27;
	if(op!=7 && op!=27)
	{
		if(op>=8)
		{
			do
			{
				gotoxy(c,l);
				textcolor(15);
				printf("%c",setaEscolha);
				fflush(stdin);
				tecla=getch();
				gotoxy(c,l);
				textcolor(2);
				printf("%c",setaEscolha);
				switch(tecla)
				{
					case 72: // Seta para cima
		                if(l>=33)
		                {
		                	l=20;
		                	if(c>93)
		                	{
		                		i=5;
		                		c=posCTopo[i];
		                	}	
		                	else
		                	{
		                		i=0;
		                		c=posCTopo[i];
		                	}
		                }
		                break;
		            case 80: // Seta para baixo
		                if(l<33)
		                {
		                	if(c>93)
		                	{
		                		i=6;
		                		c=PosCPilhas[i];
		                		l=(pilhas.topos[i]-pilhas.bases[i])*2+ 33;
		                		if(l<33)
									l=33;
		                	}		
		                	else
		                	{
		                		i=0;
		                		c=PosCPilhas[i];
		                		l=(pilhas.topos[i]-pilhas.bases[i])*2+ 33;
		                		if(l<33)
									l=33;
		                	}
		                		
		                }
		                break;
		            case 75: // Seta para esquerda
		                if(l<33)//parte de cima
		                {
		                	if(i==0)
		                		i=5;
		                	else
		                		i--;
		                	c=posCTopo[i];
		                }
		                else//parte de baixo
		                {
		                	if(i==0)
		                		i=6;
		                	else
		                		i--;
		                	c=PosCPilhas[i];
		                	l=(pilhas.topos[i]-pilhas.bases[i])*2+ 33;
		                	if(l<33)
									l=33;
		                }
		            	break;
		            case 77: // Seta para direita
		                    if(l<33)//parte de cima
		                {
		                	if(i==5)
		                		i=0;
		                	else
		                		i++;
		                	c=posCTopo[i];
		                }
		                else//parte de baixo
		                {
		                	if(i==6)
		                		i=0;
		                	else
		                		i++;
		                	c=PosCPilhas[i];
							l=(pilhas.topos[i]-pilhas.bases[i])*2+ 33;
							if(l<33)
									l=33;
		                }
		                break;
				}
				
			}while(tecla!=32 && tecla!=13);	
		}
		else
		{
			l=(pilhas.topos[i]-pilhas.bases[i])*2+ 26;
			c-=6;
			li=l;
			do
			{
				gotoxy(c,li);
				textcolor(0);
				printf("%c",setaLado);
				gotoxy(c,l);
				textcolor(0);
				printf("%c",setaLado);
				fflush(stdin);
				tecla=getch();
				switch(tecla)
				{
					case 72: // Seta para cima
						if(l>26)
						{
							gotoxy(c,l);
							textcolor(0);
							printf("%c",179);
							l-=2;
							gotoxy(c,l);
							textcolor(0);
							printf("%c",setaLado);
						}
		                break;
		            case 80: // Seta para baixo
		                if(l<li)
		                {
		                	gotoxy(c,l);
							textcolor(2);
							printf("%c",179);
		                	l+=2;
							gotoxy(c,l);
							textcolor(0);
							printf("%c",setaLado);
		                }
		                break;	
				}
			}while(tecla!=32 && tecla!=13);
			
			qtd=(li-l)/2 +1;
			
			l=li+7;
			c+=6;
			do
			{
				gotoxy(c,l);
				textcolor(15);
				printf("%c",setaEscolha);
				fflush(stdin);
				tecla=getch();
				gotoxy(c,l);
				textcolor(2);
				printf("%c",setaEscolha);
				switch(tecla)
				{
					case 72: // Seta para cima
		                if(l>=33)
		                {
		                	l=20;
		                	if(c>93)
		                	{
		                		i=5;
		                		c=posCTopo[i];
		                	}	
		                	else
		                	{
		                		i=0;
		                		c=posCTopo[i];
		                	}
		                }
		                break;
		            case 80: // Seta para baixo
		                if(l<33)
		                {
		                	if(c>93)
		                	{
		                		i=6;
		                		c=PosCPilhas[i];
		                		l=(pilhas.topos[i]-pilhas.bases[i])*2+ 33;
		                		if(l<33)
									l=33;
		                	}		
		                	else
		                	{
		                		i=0;
		                		c=PosCPilhas[i];
		                		l=(pilhas.topos[i]-pilhas.bases[i])*2+ 33;
		                		if(l<33)
									l=33;
		                	}
		                		
		                }
		                break;
		            case 75: // Seta para esquerda
		                if(l<33)//parte de cima
		                {
		                	if(i==0)
		                		i=5;
		                	else
		                		i--;
		                	c=posCTopo[i];
		                }
		                else//parte de baixo
		                {
		                	if(i==0)
		                		i=6;
		                	else
		                		i--;
		                	c=PosCPilhas[i];
		                	l=(pilhas.topos[i]-pilhas.bases[i])*2+ 33;
		                	if(l<33)
									l=33;
		                }
		            	break;
		            case 77: // Seta para direita
		                    if(l<33)//parte de cima
		                {
		                	if(i==5)
		                		i=0;
		                	else
		                		i++;
		                	c=posCTopo[i];
		                }
		                else//parte de baixo
		                {
		                	if(i==6)
		                		i=0;
		                	else
		                		i++;
		                	c=PosCPilhas[i];
							l=(pilhas.topos[i]-pilhas.bases[i])*2+ 33;
							if(l<33)
									l=33;
		                }
		                break;
				}
				
			}while(tecla!=32 && tecla!=13);	
		}
		if(l<33)
			destino=7+i;
		else
			destino=i;
	}
}

int PegarCartasPilha(TpPilhas &pilhas,int op, int qtd, TpBaralho &aux,TpCartas &carta)
{
	int valid=1,i,j;
	if(op==27)
		return 0;
	for(i=0;i<qtd && valid==1;i++)
	{
		if(!PilhaVazia(pilhas,op))
		{
			PopPilhas(pilhas,op,carta);
			if(carta.valid==0)
			{
				valid=0;
				PushPilhas(pilhas,op,carta);
				for(j=0;j<i;j++)
				{
					PopBaralho(aux,carta);
					PushPilhas(pilhas,op,carta);
				}
			}
			else		
				PushBaralho(aux,carta);
		}
		else
		{
			valid=0;
			for(j=0;j<i;j++)
				PushPilhas(pilhas,op,carta);
		}	
	}
	return valid;
}

int PegarCartasBaralho(TpBaralho &BaralhoOrigem, TpBaralho &BaralhoVirado, TpBaralho &aux, TpCartas &carta,int op)
{
	int valid=1;
	if (op== 8){
		if(!BaralhoVazio(BaralhoVirado))
		{
			PopBaralho(BaralhoVirado,carta);
			PushBaralho(aux,carta);
		}
		else
			valid=0;
	}
	else
	{
		if(!BaralhoVazio(BaralhoOrigem))
		{
			PopBaralho(BaralhoOrigem,carta);
			PushBaralho(BaralhoVirado,carta);
		}
		else
		{
			while(!BaralhoVazio(BaralhoVirado))
			{
				PopBaralho(BaralhoVirado,carta);
				PushBaralho(BaralhoOrigem,carta);
			}
		}
		valid=0;
	}
	return valid;
}

int PegarCartasMontes(TpPilhas &montes,TpBaralho &aux,int op,TpCartas &carta)
{
	int valid=1,pos=op-9;
	if(!PilhaVazia(montes,pos))
	{
		PopPilhas(montes,pos,carta);
		PushBaralho(aux,carta);
	}
	else
		valid=0;
	return valid;
}

int PegarCartas(TpPilhas &pilhas,int op, int qtd, TpBaralho &aux /*(AUX)*/,	TpCartas &carta, TpBaralho &BaralhoOrigem, TpBaralho &BaralhoVirado, TpPilhas &montes) // organizar (trocar a op 8 e 9 para outra função)
{
	int valid=0;
	//OP FOI DECRECIDO
	if(op<7)
		valid=PegarCartasPilha(pilhas,op,qtd,aux,carta);
	else
		if(op==7 || op==8)
			valid=PegarCartasBaralho(BaralhoOrigem,BaralhoVirado,aux,carta,op);
		else
			if(op<13)
				valid=PegarCartasMontes(montes,aux,op,carta);
		// validar se todas as cartas que estavam com .valid=1 ja sairam do monte
		
	return valid;
}

int VerificaMovimento(int destino,TpCartas carta,TpPilhas pilhas,TpPilhas montes,TpBaralho aux)
{
	int valid=0;
	TpCartas CartaDestino;
	if(destino<9)
	{
		if(!PilhaVazia(pilhas,destino))
		{
			TopoPilha(pilhas,destino,CartaDestino);
			if(CartaDestino.carta==carta.carta+1)
			{
				switch(carta.naipe)
				{
					case 3: case 4:
						if(CartaDestino.naipe==5 || CartaDestino.naipe==6)
							valid=1;
						break;
					case 5: case 6:
						if(CartaDestino.naipe==3 || CartaDestino.naipe==4)
							valid=1;
						break;	
				}
			}
		}
		else
			if(carta.carta==13)
				valid=1;
	}
	else
	{
		if(!PilhaVazia(montes,destino-9))
		{
			TopoPilha(montes,destino-9,CartaDestino);
			if(CartaDestino.carta==carta.carta-1 && CartaDestino.naipe==carta.naipe && aux.topo==0)
				valid=1;
		}
		else
			if(carta.carta==1)
				valid=1;
	}
	return valid;
}

void JogarCartasPilhas(int destino,TpBaralho &aux,TpPilhas &pilhas)
{
	TpCartas carta;
	while(!BaralhoVazio(aux))
	{
		PopBaralho(aux,carta);
		PushPilhas(pilhas,destino,carta);
	}
}

void JogarCartasMontes(int destino,TpBaralho &aux,TpPilhas &montes)
{
	TpCartas carta;
	while(!BaralhoVazio(aux))
	{
		PopBaralho(aux,carta);
		PushPilhas(montes,destino-9,carta);
	}
}

void DevolveCartaPilhas(int op,TpBaralho &aux,TpPilhas &pilhas)
{
	TpCartas carta;
	while(!BaralhoVazio(aux))
	{
		PopBaralho(aux,carta);
		PushPilhas(pilhas,op,carta);
	}
}

void DevolveCartaMontes(int op,TpBaralho &aux,TpPilhas &montes)
{
	TpCartas carta;
	while(!BaralhoVazio(aux))
	{
		PopBaralho(aux,carta);
		PushPilhas(montes,op-9,carta);
	}
}

void DevolveCartaBaralho(TpBaralho &aux,TpBaralho &virada)
{
	TpCartas carta;
	while(!BaralhoVazio(aux))
	{
		PopBaralho(aux,carta);
		PushBaralho(virada,carta);
	}
}

void VerificaTopoPilhas(int op,TpPilhas &pilhas){
	if(pilhas.topos[op]>=pilhas.bases[op])
		pilhas.carta[pilhas.topos[op]].valid=1;
}

int VericifaSeGanhou(TpPilhas montes)
{
	int i;
	for(i=0;i<4;i++)
		if(montes.topos[i]!=montes.bases[i]+12)
			return 0;
	return 1;
}

void GanhouHack(TpPilhas montes){
	int i,qtd,j, CIs[4];
	for(i=0; i<4;i++)
	{
		CIs[i]=106+ 14*i;
	}
	TpCartas carta;
	for(i=0;i<4;i++)
	{
		carta.naipe=i+3;		
		for(qtd=montes.topos[i]+1-montes.bases[i];qtd<13;qtd++)
		{
			carta.carta=qtd+1;		
			carta.valid=1;
			PushPilhas(montes,i,carta);
		}
	}
	for(i=0;i<13;i++)
	{
		for(j=0;j<4;j++)
		{
			PopPilhas(montes,j,carta);
			ExibeCartaCaindo(carta,CIs[j]);
			Sleep(100);
		}
	}	
}

void GanhouSincero(TpPilhas montes){
	int i,qtd,j, CIs[4];
	for(i=0; i<4;i++)
	{
		CIs[i]=106+ 14*i;
	}
	TpCartas carta;
	for(i=0;i<13;i++)
	{
		for(j=0;j<4;j++)
		{
			PopPilhas(montes,j,carta);
			ExibeCartaCaindo(carta,CIs[j]);
			Sleep(100);
		}
	}
}

void Jogar(TpBaralho baralho)
{
	TpPilhas pilhas,montes;
	TpBaralho aux, viradas;
	TpCartas carta;
	int op,qtd,valid=0,destino;
	InicializarBaralho(aux);
	InicializarBaralho(viradas);
	InicializarPilhas(pilhas,7);
	InicializarPilhas(montes,4);
	DistribuirBaralho(pilhas, baralho);
	LayoutJogo();
	CartasMesaExibe(pilhas,montes,viradas,baralho);
	ReceberMovimento(op,qtd,destino,pilhas);
	if(op==27){
		valid=MenuGame();
	}
	while(valid==0)
	{	
		valid=PegarCartas(pilhas,op,qtd,aux,carta,baralho,viradas,montes);
		if(valid==1)
		{
			valid=VerificaMovimento(destino,carta,pilhas,montes,aux);
			if(valid==1) //Verifica se o movimento de transferência é válido
			{
				if(destino<9)
					JogarCartasPilhas(destino,aux,pilhas);
				else
					JogarCartasMontes(destino,aux,montes);
				if(op<7)
					VerificaTopoPilhas(op,pilhas);
					
			}
			else
			{
				if(op<7)
					DevolveCartaPilhas(op,aux,pilhas);
				else
					if(op<9)
						DevolveCartaBaralho(aux,viradas);
					else
						DevolveCartaMontes(op,aux,montes);
			} //transfere para a pilha destino;	
		}
		valid=VericifaSeGanhou(montes);
		if(valid==0)
		{
			textbackground(0);
			LayoutJogo();
			CartasMesaExibe(pilhas,montes,viradas,baralho);
			ReceberMovimento(op,qtd,destino,pilhas);
			if(op==27){
				valid=MenuGame();
			}
		}
		else
			GanhouSincero(montes);
	}
	if(op==27)
		GanhouHack(montes);
}

void Obrigado(){
	system("cls");
	gotoxy(5,5);
	printf(" .d88b.  d8888b. d8888b. d888888b  d888b   .d8b.  d8888b.  .d88b.      d8888b.  .d88b.  d8888b.        d88b  .d88b.   d888b   .d8b.  d8888b.");
	gotoxy(5,6);
	printf(".8P  Y8. 88  `8D 88  `8D   `88'   88' Y8b d8' `8b 88  `8D .8P  Y8.     88  `8D .8P  Y8. 88  `8D        `8P' .8P  Y8. 88' Y8b d8' `8b 88  `8D");
	gotoxy(5,7);
	printf("88    88 88oooY' 88oobY'    88    88      88ooo88 88   88 88    88     88oodD' 88    88 88oobY'         88  88    88 88      88ooo88 88oobY'");
	gotoxy(5,8);
	printf("88    88 88~~~b. 88`8b      88    88  ooo 88~~~88 88   88 88    88     88~~~   88    88 88`8b           88  88    88 88  ooo 88~~~88 88`8b");
	gotoxy(5,9);
	printf("`8b  d8' 88   8D 88 `88.   .88.   88. ~8~ 88   88 88  .8D `8b  d8'     88      `8b  d8' 88 `88.     db. 88  `8b  d8' 88. ~8~ 88   88 88 `88.");
	gotoxy(5,10);
	printf("`8b  d8' 88   8D 88 `88.   .88.   88. ~8~ 88   88 88  .8D `8b  d8'     88      `8b  d8' 88 `88.     db. 88  `8b  d8' 88. ~8~ 88   88 88 `88.");
	gotoxy(5,11);
	printf(" `Y88P'  Y8888P' 88   YD Y888888P  Y888P  YP   YP Y8888D'  `Y88P'      88       `Y88P'  88   YD     Y8888P   `Y88P'   Y888P  YP   YP 88   YD");
	gotoxy(5,13);
	
}

void Regras()
{
	system("cls");
	FILE*ponteiro=fopen("regrasPaciencia.txt","r");
	char letra;
	letra=fgetc(ponteiro);
	while(!feof(ponteiro))
	{
		printf("%c",letra);
		letra=fgetc(ponteiro);
	}
	printf("\n\nDIGITE QUALQUER TECLA PARA SAIR!!");
	fflush(stdin);
	getch();
	fclose(ponteiro);
}

void Executar()
{
	int valid;
	TpBaralho baralho;
	InicializarBaralho(baralho);
	CriarBaralho(baralho);
	char op;
	do
	{
		op=Menu();
		switch(op)
		{
			case 'A':
				Regras();
				break;
			case 'B':
				do
				{
					Embaralhar(baralho);
					Jogar(baralho);
					valid=MenuReiniciar();
				}while(valid==1);
				op='Z';
				break;
		}
		textcolor(15);
	}while(op!='Z');
	Obrigado();
}

int main()
{
	Executar();
	return 0;
}
