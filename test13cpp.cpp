#include <iostream>
using namespace std;
void  carica(int x[],int p);
int somma(int x[],int y[], int p, int q);
int main()
{
	int outs=0;
	int vet1[100],vet2[100];
	int n1,n2;
	cout << "Inserisci le dimensioni n1 e n2:";
	cin >> n1;
	cin >> n2;
	cout << endl;
	if ((n1<2) || (n2<2))
		{cout << "Errore !";
		cout << endl;
		return 0;
		}
	cout << endl;
	carica(vet1,n1);
	carica(vet2,n2);
	outs=somma(vet1,vet2,n1,n2);
	cout << "\nLa somma dei 2 array:"<< outs<< endl;
	return 0;
}
void  carica(int x[],int p)
{
	int i;
	for (i=0;i<p;i++)
		{ cout <<"Elemento:"<<i+1  <<":Array:\n";
		  cin >> x[i];}
}
int somma(int x[], int y[], int p, int q)
{
	int os=0;
	int i;
	for (i=0;i<p;i++)
		os=os+x[i];
	for (i=0;i<q;i++)
		os=os+y[i];
	return os;
}
