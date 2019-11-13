#include<iostream>
using namespace std;
char function(char tree[],string RNA,int i,int parent,int n)
{ if(n==2)
{
	return tree[(4*parent)+1];
	//cout<<tree[(4*parent)+1];
}
	
	else
	{
		n++;
	for(int k=(4*parent)+1;k<(4*parent)+5;k++)
		{
			if(RNA[i]==tree[k])
			{
				return function(tree,RNA,i+1,k,n);
				break;
			}
		}
	}
}
main()
{
	char one[]={'A','A','U','G','C','A','U','G','C','A','U','G','C','A','U','G','C','A','U','G','C','K','K','K','K','N','N','N','N','K','K','K','K','N','N','N','N','I','I','I','I','I','I','I','I','M','M','M','M','I','I','I','I','R','R','R','R','S','S','S','S','R','R','R','R','S','S','S','S','T','T','T','T','T','T','T','T','T','T','T','T','T','T','T','T'};
	char two[]={'G','A','C','G','U','A','C','G','U','A','C','G','U','A','C','G','U','A','C','G','U','E','E','E','E','D','D','D','D','E','E','E','E','D','D','D','D','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','G','G','G','G','G','G','G','G','G','G','G','G','G','G','G','G','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B'};
	char three[]={'C','A','C','G','U','A','C','G','U','A','C','G','U','A','C','G','U','A','C','G','U','Q','Q','Q','Q','H','H','H','H','Q','Q','Q','Q','H','H','H','H','P','P','P','P','P','P','P','P','P','P','P','P','P','P','P','P','R','R','R','R','R','R','R','R','R','R','R','R','R','R','R','R','L','L','L','L','L','L','L','L','L','L','L','L','L','L','L','L'};
	char four[]={'U','A','C','G','U','A','C','G','U','A','C','G','U','A','C','G','U','A','C','G','U','O','O','O','O','N','N','N','N','O','O','O','O','N','N','N','N','S','S','S','S','S','S','S','S','S','S','S','S','S','S','S','S','O','O','O','O','C','C','C','C','M','M','M','M','C','C','C','C','L','L','L','L','F','F','F','F','L','L','L','L','F','F','F','F'};
	string RNA,DNA;
	cout<<"ENTER DNA SEQUENCE: ";
	getline(cin,DNA);
	int s = DNA.length();
	RNA=DNA;
	for(int i=0;i<s;i++)
	{
		if(RNA[i]=='T')
		{
			RNA[i]='U';
		}
	}
	cout<<"DNA sequence: ";
	cout<<DNA;
	cout<<"\nRNA sequence: ";
	cout<<RNA;

	int i=0,j=0;
	for(i=0;i<s;i=i+3)
	{
		if(RNA[i]==one[0])    
		{	
			cout<<"\n"<<function(one,RNA,i+1,0,0);
		}
		else if(RNA[i]==two[0])
		{
			cout<<"\n"<<function(two,RNA,i+1,0,0);
		}
		else if(RNA[i]==three[0])
		{
			cout<<"\n"<<function(three,RNA,i+1,0,0);
		}
		else if(RNA[i]==four[0])
		{
			cout<<"\n"<<function(four,RNA,i+1,0,0);
		}
	}
}
