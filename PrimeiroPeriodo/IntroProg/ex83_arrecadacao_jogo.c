#include <stdio.h>

int main(){
  
  int n, i=0, pessoas;
  double ppop, pger, parq, pcad, tot;

  scanf("%d", &n);

  for(i=0; i < n; i++){
    scanf("%d %lf %lf %lf %lf", &pessoas, &ppop, &pger, &parq, &pcad); 
    tot = pessoas * ((ppop/100) * 1) + pessoas * ((pger/100) * 5) + pessoas * ((parq/100) * 10) + pessoas * ((pcad/100) * 20);
    printf("A RENDA DO JOGO N.%d E = %.2f\n", i+1, tot);
  }


  /*
  int casos, i, tot;
  float ppop, pger, parq, pcad;

  scanf("%d", &casos);
  float res[casos];

  i = 0;
  for (i = 0; i < casos; i++){
    scanf("%d %f %f %f %f", &tot, &ppop, &pger, &parq, &pcad);
    res[i] = (tot*(ppop/100.0)) * 1.0 + (tot*(pger/100.0)) * 5.0 + (tot*(parq/100.0)) * 10.0 + (tot*(pcad/100.0)) * 20.0;
  }
  
  i = 0;
  for (i = 0; i < casos; i++){
    printf("A RENDA DO JOGO N. %d E = %.2f\n", i + 1, res[i]);
  }
  */

  return 0;
}
