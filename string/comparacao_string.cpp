#include <iostream>
#include <string.h>
using namespace std;

class Pessoa{
 public:
	char nome[100];
	int idade;
};

int main(int argc, char** argv)
{
   Pessoa p1[2] = {{"iury", 22},
   {"lara", 23}
   }, p2;
   
 strcpy(p2.nome, "lara");
   
   
   for(int i = 0; i <= 1; i++)
   {
   	if(strcmp(p1[i].nome, p2.nome) == 0)
	   {
	   cout << p1[i].idade;
	  
	   }
	  
   }
    

	return 0;
}