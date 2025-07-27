#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int found = 0;

    for(int i = 0; i < n; i++){
        int count = 0;
    

         //This commented part is optional
        // Skip already checked elements
        // int alreadyChecked = 0;
        // for(int k = 0; k < i; k++){
        //     if(arr[k] == arr[i]){
        //         alreadyChecked = 1;
        //         break;
        //     }
        // }
        // if(alreadyChecked) continue;

        // Count full frequency
        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }

        if(count >= 2){
            printf("%d", arr[i]);
            found = 1;
            break;
        }
    }

    if(!found){
        printf("No majority candidate found.");
    }

    return 0;
}
