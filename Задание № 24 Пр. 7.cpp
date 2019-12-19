
// Воротников К. ИСП-О-18
// Вариант 2С № 24.
// Выполнить "хитрую" сортировку. Выбрать из массива посредством
// однократного просмотра, выбрать возраст. последовательность,
// перенести в выходной массив и заменить во входном на -1. Затем
// оставшиеся элементы вкл. в упорядоченную последовательность.

#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

int main()
{
  srand(time(NULL));
  int n, k = 0;
  cin >> n;
    vector<int> A(n);
    
    for(int& arr : A) {
      arr = rand()%10;
      cout << arr << endl;
      }
      cout << endl;
    vector<int> B;
     int i = 0;
     bool q = 0;
     do {
       if(A[i+1] >= A[i]) {
         B.push_back(A[i]);
         A[i] = -1;
         q =1;
         k++;
       } else if (q) {
         B.push_back(A[i]);
         A[i] = -1;
         k++;
         break;
       }
       i++;
     } while(i <= A.size() - 1);
     for(int& arr : A)
        cout << arr << endl;
      for(int&i : A)
        if(i != -1)
          B.push_back(i);
     
     for(; k < B.size(); k++){
       for(int i = 0; i < k; i++) {
         if(B[k] <= B[i]){
         B.insert(B.begin() + i, B[k]);
         B.erase(B.begin() + k+1);
         }
       }
     }
     cout << endl;
     for(int&i : B) cout << i << endl;
}