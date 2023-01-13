#include <iostream>
#include <vector>
#include <algorithm>
using std::vector;
using namespace std;

bool compare_abs(int i, int j){
  return abs(i) < abs(j);
}

int main(){
  cout << "Hello world"<<endl;

  //quiz max consec numbers
  vector<int> nums = {1, 2, 2, 3, 3, 4, 4, 4};

  int max_cnt = 1;
  int cur_cnt = 1;

  if(nums.size() <=1){
    max_cnt = nums.size();
  }else{

    for(int i = 1; i< nums.size();i++){
      if(nums[i] == nums[i -1]){
        cur_cnt++;
        if(cur_cnt > max_cnt){
          max_cnt = cur_cnt;
        }
      }else{
        cur_cnt = 1;
      }

    }

  }
  std::cout<<"Quiz:find maximum consective in any number:    ";
  std::cout << max_cnt<<std::endl;



  //quiz max consec numbers = 1
  nums = {1, 2, 2, 3, 3, 1, 1, 4, 4, 4, 1, 1, 1, 1, 1};
  max_cnt = 0;
  cur_cnt = 0;
  for(int i = 0; i < nums.size(); i++){
    if(nums[i]==1){
      cur_cnt++;
    }else{
      cur_cnt = 0;
    }

  if(cur_cnt > max_cnt){
    max_cnt = cur_cnt;
  }

}
std::cout<<"Quiz:find maximum consective in 1s:    ";
 std::cout << max_cnt<<std::endl;

 //quiz even digit numbers in array
 max_cnt = 0;
 cur_cnt = 1; //starting for single digit
 int num_i = 0;
 nums = {12,345,2,6,7896, 28, 34, 33, 12312};

 for(int i = 0; i < nums.size(); i++){
   num_i= nums[i] ;
  while( num_i / 10 >0) {
     cur_cnt++;
      num_i = num_i/10 ;

  }
  if( !(cur_cnt&1)){
    max_cnt++;
  }

   cur_cnt = 1;
 }
std::cout<<"To be improve to O(N)without using sort: Quiz:find number of odd digits in the array:    ";
  std::cout << max_cnt<<std::endl;
 
 //Quiz: RETURN ARRAY of square of each number in non-decreaseing
  nums = {-4,-1,0,3,10};
  int x = abs(-100);
  std::cout <<x<<std::endl;

  std::sort(nums.begin(), nums.end(),  compare_abs );

  std::cout<<"To be improve to O(N)without using sort:  Quiz: sort array numbers on its square:    ";
  for(int i = 0; i < nums.size(); i++){
       nums[i] *= nums[i] ;
       std::cout << nums[i] << "  ";
  }

  std::cout<<endl;


 //Quiz: double any 0 in an array
  nums = {1,0,2,3,0,4,5,0};
  //nums[15]= 9;
  //vector<int>::iterator it; 
  //it = nums.begin();
  // it = nums.end();
  // it -=2;
  for(int i = 0; i < nums.size(); i++){
    if(nums[i] == 0){
       nums.insert(nums.begin() + i , 0);
       i++;
    }
  }
 
   std::cout<<"To be improve to O(N): Quiz: double zeros of an array, change its size:    ";
  for(int i = 0; i < nums.size(); i++){
       std::cout << nums[i] << "  ";
  }
   std::cout<<endl;
   //Quiz: double any 0 in an array: pointer version
   nums = {1,0,2,3,0,4,5,0};
  vector<int> *nums1 = &nums;

  for(int i = 0; i < nums1->size(); i++){
    if(nums1->at(i) == 0){
        nums1->insert(nums1->begin() + i , 0);
        i++;
    }
  }
std::cout<<"To be improve to O(N): Quiz: double zeros of an array, change its size(pointer version):    ";
  for(int i = 0; i < nums1->size(); i++){
       std::cout << nums1->at(i) << "  ";
  }
   std::cout<<endl;

 //Quiz: double any 0 in an array - No change in size,  bumps toward right
 nums = {1,0,2,3,0,4,5,0};  //redefine: test value



 vector<int>* nums2 = &nums;
 for(auto i = nums2->begin(); i != nums2->end(); i++ ){
   if(*i == 0){
      nums2->insert(i, 0);
      nums2->pop_back();
      i++;
   }
   
 }
 std::cout<<"To be improve to O(N):  Quiz: double zeros of an array, without change its size(pointer version):    ";
  for(int i = 0; i < nums.size(); i++){
       std::cout << nums[i] << "  ";
  }
   std::cout<<endl;


   vector<int> num1 = {1,2,3,0,0,0};
   int m = 3;
   vector<int> num2 = {2,5,6};

   int n = 3;  //m + n  =  num1.size(),  is a must

   int j1 = 1;//count of a
   int j2 = 1;//count of a

  for(int i = m + n -1; i >= 0; i--){
    if( j2 > n || m >= j1 && num1[m - j1] >= num2[n - j2 ]  ){
        num1[i] = num1[m - j1];
        j1++;
    }else{
        num1[i] = num2[n - j2];
        j2++;
    }
  }
 std::cout<<"Quiz: Merge sort:    ";
  for(int i = 0; i < num1.size(); i++){
       
  }

}