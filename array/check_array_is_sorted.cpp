#include<iostream>

// bruteforce method
using namespace std;



class isSorted{

    public:

    bool ans(int array[],int l){
      

        for(int i = 0 ;i < l-1; i++){

            if (array[i] >= array[i+1]){
                return false;
            }
        }
            return true;
    }




};

int main(){

int array[] = {1,3,4,5,6,7};
isSorted obj;
int size = sizeof(array) / sizeof(array[0]);
bool result = obj.ans(array,size);
cout<<result<<endl;
return 0;

}