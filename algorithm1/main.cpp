#include <iostream>

using namespace std;



string algorithm2(string c[], int length){
    if(length==1){
        return c[0];
    }
    string res[2];          //the majority element of the childs will be saved here
    int i,counter=0;


    //dividing the array at half
    int a=length/2;
    int b=length-a;
    string arr1[a],arr2[b];
    for(i=0 ; i<a ; i++){
        arr1[i]=c[i];
    }
    for(i=0 ; i<b; i++){
        arr2[i]=c[i+a];
    }

    res[0]=algorithm2(arr1,a);      //finding the majority element of the left side
    res[1]=algorithm2(arr2,b);      //finding the majority element of the right side


    //checks if the majority of the left half is majority at the input's array
    for(i=0 ; i<length; i++){
        if(c[i]==res[0])
            counter++;
        if(counter>length/2){
            return res[0];
        }
    }
    counter=0;

    //checks if the majority of the right half is majority at the input's array
   for(i=0 ; i<length; i++){
        if(c[i]==res[1])
            counter++;
        if(counter>length/2)
            return res[1];
        else return "No one has more than half the votes";
        }
    }




int main(){
    int n,j;
    string name;
    cout << "Hello gentlemen, I heard you wanted to know if there is a candidate with more than half the votes.I can help you with that just tell me how many people voted in total?"<< endl;
    cin >> n;
    cout << "May I also have the Data of the votes?"<< endl;
    string votes[n];
    for(j=0 ; j <n ; j++){
        cin >> name;
        votes[j]=name;
    }
    string candidate= algorithm2(votes, n);
    cout << candidate << "";
    if(candidate!="No one has more than half the votes"){
        cout<< " got voted by more than half the voters";
    }
    return 0;
}
