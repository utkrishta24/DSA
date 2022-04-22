#include<iostream>
using namespace std;

//n people in circle 0 to n-1
//1st killed is index k-1th person
//pistol is handed over to index k
//kill kth person in every iteration in circular order
//find position of survivor
//pistol start with 0


//jos(4,3) return 0
//should jos(5,3) return 3
//jos(3,3) return 1

//t(n)=t(n-1)+c

//tc 0(n)
//as 

//if position starts with 1 then base (n==1)
//call another which adds 1 to it

int jos(int n, int k)
{
    if (n==1)
    {
        return 0;
    }
 
return (jos(n-1,k)+k)%n;
}

int main(){

}