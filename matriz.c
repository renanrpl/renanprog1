#include <stdio.h>
int main()
{
    int matrizA[4][4];
    int matrizB[4][4];
    int matrizSoma[4][4];
    int matrizMult[4][4];
    int linha, coluna;

    printf("\nOla, meu nome é Renan Pessanha Lima  e minha matrícula na Unilasalle é 0050014520\n");
		printf("\nEntre com a primeira matriz A de 4 linhas e 4 colunas:\n\n");
    
    for(linha = 0 ; linha < 4 ; linha++)
        for(coluna = 0 ; coluna < 4 ; coluna++)
        {		
            printf("Matriz A - Entre com a linha [%d] coluna [%d]: ", linha+1, coluna+1);
            scanf("%d", &matrizA[linha][coluna]);
        }
printf("\n\n");
printf("\nEntre com a segunda matriz B de 4 linhas e 4 colunas:\n\n");    
    for(linha = 0 ; linha < 4 ; linha++)
        for(coluna = 0 ; coluna < 4 ; coluna++)
        {
            printf("Matriz B - Entre com a linha [%d] coluna [%d]: ", linha+1, coluna+1);
            scanf("%d", &matrizB[linha][coluna]);
        }
        
        
      for( linha=0; linha<4; linha++ )
        for( coluna=0; coluna<4; coluna++ )
          matrizSoma[linha][coluna] = matrizA[linha][coluna] + matrizB[linha][coluna];
                 
                 
      for( linha=0; linha<4; linha++ )
        for( coluna=0; coluna<4; coluna++ )
          matrizMult[linha][coluna] = matrizA[linha][coluna] * matrizB[linha][coluna];
          
                 
          
printf("\nDiagonal secundária da matriz A: \n");
printf("0\t0\t0\t%d\n", matrizA[0][3]);
printf("0\t0\t%d\t0\n", matrizA[1][2]);
printf("0\t%d\t0\t0\n", matrizA[2][1]);
printf("%d\t0\t0\t0\n", matrizA[3][0]);

      printf("\n\n");           
      
      printf("A matriz soma é:\n");      
      for( linha=0; linha<4; linha++ )
       {
         for( coluna=0; coluna<4; coluna++ )
				 {
           printf("%d\t", matrizSoma[linha][coluna] );
				 }   
					 printf("\n");
       }
       
       
      
      printf("\nA matriz multiplicação é:\n");      
      for( linha=0; linha<4; linha++ )
       {
         for( coluna=0; coluna<4; coluna++ )
				 {
           printf("%d\t", matrizMult[linha][coluna] );
				 }
					 printf("\n");
				 
			 }	 
	printf("\nA minha maior dificuldade para fazer esse programa foi conseguir achar vídeos simples e explicativos que pudessem ajudar na internet referente as ferramentas usadas nas aulas para o desenvolvimento desse trabalho.\n\n");
  return 0;
}