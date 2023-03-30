#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n,i,j, k=0;                                                 //CREATING A FEW PARAMETERS

    cout << "Type the size of the array you would like to sort."<< endl;    //ASKS FOR THE SIZE OF THE
    cin >> n;                                                               //ARRAY THE PLAYER WOULD LIKE TO TEST

    int T[n],S[n];                                                          //CREATES 2 ARRAYS OF THE REQUESTED SIZE

    cout << "Now, type each element of the array." << endl;              //REQUESTS THE ELEMENTS OF THE ARRAY
    for(i=0 ; i<n ; i++){                                                //AND PUTS EACH ELEMENT IN T[]
            cin >> T[i];
            if(T[i]> k){                             //KEEPS THE HIGHEST NUMBER BY COMPARATION
                k=T[i];
            }
    }
    int H[k+1];             //CREATES AN ASSISTANT ARRAY-->SIZE EQUAL TO THE HIGHEST NUMBER OF T[]

    for(i = 0; i<= k; i++){
        H[i] = 0;           //MAKES ZERO EACH ELEMENT OF THE ASSISTANT
    }
    for(j = 0; j<n; j++){
        H[T[j]] = H[T[j]] + 1;  //INCREASES BY ONE THE ELEMENT AT THE POSITION X FOR EVERYTIME X APPEARS AT T

}

    for(i = 1;i<= k; i++){
        H[i]= H[i]+ H[(i-1)];   //H BECOMES AN INCREASING ARRAY IN WHICH THE POSITION'S Y VALUE
}                               //SHOWS HOW MANY TIMES APPEAR IN T[] NUMBERS LESS OR EQUAL TO Y
                                //THAT MEANS X å[0,k) IS GREATER OR EQUAL THAN H[X] NUMBERS OF T[]

    for(j = n-1; j>=0; j--){
        S[H[T[j]]-1]=T[j] ;            //PUTS EACH VALUE OF T[] IN S[] AT THE POSITION THAT H SHOWS
        H[T[j]] = H[T[j]]- 1 ;         //PREVENTS OVERWRITING IN CASE OF REAPPEARNCE OF A VALUE AT T[]
}                                      //BY PLACING IT ONE POSITION LESS THAN BEFORE


    cout << "This is your sorted array." << endl<<"S=[ ";
    for(i=0; i<n; i++){                                     //PRINTS THE SORTED VERSION
        cout<<S[i]<< ' ';
    }
    cout<<"]";




}
