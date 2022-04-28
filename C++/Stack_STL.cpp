#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<int> s; //스택 생성

    //push : top에 원소를 추가
    s.push(1);
    s.push(2);
    s.push(3);

    //pop : top에 있는 원소 삭제
    s.pop();

    //top : top에 있는 원소 반환
    cout << "top element is " << s.top();

    //size : 스택 사이즈 반환
    cout << "Size of stack is " << s.size();
    //empty : 스택이 비어있으면 True, 비어있지 않으면 False 반환
    cout << "Is it empty? " << s.empty();

}