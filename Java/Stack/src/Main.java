import java.util.Stack;

public class Main {
    public static void main(String[] args) {
        //stack 클래스
        //stack 선언
        Stack<Integer> stack = new Stack<>(); //int형 스택 선언
        stack.push(1); //stack에 값 추가
        stack.clear(); //stack의 전체 값 제거
        stack.push(2);
        stack.push(3);
        stack.pop(); //stack 값 제거
        System.out.println(stack.peek());//stack의 가장 상단의 값 출력
        System.out.println(stack.empty()); //stack이 비어있는지 체크(비어있다면 true, 비어있지 않으면 false)
        System.out.println(stack.contains(1)); //stack에 1이 있는지 체크(있다면 true, 없다면 false)

        //배열로 stack 구현

    }
}