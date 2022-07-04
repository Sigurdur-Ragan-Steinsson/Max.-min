#include <iostream>


using namespace std;

struct minMax{
  int min = 0;
  int max = 0;
};
struct minMax maxMinFun(int nums[]){
 struct minMax fin;
  fin.max = nums[0];
  fin.min = nums[0];

  for(int i = 0; i < 3; i++){
    if(nums[i] > fin.max){
      fin.max = nums[i];
    }
    if(nums[i] < fin.min){
      fin.min = nums[i];
    }
  }
  cout << "The max num is "<< fin.max << " and the min num is "<< fin.min << endl;
  return fin;
}
int main() {
  struct minMax answer;
  cout << "Please enter 3 nums" << endl;

  int nums[3];
  for(int x=0; x<3; x++){
    cin>>nums[x];
  }
  answer=maxMinFun(nums);
  cout<<answer.max;
  cout<<answer.min;
} 