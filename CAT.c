// Store the n number of students in jee mains and advanced and check whetether they are eligible or not

#include<stdio.h>
int main(){
    int n,m;
    scanf("%d",&n);
    int jeemain[n];
    int jeeadvanced[n];

    for(int i=0;i<n;i++){
        scanf("%d",&jeemain[i]);
        scanf("%d",&jeeadvanced[i]);
    }
    for(int i=0;i<n;i++){
        if(jeemain[i]>=180){
            m=jeemain[i];
        // }else if(jeemain[i]<180){
        //     printf("Students of jee mains are qualified for level 3 = %d\n",jeemain[i]);
        // }else if(jeeadvanced[i]>=180){
        //     printf("Student of jee advanced are qualified for level 4 are = %d\n",jeeadvanced[i]);

        // }else if(jeeadvanced[i]<180){
        //     printf("Student of jee advanced are qualified for level 3 are = %d\n",jeeadvanced[i]);

        // }
    }
    


    }
    printf("%d",m);
    return 0;

}