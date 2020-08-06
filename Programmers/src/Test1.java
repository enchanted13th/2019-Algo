public class Test1 {
    static int answer = 0;

    public static void main(String[] args) {
        System.out.println(solution(new int[] { 1, 2, 7, 6, 4 }));
    }

    public static int solution(int[] nums) {
        boolean[] visited = new boolean[nums.length];
        combination(nums, visited, 0, nums.length, 3);
        return answer;
    }

    static void combination(int[] arr, boolean[] visited, int start, int n, int r) {
        if(r == 0) {
            cal(arr, visited, n);
            return;
        }

        for(int i=start; i<n; i++) {
            visited[i] = true;
            combination(arr, visited, i + 1, n, r - 1);
            visited[i] = false;
        }
    }

    static void cal(int[] arr, boolean[] visited, int n) {
        boolean flag = true;
        int sum = 0;

        for (int i = 0; i < n; i++) {
            if (visited[i]) {
                sum += arr[i];
            }
        }

        for (int i = 2; i <= Math.sqrt(sum); i++) {
            if (sum % i == 0) {
                flag = false;
                break;
            }
        }

        if (flag) {
            answer++;
        }
    }
}
