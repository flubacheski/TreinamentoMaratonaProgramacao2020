#include <stdio.h>
 
int main() { 
    int T; // times
	int N; // jogos
    char nome[11];
	int i, totalPontos, pontos;
	
	while(1){
	    scanf("%d %d", &T, &N); // numero de times
	    
		if( T == 0 )
	    	break;
	    totalPontos = 0;	
		
		for(i=0;i<T;i++){
			scanf("%s %d", nome, &pontos);
			totalPontos+=pontos;
		}
	
	    printf("%d\n", N*3 - totalPontos);
	}
    return 0;
}
