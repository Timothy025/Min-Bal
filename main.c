#include <stdio.h>

struct acc{
  unsigned int acc;  
  char fn[15];
  char ln[10];         
  double bal;        
};

int main(){
  struct acc c1;
  FILE *fp;
  fp = fopen("credit.dat","rb+");
  printf("\n Enter acc,fname,lname,bal:");
  scanf("%d %s %s %lf",&c1.acc,c1.fn,c1.ln,&c1.bal);
  while(c1.acc !=0){
    fwrite(&c1,sizeof(c1),1,fp);
    printf("\n  ? Enter acc,fname,lname,bal:");
    scanf("%d %s %s %lf",&c1.acc,c1.fn,c1.ln,&c1.bal);
  } 


fclose(fp);

return 0;

}
