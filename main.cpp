#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include<set>
using std::vector;
using std::unordered_map;
using std::unordered_set;
using namespace std;

int main(){
  cout << "Hello world"<<endl;

  //Quiz: Replace Elements with Greatest Element on Right Side: 
  cout << "Quiz: Replace Elements with Greatest Element on Right Side:  ";
  vector<int> arr = {17,18,5,4,6,1};

  int temp_last = *(arr.end() - 1);
  int temp_max = std::numeric_limits<int>::min();

   for(int i =  arr.size() - 2; i > -1; i--){
      temp_max = std::max( temp_max, temp_last);
      temp_last = arr[i];
      arr[i] = temp_max;
   }
 *(arr.end() - 1) = -1;

  for(int i = 0; i < arr.size(); i++ ){
    cout << arr[i] << "   ";
  }

cout << "Quiz: Move 0s to the right:  ";
vector<int> nums = {0,1,0,3,12};

int cnt = 0; //write pointer
for(int i : nums){
  if(i == 0){
  }else{
    nums[cnt++] = i;
  }
}

while(cnt < nums.size()){
  nums[cnt++] = 0;
}

for(int i = 0; i < nums.size(); i++ ){
    cout << nums[i] << "   ";
  }
 cout<<endl;
 //Quiz:  move all the even integers to the beginning  odd integers: 
cout << "move all the even integers to the beginning  odd integers: ";

nums = {3,1,2,2,1,4};

cnt = 0;  //count on even numbers
for(int i = 0, j = 0; i < nums.size(); i++ ){
 if(nums[i] %2){
  cnt++;
 }else{
  std::swap(nums[i], nums[i - cnt]);
 }
}

 for(int i = 0; i < nums.size(); i++ ){
    cout << nums[i] << "   ";
  }
cout<<endl;

// Quiz:ordering expected[i]  of its ith in non descening line
cout << "ordering expected[i]  of its ith in non descening line";
vector<int> heights = {5,1,2,3,4};
vector<int> expect =heights;

cnt =0;//nums of non-matching element
std::sort( expect.begin(), expect.end());
 for(int i = 0; i < expect.size(); i++ ){
  if(expect[i]!= heights[i]){cnt++;}
 }


 for(int i = 0; i < expect.size(); i++ ){
    cout << expect[i] << "   ";
  }
cout<<endl;
cout<<cnt; 
cout<<endl;

// Quiz:return the maximum number of consecutive 1's in the array if you can flip at most one 0
vector<bool> nums1 = {1,0,1,1,0,1,1,1,1,1,0,1,0,1,1,1,1};
int max_cnt = 0; //result
int j1 = -1;
int j2 = -1;
for(int i = 0; i < nums1.size(); i++){
  if(nums1[i] == 0){
    if(j1 >= 0){
      j2 = j1;
    }
     j1 = i;
  }
  if(i - j2 > max_cnt){max_cnt = i - j2;}
}
cout << " maximum number in the array if I can flip one of its 0: ";
cout<<max_cnt; 
cout<<endl;

// Quiz: return the third distinct maximum number in this array, (return max if nonexist) : 
nums = {2,2,3,1,4};

unordered_set<int> st;
for(int num : nums ){
  st.insert(num);
}

cout <<endl;

cout << 851 + 777 + 562 + 550 + 777 + 851 + 740 + 777 - 497.25<<endl;
cout << 47.5 + 67.5 + 47.5 + 34.5 - 4 + 43 -86 + 52 + 62 - 43 + 43 + 31 + 43 + 31 + 27 <<endl;
//cout << st
double x1 = 11.41 + 210.70 + 58.11 + 10.89;
cout << x1 <<endl;
double x2 = 63 + 225 + 145 + 142.8 + 159.2 + 65.6 + 65.6 + 158.4;
cout << x2 <<endl;
cout << x1 + x2 <<endl;

// vector<int> w;
// for(int i = 0; i <nums.size(); i++ ){
//     if(w.size() < 1 || nums[i] > w[0]){
      
//       if(w.size() < 1){w.push_back(nums[i]);}else{w[0] = nums[i];}

//     }else if(w.size() < 2 || nums[i] > w[1]){
      
//       if(w.size() < 2){w.push_back(nums[i]);}else{w[1] = nums[i];}

//     }else if(w.size() < 3 || nums[i] > w[2]){
      
//      if(w.size() < 3){w.push_back(nums[i]);}else{w[2] = nums[i];}

//     }else{
//     }
//   }
// std::sort(w.begin(), w.end());

//   if(w.size() < 3){
//     cout << "Third max does not exist, its max is : "<< w[2];
//   }else{cout << "Third max is : "<< w[0];}


  // if(flag){

  // }else{
  //   cout <<
  // }

 //0319

}