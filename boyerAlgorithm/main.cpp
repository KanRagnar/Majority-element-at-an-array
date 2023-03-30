#include <iostream>

using namespace std;

string BoyerMoore(string c[], int length){
    int i,counter=0;
    string candidate="none";
    for(i=0 ; i<length ; i++){
        if(counter==0){
            candidate=c[i];
            counter++;
        }
        else if(candidate==c[i]){
            counter+=1;
        }
            else
                counter-=1;
    }
    counter=0;
    for(i=0; i<length; i++){
        if(candidate==c[i])
            counter++;
    }
    if(counter>=length/2)
        return candidate;
    else return "No one has more than half the votes";
}

int main(){
    string name;
    int n,j;
    cout << "Hello gentlemen, I heard you wanted to know if there is a candidate with more than half the votes."<<endl <<"I can help you with that just tell me how many people voted in total?"<< endl;
    cin >> n;
    cout << "May I also have the Data of the votes?"<< endl;
    string votes[n];
    for(j=0 ; j <n ; j++){
        cin >> name;
        votes[j]=name;
    }
    string candidate= BoyerMoore(votes, n);
    cout << candidate << "";
    if(candidate!="No one has more than half the votes"){
        cout<< " got voted by more than half the voters";
    }
    return 0;
}
