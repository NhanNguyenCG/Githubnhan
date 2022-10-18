/*This programming for array A with check in the triagular*/
#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int>& A){
    int temp=0;
    for (int i = 0; i < A.size()-2; i++)
        for (int n = i+1; n < A.size()-1; n++)
            for (int m = i+2; m < A.size(); m++)
        {
            if((A[i]<A[n]+A[m])&&(A[n]<A[i]+A[m])&&(A[m]<A[n]+A[i]))
                //temp =1;
                return 1;
        }
    return 0;
}

int main(){
    vector<int> array {1,2,100};
    if(solution(array)==1){
        cout<<"exit";
    }
    else
        cout<<"Non_exit";
    return 0;
}