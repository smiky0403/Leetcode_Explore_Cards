//begginner_intro.cpp
#include <iostream>
#include <vector>
#include <list>
#include<unordered_map>
using std::vector;
using std::string;
using std::unordered_map;

class Solution {
public:
    vector<string> fizzBuzz(int n) {

        vector<string> x;
        for(int i = 1; i <= n; i++){
            x[i -1] = std::to_string(i);
        }
    return x;     
    }
};


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) { std::cout<<"INIT---";}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
  

int main(int, char**) {
    std::cout << "Hello, world!\n";
    int m = 2,n = 3 ;
    vector<vector<int>> v2_2(m, vector<int>(n));

    vector<vector<int>> board;
   // for(int i = 0;  i < board.size(); i++){
    for(auto w: board){
        for(int j = 0; j < w.size(); j++){

        }
    }
    Solution sln;
    int z = 17;
    int x = z>>2;
    std::cout << x <<std::endl;

    ListNode l1, l2, l3, l4, l5;
    l1.val = 1;l2.val = 2;l3.val = 3;l4.val = 4;
    //l5.val = 5;
    l1.next = &l2;
    l2.next = &l3;
    l3.next = &l4;
    //l4.next = &l5;
    std::cout << l1.next->next->next->val  <<std::endl;
    //std::cout << l1.next->next->next->next->val  <<std::endl;

    ListNode* middle = &l1;
    ListNode* end = &l1;
    while( end != nullptr && end->next != nullptr){
        middle = middle->next;
        end = end->next->next;
    }
    std::cout << middle->val <<std::endl;

    string ransomNote, magazine;
    magazine = "magazine";
    ransomNote = "ennizagam";
    unordered_map<char, int> map;
    for(int i =0; i < magazine.length();i++){
        char c = magazine.at(i);
        map[c]++;
    }
    std::cout<< map['a']<<std::endl;
     std::cout<< map['k']<<std::endl; //none exist, make sure value = 0 by default

    for(int i =0; i < ransomNote.length();i++){
        if(map[ransomNote.at(i)]-- > 0){
            std::cout<< "curret char matched"<<std::endl;
            }else{
            std::cout<< "no match no this char, breaks"<<std::endl;
            break;
        }
    }




 }

