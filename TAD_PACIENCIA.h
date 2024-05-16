#define MAXPILHAS 140
#define MAXBARALHO 52

struct TpCartas{
	int carta,naipe,valid;
};

struct TpPilhas{
	int topos[7], bases[7];
	TpCartas carta[MAXPILHAS];
};

struct TpBaralho{
	int topo;
	TpCartas carta[MAXBARALHO];
};

void InicializarBaralho(TpBaralho &baralho)
{
	baralho.topo=-1;
}

void InicializarPilhas(TpPilhas &pilhas, int qtdpilhas)
{
	int qtdelementos,i;
	qtdelementos=MAXPILHAS/qtdpilhas;
	for(i=0;i<qtdpilhas;i++)
	{
		pilhas.bases[i]=qtdelementos*i;
		pilhas.topos[i]=pilhas.bases[i] - 1;
	}
}

void PushBaralho(TpBaralho &baralho, TpCartas carta)
{
	baralho.carta[++baralho.topo]=carta;
}

void PushPilhas(TpPilhas &pilhas, int qual, TpCartas carta)
{
	pilhas.carta[++pilhas.topos[qual]]=carta;
}

void PopBaralho(TpBaralho &baralho,TpCartas &carta)
{
	carta=baralho.carta[baralho.topo--];
}

void PopPilhas(TpPilhas &pilha,int qual,TpCartas &carta)
{
	carta=pilha.carta[pilha.topos[qual]--];
}

char BaralhoVazio(TpBaralho baralho)
{
	return baralho.topo==-1;
}

char PilhaVazia(TpPilhas pilha,int qual)
{
	return pilha.topos[qual]== pilha.bases[qual]-1;
}

void TopoPilha(TpPilhas pilhas, int qual, TpCartas &carta)
{
	carta=pilhas.carta[pilhas.topos[qual]];
}

void TopoBaralho(TpBaralho baralho, TpCartas &carta)
{
	carta=baralho.carta[baralho.topo];
}

void ExibirBaralho(TpBaralho baralho)
{
	TpCartas carta;
	while(!BaralhoVazio(baralho))
	{
		PopBaralho(baralho,carta);
		printf("%d %c\n",carta.carta,carta.naipe);
	}	
}
