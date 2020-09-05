// You have been given two integer arrays / list(ARR1 and ARR2) of size M and N, 
// respectively.You need to print their intersection; An intersection for this problem 
// can be defined when both the arrays/lists contain a particular value

#include <iostream>
#include<climits> 
using namespace std;

void intersection(int *input1, int *input2, int size1, int size2)
{
    //Write your code here
    int  k=0, i,j;
    
        for(i = 0; i < size1; i++){
            int isUnique=2;
            for(j = 0; j < size2; j++){
                if(input1[i] == input2[j]){
                  
                    cout << input1[i] << " ";
                    input2[j]=INT_MIN;
                    break;
                	}
				}
			}

   
}

int main() {
	// your code goes here
	int arr1[]= {9,2,4,1,8,43};
	int arr2[]= {6,9,8,5,43};
	intersection(arr1, arr2,6,5);
	return 0;
}
