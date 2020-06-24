
int countBuildings(int arr[], int n) 

{ 

    int count = 1; 
    int curr_max = arr[0]; 

    for (int i=1; i<n; i++) 

    { 
        if (arr[i] > curr_max) 

        { 

            count++; 

            curr_max=arr[i]; 

        } 

    } 
    return count; 

}

