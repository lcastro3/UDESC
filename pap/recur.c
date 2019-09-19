#include<stdio.h>
#include<stdlib.h>
/* 
int recursiva(int x);
int main(int argc, char const *argv[]){
    int x;
    scanf("%d",&x);
    int func;
    func = recursiva(x);
    printf("%d\n", func);
    return 0;
}

int recursiva (int x){
    int soma;
    if(x == 0){
       return x;
    }else {
        soma = x + recursiva(x-1);
        return soma;
    }

    
}
*/
/* 
int sub = -9999;
void menor(int *p, int n);
int main(int argc, char const *argv[]){
    int n,i;
    scanf("%d", &n);
    int vet[n];
    for(i=0;i<n;i++){
        scanf("%d",&vet[i]);
    }
    int *p = vet;
    printf("%d\n",sub);
    menor(p, n);
    printf("resp : %d\n",sub);
    return 0;
}

void menor (int *p, int n){
    if(n == 0){
        return ;
    }else {
        if(sub<p[n-1]){
            sub = p[n-1];
            printf("%d\n",sub);
            menor(p,n-1);
            return ;
        } else{
            menor(p,n-1);
            return ;
        }
        
        
        
    }
    
}
*/

