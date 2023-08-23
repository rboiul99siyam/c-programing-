 #include<stdio.h>
 int main(){
     int a,s,k;
     scanf("%d",&a);
     s = a-1;
     k = 1;
     for(int i=1;i<=(2*a)-1;i++){

        for(int j=1;j<=s;j++){
               printf(" ");
        }
        for(int j=1;j<=k;j++){
            printf("*");
        }
       if(i<=a-1){
         s--;
        k = k+2;
       }else{
        s++;
        k=k-2;
       }
        printf("\n");
     } 
     return 0;
 }