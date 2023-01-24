#include<iostream>
#include<queue>
#include <algorithm>

using namespace std;

int main(){
    //최대힙
    priority_queue<int> pq_max;
    //최소힙
    priority_queue<int, vector<int>, greater<int>> pq_min;
    
    //원소 삽입
    pq_max.push(1);
    pq_max.push(2);
    pq_max.push(3);
    
    pq_min.push(1);
    pq_min.push(2);
    pq_min.push(3);
    
    //크기 출력
    cout << pq_max.size();
    cout << pq_min.size();
    
    //원소 삭제
    pq_max.pop();
    pq_min.pop();
    
    //비어있는지 확인
    cout << pq_max.empty();
    cout << pq_min.empty();
    
    //swap
    priority_queue<int> pq;
    pq.push(1);
    pq.push(1);
    
    pq_max.swap(pq);
    
    //원소 출력
    for(int i=0; i<pq_max.size(); i++){
        cout << pq_max.top();
        pq_max.pop();
    }
    
    cout << "\n";
    
    
    for(int i=0; i<pq_min.size(); i++){
        cout << pq_min.top();
        pq_min.pop();
    }
    
    cout << "\n";
    
    for(int i=0; i<pq.size(); i++){
        cout << pq.top();
        pq.pop();
    }
}
