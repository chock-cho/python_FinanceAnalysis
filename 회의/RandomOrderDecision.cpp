// 오늘의 수기하는 사람 && 발표 순서 정하기
#include <iostream>
#include <math.h>
#include <map>
#include <vector>
using namespace std;

int main(){
  map<string, int> mp;
  mp.insert({"연우", 0});
  mp.insert({"도원", 1});
  mp.insert({"수정", 2});

  srand(time(NULL));
  int sugi_today = rand()%3;
  vector<vector<int>> v = { {0, 1, 2}, {0, 2, 1}, {1, 2, 0}, {1, 0, 2}, {2, 1, 0}, {2, 0, 1}};
  int ran_idx = rand()%v.size();
  
  for(auto iter : mp){
    if(iter.second == sugi_today)
    {
      cout << "오늘의 수기자는 " << iter.first <<"입니다.\n";
    }
  }
  
  cout << "\n***오늘 회의(공부내용) 발표 순서***\n";
  for(int i = 0; i < 3; i++){
   for(auto iter : mp){
     if(v[ran_idx][i] == iter.second) {
       if(i != 2){
          cout << iter.first << "-> ";
       }
       else {
         cout << iter.first << "\n";
       }
     }
   }
  }
  return 0;
}
