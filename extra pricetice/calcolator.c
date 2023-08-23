#include<stdio.h>

int sum(){
    int a,b,res;
    scanf("%d%d",&a,&b);
    res = a + b;
    return res;
}
int add(){
    int a,b,res;
    scanf("%d%d",&a,&b);
    if (a>b){
        res = a-b;
    }else{
        res = b -a;
    }
}

int mul(){
      int a,b,res;
    scanf("%d%d",&a,&b);
    res = a*b;
    return res;
}
int div(){
    int a,b,res;
    scanf("%d%d",&a,&b);
    if (a>b){
        res = a/b;
    }else{
        res = b/a;
    }
}


void manuBar(){
    int option;
    lavel:
    printf("------choese your favarite option ------------\n\n");
    printf("--------Press - 1 sumation \n--------");
    printf("--------Press - 2 subtraction\n--------");
    printf("--------Press - 3 multipipulacaiton \n--------");
    printf("--------Press - 4 devided \n--------");
    printf("--------option here :");
    scanf("%d",&option);
    switch (option)
    {
    case 1:
       printf("sumation number %d\n",sum());
       goto lavel;
        break;
        case 2:
        printf("subtracation %d\n",add());
        goto lavel;
        break;
         case 3:
        printf("subtracation %d\n",mul());
        goto lavel;
        break;
        case 4:
        printf("divison %d\n",div());
        goto lavel;
    
    default:
        break;
    }
   
   }
int main(){
 manuBar();
    return 0;
}