#include <stdio.h>

int main(){
    int num, trit, t1, t2, t3, t4;
    printf("Insira o codigo trit\n");
    scanf("%d", &trit);
    if(trit > 999){
        t1 = trit / 1000;
        t2 = trit / 100 % 10;
        t3 = trit / 10 % 10;
        t4 = trit % 10;
        
        if(t1 == 2){
            num = 27;
        }else if(t1 == 0){
            num += 0;
        }else
            num += 0;
        if(t2 == 2){
            num += 9;
        }else if(t2 == 0){
            num += -9;
        }else
            num += 0;
        if(t3 == 2){
            num += 3;
        }else if(t3 == 0){
            num += -3;
        }else
            num += 0;
        if(t4 == 2){
            num++;
        }else if(t4 == 0){
            num--;
        }else
            num += 0;
        printf("%d", num);
        return 0;
        
    }else if(trit > 99 && trit < 999){
        t1 = trit / 100;
        t2 = trit / 10 % 10;
        t3 = trit % 10;
        
        if(t1 == 2){
            num = 9;
        }else if(t1 == 0){
            num += 0;
        }else
            num += 0;
        if(t2 == 2){
            num += 3;
        }else if(t2 == 0){
            num += -3;
        }else
            num += 0;
        if(t3 == 2){
            num ++;
        }else if(t3 == 0){
            num --;
        }else
            num += 0;
            
        printf("%d", num);
        return 0;
        
    }else if(trit < 99 & trit > 9){
        t1 = trit / 10;
        t2 = trit % 10;
        
        if(t1 == 2){
            num = 3;
        }else if(t1 == 0){
            num += 0;
        }else
            num += 0;
        if(t2 == 2){
            num ++;
        }else if(t2 == 0){
            num --;
        }else
            num += 0;
        printf("%d", num);
        return 0;
    }else if(trit < 9){
        t1 = trit;
        if(t1 == 2){
            num = 1;
        }else if(t1 == 0){
            num = 0;
        }else
            num = 0;
        printf("%d", num);
        return 0;
    }       
}
