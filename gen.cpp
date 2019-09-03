#include<bits/stdc++.h>
using namespace std;

int random(int a,int b){
    return rand()%(b-a+1)+a;
}

int main(int argc,char *argv[]){

    srand(atoi(argv[1]));

    int n = random(2,10);
    cout<<n<<endl;
    set<int> grp;
    for(int i=0;i<n;i++){
        int x;
        do{
            x = random(1,10);
        }while(grp.count(x));
        grp.insert(x);
        cout<<x<<' ';
    }
    cout<<endl;

    return 0;
}
