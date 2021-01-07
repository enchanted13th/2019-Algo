import java.util.Stack;

public class Main {
    public static void main(String[] args) {
        Solution solution = new Solution();
        int[][] board = { {0, 0, 0, 0, 0}, {0, 0, 1, 0, 3}, {0, 2, 5, 0, 1}, {4, 2, 4, 4, 2}, {3, 5, 1, 3, 1} };
        int[] moves = { 1, 5, 3, 5, 1, 2, 5, 1, 4, 3 };
        int result = solution.solution(board, moves);
        System.out.println("result: " + result);
	}
}

class Solution {
    public int solution(int[][] board, int[] moves) {
        Stack<Integer> stack = new Stack<>();
        int answer = 0;
        int move = 0;
        for (int i = 0; i < moves.length; i++) {
            move = moves[i] - 1;
            for (int j = 0; j < board.length; j++) {
                if (board[j][move] != 0) {
                    if (!stack.empty()) {
                        if (stack.peek() == board[j][move]) {
                            board[j][move] = 0;
                            answer += 2;
                            stack.pop();
                            break;
                        }
                    }
                    stack.push(board[j][move]);
                    board[j][move] = 0;
                    break;
                }
            }
        }
        return answer;
    }
}