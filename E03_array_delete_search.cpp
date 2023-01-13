#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
using std::vector;
using std::unordered_map;
using std::unordered_set;
using namespace std;


int main(){
  cout << "Hello world"<<endl;
  
  vector<int >nums = {0,1,2,2,3,0,4,2};
  int val = 2;

  nums.erase(nums.begin()+1, nums.begin()+3);  // [ )
 //check basic erase function
 std::cout << "check basic erase function:  " << "  ";
  for(int i = 0; i < nums.size(); i++){
    std::cout << nums[i] << "  ";
  }
 cout<<endl;

//Quiz: delete numbers from array: ";
  nums = {0,1,2,2,3,0,4,2};
  for(int i = 0; i < nums.size(); i++){
    if(nums[i]== val){
      nums.erase(nums.begin() + i);
      i --;
    } //O(n2) Bruce force solution


  }
  std::cout << "Quiz: delete numbers from array, no keep size, bruce force solution:  " << "  ";
  for(int i = 0; i < nums.size(); i++){
  
    std::cout << nums[i] << "  ";
  }
 cout<<endl;

//Quiz: delete numbers from array:  keep size, better solution";
  nums = {0,1,2,2,3,0,4,2};
  //nums = {1, 2, 3, 3, 2, 7};
  int cnt = 0;
  for(int i = 0; i < nums.size(); i++){
    if(nums[i] == val){
      cnt++;
    }else if(cnt > 0){
      nums[i - cnt] = nums[i];
    }else{

    }
  }
  for(int i = 0; i < cnt; i++){
    nums.pop_back();
  }

    std::cout << "Quiz: delete numbers from array, *keep size, better solution:  " << "  ";
  for(int i = 0; i < nums.size(); i++){
  
    std::cout << nums[i] << "  ";
  }
 cout<<endl;

  nums = {0,1,2,2,3,0,4,2};
 nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
    std::cout << "Quiz: delete numbers from array, *keep size, one line solution:  " << "  ";
  for(int i = 0; i < nums.size(); i++){
  
    std::cout << nums[i] << "  ";
  }
 cout<<endl;

//Quiz: make a unique non-decreasing order 
nums = {0,0,1,1,1,2,2,3,3,4};

cnt = 0;
//nums.size() = 1 handl
  for(int i = 0; i < nums.size();i++){
     if(i > 0 && nums[i] == nums[i - 1]){
       cnt++;
     }else{
       nums[i - cnt] = nums[i];
   }
  }

  for(int i = 0; i < cnt; i++){
     nums.pop_back();
  }

    std::cout << "Quiz: make a unique non-decreasing order from non-unique:  " << "  ";
  for(int i = 0; i < nums.size(); i++){
    std::cout << nums[i] << "  ";
  }
  cout<<endl;


std::cout << "Quiz:find if contain pairs of element i, j that arr[i] = 2*arr[j] (unorder map):  " << "  ";
  unordered_map<int, int> map;
  vector<int> arr = {-2,0,10,-19,4,6,-8};
  for(int i: arr){
     map[i]++;
  }


  for(int i: arr){

     if(i == 0 && map[i] == 1){continue;}

     if(map.count(i*2) > 0 || (i%2 == 0 && map.count(i/2) > 0)){
      std::cout << "Found: "<< i << endl;
      break;
     }
  }
  cout<<endl;
  
  std::cout << "Quiz:find if contain pairs of element i, j that arr[i] = 2*arr[j] (unorder set):  " << "  ";
  unordered_set<int> set;
  for(int i: arr){
     if(set.count(2*i)>0 || !(i%2) && set.count(i/2)>0){
      cout<<"Found: "<<i<<endl;
      }
      set.insert(i);
  }
   cout<<endl;

std::cout << "Quiz:find if array has mountain pattern:  " << "  ";
  arr = {-2,0,10,-19,4,6,-8};
  arr = {0, 3, 2, 1};
  vector<int>::const_iterator it;
  it = std::max_element(arr.begin(), arr.end());
  if( it - arr.begin() < 1 || arr.end() - it < 2 ){
    cout << "not mountaina";
  }else{
      for(auto i = arr.begin(); i != (it + 1); i++){   
          std::cout << *i << "  ";
          if( i != arr.begin() && *i <= *(i - 1)){
            cout << "not mountainb";
            break;
          }
     }
       cout<<endl;

      for(auto i = arr.end() - 1; i != (it - 1); i--){
         std::cout << *i << "  ";
          if( i != arr.end() -1 && *i <= *(i + 1)){
            cout << "not mountainc" << *i << "  "<<*(i -1) << "  ";
            break;
          }
    }
  }

  //check position
   cout<<endl;
   cout << it - arr.begin();
   cout<<endl;
   cout << arr.end() - it;



  //cout <<w;

  // if(arr.size()>2){

    
  //   }else{

  // }

}


