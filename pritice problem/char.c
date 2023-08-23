 #include<stdio.h>
 #include<string.h>
 int main(){
    char a[100],b[100],c[100];
   scanf("%s%s",a,b);
    int lenT = strlen(a);
    int lenS = strlen(b);
    printf("%d %d ",lenT,lenS);
    printf("\n");
     strcat(a,b-1);
    printf("%s%s\n",a,b);
    int i=0,j=strlen(a)-1;
    while(i<j){
    char tmp = a[0];
    a[0] = b[0];
    b[0]= tmp;
    i++;
    j--;
    printf("%s %s\n",a,b);
    }
    
   
     return 0;
 }