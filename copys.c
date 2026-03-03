#include <stdio.h>
#include <stdlib.h>
#define ends -99999999
void report(int *lists){
    int count = 0;
    printf("[ ");
    while(lists[count] != ends){
        printf("%d , ", lists[count]);
        count++;
    }
    printf("]\n");
}
void copys(int *lists,int *list2){
     int i=0;
     int count = 0;
     int total=0;
     while(1){
         list2[count]=lists[count];
         if(lists[count] == ends)break;
         count++;
    
    }
    
}
int main(){
    int i=0;
    int list1[1000] = {9,8,5,1,4,10,11,12,3,2,1, ends};  // 0 termina a lista
    int list2[1000] = { ends};  // 0 termina a lista

   
 
    printf("\033c\033[40;37m\n");
    report(list1);
    copys(list1,list2);
    report(list2);
    return 0;
}