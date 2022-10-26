public class Stream {
    public static void main(String[] args) {
        String s = "appleuegwrhapplejhdsappleyapplen";
        System.out.println(skipapple(s));
    }
   
    static String skipapple(String up) {
        if (up.isEmpty()) {
            return "";
        }

        char ch = up.charAt(0);
        if (up.startsWith("apple")) {
            return skipapple(up.substring(5));
        } else {
            return ch + skipapple(up.substring(1));
        }
    }

}
