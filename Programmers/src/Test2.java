public class Test2 {
    public static void main(String[] args) {
        System.out.println(solution("3people unFollowed me ASfsdf adfasdfA123 123123aASFFGGG 1 asdfasdf  "));
    }

    public static String solution(String s) {
        StringBuilder sb = new StringBuilder();
        String[] split = s.split(" ");
        System.out.println(split.length);
        s.indexOf(s.length()-1)
        for (String st : split) {
            System.out.println("st: " + st);

            String token = st.toLowerCase();
            sb.append(Character.toUpperCase(token.charAt(0)));
            sb.append(token.substring(1));
            sb.append(" ");
        }

        sb.deleteCharAt(sb.length() - 1);
        return new String(sb);
    }
}
