
#include<iostream>
#include<locale.h>
using namespace std;

int FverificaT(float verLadoUm, float verLadoDois, float verLadoTres){
	int verT;
	if((verLadoUm + verLadoDois) > verLadoTres && (verLadoUm + verLadoTres) > verLadoDois && (verLadoDois + verLadoTres) > verLadoUm){
		verT = 1;
	}
	else{
		verT = 0;
	}
	return(verT);
}

void msg(char txt[255]){
	cout<<txt;
}

void FClassificaT(float varLadoUm, float varLadoDois, float varLadoTres, int varVerT){
	if(varVerT == 1){
     if(varLadoUm == varLadoDois && varLadoUm == varLadoTres && varLadoTres == varLadoDois)
           {
				msg("Esse é um triangulo Equilatero."); // EX: L1=6, L2=6, L3=6
           }
     else if(varLadoUm == varLadoDois || varLadoUm == varLadoTres || varLadoTres == varLadoDois)
          {
                msg("Esse é um triangulo Isoceles."); // EX: L1=6, L2=6, L3=11 
          }
     else
         {
                msg("Esse é um triangulo Escaleno."); // EX: L1=3, L2=4, L3=5
         }
     }
    else{
    	msg("Essas medidas não formam um triangulo!"); // EX: L1=6, L2=6, L3=12
	}
 }


int main(){
	int t;
	float ladoUm, ladoDois, ladoTres;
	
	setlocale(LC_ALL,"portuguese");
	
	cout<<"Lado 1 do triangulo: "; cin>>ladoUm; cout<<endl;
	cout<<"Lado 2 do triangulo: "; cin>>ladoDois; cout<<endl;
	cout<<"Lado 3 do triangulo: "; cin>>ladoTres; cout<<endl;
	
	t = FverificaT(ladoUm,ladoDois,ladoTres); 
	
	FClassificaT(ladoUm,ladoDois,ladoTres,t); cout<<endl; cout<<endl;
}

*/
