#include<iostream>
using namespace std;
void TOH(int n, char s , char a , char d){
         if(n==0){
            return ;
         }
         TOH(n-1, s, d, a);
        cout << "Move disk " << n << " from rod " << s
         << " to rod " << d << endl;
         TOH(n-1, a, s , d);
}
int main(){
    int n;
    cin>>n;
    TOH(n,'A','B','C');
}
