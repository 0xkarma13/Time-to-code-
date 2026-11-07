"""a simple code for lean for and while in c"""
#include <stdio.h>

int main(){
    for (int i = 1; i <= 15; i++){
        printf("%d\n", i);
    }
    return 0;
}

____________________________________________________________________________________________________________________________________________________________________
#include <stdio.h>

int main (){
    int i = 1;
    
    while (i <= 15){
        printf("%d\n", i);
        i ++;
    }
    return 0;

}

